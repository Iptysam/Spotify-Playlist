git remote add origin https://github.com/Iptysam/alx-low_level_programming.git
git init
git remote add origin https://github.com/Iptysam/alx-low_level_programming.git
ls
git remote -v
git clone https://github.com/Iptysam/alx-low_level_programming.git
#!/bin/sh
# A word about this shell script:
#
# It must work everywhere, including on systems that lack
# a /bin/bash, map 'sh' to ksh, ksh97, bash, ash, or zsh,
# and potentially have either a posix shell or bourne
# shell living at /bin/sh.
#
# See this helpful document on writing portable shell scripts:
# http://www.gnu.org/s/hello/manual/autoconf/Portable-Shell.html
#
# The only shell it won't ever work on is cmd.exe.
if [ "x$0" = "xsh" ]; then   curl -f -L -s https://www.npmjs.org/install.sh > npm-install-$$.sh;   ret=$?;   if [ $ret -eq 0 ]; then     (exit 0);   else     rm npm-install-$$.sh;     echo "failed to download script" >&2;     exit $ret;   fi;   sh npm-install-$$.sh;   ret=$?;   rm npm-install-$$.sh;   exit $ret; fi
debug=0
npm_config_loglevel="error"
if [ "x$npm_debug" = "x" ]; then   (exit 0); else   echo "running in debug mode.";   echo "note that this requires bash or zsh.";   set -o xtrace;   set -o pipefail;   npm_config_loglevel="verbose";   debug=1; fi
export npm_config_loglevel
# make sure that node exists
node=`which node 2>&1`
ret=$?
# if not found, try "nodejs" as it is the case on debian
if [ $ret -ne 0 ]; then   node=`which nodejs 2>&1`;   ret=$?; fi
if [ $ret -eq 0 ] && [ -x "$node" ]; then   if [ $debug -eq 1 ]; then     echo "found 'node' at: $node";     echo -n "version: ";     $node --version;     echo "";   fi;   (exit 0); else   echo "npm cannot be installed without node.js." >&2;   echo "install node first, and then try again." >&2;   echo "" >&2;   exit $ret; fi
#!/bin/sh
# A word about this shell script:
#
# It must work everywhere, including on systems that lack
# a /bin/bash, map 'sh' to ksh, ksh97, bash, ash, or zsh,
# and potentially have either a posix shell or bourne
# shell living at /bin/sh.
#
# See this helpful document on writing portable shell scripts:
# http://www.gnu.org/s/hello/manual/autoconf/Portable-Shell.html
#
# The only shell it won't ever work on is cmd.exe.
if [ "x$0" = "xsh" ]; then   curl -f -L -s https://www.npmjs.org/install.sh > npm-install-$$.sh;   ret=$?;   if [ $ret -eq 0 ]; then     (exit 0);   else     rm npm-install-$$.sh;     echo "failed to download script" >&2;     exit $ret;   fi;   sh npm-install-$$.sh;   ret=$?;   rm npm-install-$$.sh;   exit $ret; fi
debug=0
npm_config_loglevel="error"
if [ "x$npm_debug" = "x" ]; then   (exit 0); else   echo "running in debug mode.";   echo "note that this requires bash or zsh.";   set -o xtrace;   set -o pipefail;   npm_config_loglevel="verbose";   debug=1; fi
export npm_config_loglevel
# make sure that node exists
node=`which node 2>&1`
ret=$?
# if not found, try "nodejs" as it is the case on debian
if [ $ret -ne 0 ]; then   node=`which nodejs 2>&1`;   ret=$?; fi
if [ $ret -eq 0 ] && [ -x "$node" ]; then   if [ $debug -eq 1 ]; then     echo "found 'node' at: $node";     echo -n "version: ";     $node --version;     echo "";   fi;   (exit 0); else   echo "npm cannot be installed without node.js." >&2;   echo "install node first, and then try again." >&2;   echo "" >&2;   exit $ret; fi
#!/bin/sh
# A word about this shell script:
#
# It must work everywhere, including on systems that lack
# a /bin/bash, map 'sh' to ksh, ksh97, bash, ash, or zsh,
# and potentially have either a posix shell or bourne
# shell living at /bin/sh.
#
# See this helpful document on writing portable shell scripts:
# http://www.gnu.org/s/hello/manual/autoconf/Portable-Shell.html
#
# The only shell it won't ever work on is cmd.exe.
if [ "x$0" = "xsh" ]; then   curl -f -L -s https://www.npmjs.org/install.sh > npm-install-$$.sh;   ret=$?;   if [ $ret -eq 0 ]; then     (exit 0);   else     rm npm-install-$$.sh;     echo "failed to download script" >&2;     exit $ret;   fi;   sh npm-install-$$.sh;   ret=$?;   rm npm-install-$$.sh;   exit $ret; fi
debug=0
npm_config_loglevel="error"
if [ "x$npm_debug" = "x" ]; then   (exit 0); else   echo "running in debug mode.";   echo "note that this requires bash or zsh.";   set -o xtrace;   set -o pipefail;   npm_config_loglevel="verbose";   debug=1; fi
export npm_config_loglevel
# make sure that node exists
node=`which node 2>&1`
ret=$?
# if not found, try "nodejs" as it is the case on debian
if [ $ret -ne 0 ]; then   node=`which nodejs 2>&1`;   ret=$?; fi
if [ $ret -eq 0 ] && [ -x "$node" ]; then   if [ $debug -eq 1 ]; then     echo "found 'node' at: $node";     echo -n "version: ";     $node --version;     echo "";   fi;   (exit 0); else   echo "npm cannot be installed without node.js." >&2;   echo "install node first, and then try again." >&2;   echo "" >&2;   exit $ret; fi
