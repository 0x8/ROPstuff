nullp0inter's ROP training repository
=====================================

About
-----
This is a collection of source code, python exploits, and anything I else I make, create, generate, etc. in my
exploration of ROP basesd attacks. I am adding code and am going to implement a naming scheme for source, binaries, and python exploit scripts based on a certain name. So if I name source code myCode.c then it will have corresponding binary myCode and corresponding python exploit script myCode.py

If you have pulled this repo at my own request to aid me in my studies, I thank you very much.

Feel free to simply pull from this if you wish to examine what I have done. When I get an injection to work I will try to add some screenshots and/or snippets from gdb/peda/r2 that are relevant and post a small writeup to say what is really going on. If in the future this becomes full of stuff I have solved, I would encourage you use it only as a reference as you will get nowhere if you substitute it for real practice.

On name conventions
-------------------
Currently all filenames are based off of the corresponding source code file.

For an example just look into the Victim folder. The source for this project is called "victim.c" so the binary is therefore "victim" and the python rop injection generator for the buffer is called "victim.py". This name scheme allows me to easily categorize what files are for during creation.
 
