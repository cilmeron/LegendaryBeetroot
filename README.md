# LegendaryBeetroot
Questions

What is the difference between git and github?

Git is a version control software that allows to track changes in code. Github is a web-based hosting service for git repositories. Git is open source, github is owned by Microsoft.

Name 3 benefits of version control systems:

*Ability to manage source code
*Protect against data loss
*Enable concurrent work on code/documents

Name 3 alternatives to git:
*Sourceforge
*SVN
*Mercurial

Name 2 differences between git and other version control systems:

One of the main differences between git and for example SVN is that git is distributed while SVN is centralized. Git uses multiple repositories on servers/local while SVN uses a single centralized repository to store all source code. Git allows developers to work on their local copies of the codebase and merge changes when they are ready, SVN require developer to check out code and check it back in when changes have been made.
Another difference is that git is purely focused on code while other version control software may also store non-code assets.

Name known issues related to game engines (Unreal, Unity) and version control systems:

Binary file formats and large files may introduce problems when trying to merge. Developing for PC, consoles and mobile devices may also be a problem (e.g. when developing for different Systems there may be incompatibilities in file formats, clients, version control compatibility)
