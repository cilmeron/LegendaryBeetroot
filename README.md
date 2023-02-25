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


Describe a logging system with your own words:
It's essentially a tool that allows tracking and recording of events that occur in our code. It's usually a set of functions and macros that we can use to log messages of different severity levels (debug, warn, info, error). It may be configurable in a way that it can log to various output destinations (for example stdout, log files on the hard drive, databases)
What is the difference between git submodules and git subtrees:
They're both git mechanisms to include external repos within our project. Git submodules are almost like pointers to other git repos. When a submodule is added it adds a reference to a specific commit in that submodules repository. The reference is stored with the url and path. When a user clones the parent repository the submodule repository is downloaded as a separate entity.
Subtrees allow to include the contents of one repository directly into another. Changes to that subtree can be committed and pused as part of the parent repository.
What is the build system in C++? Name 3 build systems:
It's a set of tools and processes to compile and link c++ code into executables or libraries. It automates the process of building software. 3 examples are make, cmake and ninja
What is a package manager in C++? Name 3 package managers:
It's a tool that helps developers manage dependencies by automatically downloading and installing external libraries, frameworks or tools that our project relies on. 3 package managers are Conan, vcpkg and homebrew.

