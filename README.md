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

What is the difference between a dynamic linked library and a static library?

Dynamic or shared libraries are loaded and linked at runtime when the application is launched (dll). That means that more than one application can use the same dynamic dll file and this dll file can independently be updated or replaced.
Static libraries are linked within the application when it is compiled and therefore there is no independant file that may be shared with other applications.

Describe a logging system in your own words

A logging System is a set of functions to capture/store information about Events and Actions that occur within the Application/Software. It allows Developers and Users to track and analyze behaviour or previously mentioned actions and Events by sending those to a logfile or the standard output for analysis. This allows to identify errors or track performance issues or for troubleshooting

What is a design pattern?

A design pattern is a reusable software/programming language solution to common problems that arise again and again. It's essentially a recipe how to approach solving particular problems that have a proven track record through
experience and best practices. Design pattern provide ways to structure core which is modular, flexible, maintainable and helps to communicate and understand purpose and intention of code. 

Name and describe 2 Design patterns

1. Factory Method - Factory method is a creational pattern that defines an interface for object creation which allows subclasses to decide which classes to instantiate by themselves. It allows a class to defer instatiation to subclasses while providing a joint interface for object creation which can reduce (or help to reduce) coupling between classes and improve code maintainability

2. Observer - This pattern is of a behavioural nature and allows an object (subject) to notify a set of dependent objects (observers) so they will automatically be informed of any changes in its state. This is helpful in establishing one to many relationships between subject and observers without tight coupling.

