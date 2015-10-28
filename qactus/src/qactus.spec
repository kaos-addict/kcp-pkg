#
# spec file for package qactus
#
# Copyright (c) 2015 SUSE LINUX GmbH, Nuernberg, Germany.
#
# All modifications and additions to the file contributed by third parties
# remain the property of their copyright owners, unless otherwise agreed
# upon. The license for this file, and modifications and additions to the
# file, is the same license as for the pristine package itself (unless the
# license for the pristine package is not an Open Source License, in which
# case the license is the MIT License). An "Open Source License" is a
# license that conforms to the Open Source Definition (Version 1.9)
# published by the Open Source Initiative.

# Please submit bugfixes or comments via http://bugs.opensuse.org/
#


Name:           qactus
Version:        0.7.0
Release:        1.2
Summary:        An OBS notifier application
License:        GPL-2.0 or GPL-3.0
Group:          Utility/Development/Other
Url:            http://www.javierllorente.com/
Source:         %{name}-%{version}.tar.bz2
BuildRequires:  hicolor-icon-theme
BuildRequires:  qtkeychain-qt5-devel
BuildRequires:  update-desktop-files
BuildRequires:  pkgconfig(Qt5Core)
BuildRequires:  pkgconfig(Qt5Gui)
BuildRequires:  pkgconfig(Qt5Network)
BuildRequires:  pkgconfig(Qt5Widgets)
BuildRoot:      %{_tmppath}/%{name}-%{version}-build

%description
A Qt-based OBS notifier application

%prep
%setup -q -n %{name}

%build
cat > .qmake.cache <<EOF
PREFIX=%{_prefix}
QMAKE_CXXFLAGS_RELEASE += "%{optflags}"
EOF
qmake-qt5
make %{?_smp_mflags}

%install
make INSTALL_ROOT=%{buildroot} install
%suse_update_desktop_file %{name}

%post
%desktop_database_post

%postun
%desktop_database_postun

%files
%defattr(-,root,root)
%doc COPYING README.md
%{_bindir}/%{name}
%{_datadir}/applications/%{name}.desktop
%{_datadir}/icons/hicolor/128x128/apps/%{name}.png

%changelog
* Sun Aug 16 2015 javier@opensuse.org
-  Update to 0.7.0
  * New feature: you can now add packages by dropping OBS package URLs
  on the packages' tab
  * New feature: proxy support
  * New feature: self-signed certificate support
  * New feature: using any OBS instance is now supported
  * Networking improvements: async getBuildStatus() requests
  * Code refactoring: OBS façade created, some code cleanup
  * Error handling: it's more verbose about HTTP and SSL errors
  * Fixed getting description from OBSRequest
  * Fixed parsing empty tags (ie: <description/>)
  * Minor improvements
* Mon Jun 15 2015 javier@opensuse.org
- Update to 0.6.0
  * Qactus has been ported to Qt5
  * Fix getting timer interval from settings on startup
  * Request state editor improvements (displays more info)
  * Open request state editor on double click
  * Show tooltip on cell if text is truncated
  * Minor improvements
* Thu Apr 30 2015 javier@opensuse.org
- Update to 0.5.1
  * New feature: request diff is retrieved and displayed on
  request state change dialog
  * Row and request state change dialogs improved
  * Minor improvements
* Wed Apr 29 2015 javier@opensuse.org
- Update to 0.5.0
  * New feature: accepting/declining requests
  (right click->Change State)
* Fri Apr 17 2015 javier@opensuse.org
- Update to 0.4.3
  * Fix tray icon not set to red on change
  * New feature: shortcuts for add, remove, refresh and
  mark all as read
  * New feature: mark as read for a single build item
  * Minor improvements
* Thu Apr  9 2015 javier@opensuse.org
- Update to 0.4.2
  * New feature: 'Mark all as read'
* Sat Mar 14 2015 javier@opensuse.org
- Update to 0.4.1
  * New feature: auto login
- qactus-pro-file-cleanup.patch removed (merged upstream)
* Sun Mar  1 2015 malcolmlewis@opensuse.org
- Spec file clean up.
- Add qactus-pro-file-cleanup.patch: Clean up project file for
  install.
* Thu Feb 19 2015 javier@opensuse.org
- Initial package.
