# Slowstarter

Benchmarking the startup time for programs/scripts in various languages, to see which suck the most for writing composable shell utilities for embedded systems.

This is NOT a "which language is the fastest" benchmark, since none of the programs used in the benchmark actually do anything useful.

## Expect

I expected Java and C# to perform the worst by far, followed by Python, then Node.
I expected C and C++ to perform the best (excluding no-op), with C edging C++ out of first place.
I expected bash and perl to perform comparably.

## Actual

C and C++ did indeed win with no significant difference between 32-bit and 64-bit programs.

However perl was next - which is not a massive surprise given how widely used it is in shell scripting.

After bash/sh, the next was then Python 2.7.
Who'd have thought - Python not being the biggest pile of shit for a change.

I confirm a facet of what many believe though regarding Python getting worse as time goes on, since Python 3.6 was beaten to the next place by C# which had a rather respectable statup time, for a language which isn't intended to be used for rapidly-spawned programs (such as shell utilities).

After that, to my own horror, nodejs was twice as slow to start as both Pythons combined together!  I guess that might explain why my larger JavaScript projects seem to take much longer to build than similar C++ programs I've written in the past (given that many JS build tools are themselves written in JS).

And in last place is Java - quite predictably given that it's intended for long-running desktop and server software, and I doubt anyone seriously uses it for shell tools.

## TODO

Need to run this on a Ras Pi and a BeagleBone, to see how these results compare for embedded ARM platforms.  Might run on my smartphone too if I can be bothered.
