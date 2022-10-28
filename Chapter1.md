# Introduction

When I was in eighth grade, I was learning how to code in C++/C. It was
something difficult when I started dipping myself into unfamiliar words.
Compile. Build. Run. I would type something on the keyboard, and being 
a diligent student I would be super obedient and follow the instructions
as stated in the book. I never know how memory works inside a computer,
nor I even know how does the computer "compile and build" a program I 
wrote. What we all needed to know, according to my teacher, was how I 
can order the computer to do what I want. I am often clueless, because
I really wanted to know more. I would sometimes code on weekends, tinkering
on how to do this "operator overloading" thing even if it was absolutely 
unnecessary in school. This was back in 2015, and that time I don't even know what Stack Overflow
Stack Overflow until I did a Google search. I only feared error messages
on the debugger and the interpreter, and my number one enemy is the term
"segmentation fault". Mind you I faced that disgusting term several times
in my life, owing to my inability to understand things beyond me like how
the operating system virtualizes the memory. If that is still unfamiliar 
to you, I highly suggest you take a pause, walk a little bit, and breathe.
You will need to learn computer organization, computer architecture, 
operating systems, along with computer programming languages like 
C and C++ to fully understand the rest of the writeups. The Dragon Book 
is so kind and direct to call it "computer science sophistication". I 
promise you, once you return after learning these things you will appreciate 
this portfolio.

If you really know them, congratulations! I will be writing this assuming 
you forget everything you read, so you have a headstart. For those who don't,
it's also alright. This is intended for me to explain this in a long way, 
so feel free to read along. Now, let us start with the most exciting part
of the story on compilers and interpreters. 

A long time ago, I was with a friend. We were talking about going out to a 
place we wanted to really visit. I said to him "rug". He replied, "pic". 
The bystanders, who were happily gossiping on our conversations raised
their eyebrows. I totally understand their reactions. It's our own buddy 
talk. Only the two of us know the meaning. Actually, it is not, as you will be
one of the lucky readers to know this now! Rug is a word, which often refers
to a piece of cloth on the floor right? But, Rug is R U G which R is the word
ARE, U is the word YOU, and G is the word GOOD (which in this context means
is he okay with going to the place) and the word PIC is an alias for IMG,
which is a shorthand for I M G (I as I in English, M is AM, and G is GOOD).
You can really tell our buddy talk is some high-level english, right? ;>

I hope you get where this is going. For us to fully understand each other
in a concise fashion, we assigned a letter for a word. Then, as long as we
understood the context, we can assign an alias or substitute to the
compressed sentences. What goes under our minds, RUG is separated by letter,
then substituted with our agreed context for each letter, and interpreted
into simple English ARE YOU GOOD?. This is an example of an interpreter 
in action.

An interpreter on a computer acts the same way, and it always requires an
input code or language like we did earlier. We can check our mistakes real 
time, and correct each other when we need to. On the other hand, compilers
don't have them. A closest example of it in everyday human interaction 
will be writing physical forms. I believe I always compare compiling 
to writing forms because there's no interaction within you and the form
itself. You are subsituting the value of the field to your own unique value
and yet only after you finished writing the form to the receiver you get
some feedback, which case if unfortunately you start all over again when
you make a mistake by correcting the form that's another feedback you need
to get before successfully submitting them. It's a painful experience for
me writing forms as well as compiling without a debugger on computers. 
Those events are equal in pain.

In this section, we will get into the specific details of the compiler
implementation. For this stage, the friendly conversation actually 
details for us the stages in compiler implementation. When we separate
words like RUG into letters R, U, and G we say we do some "lexical 
analysis" on it by separating them into meaningful terms. These then are 
determined if they are a subject, a verb, or some predicate which is now
called "syntax analysis", and there are many ways to express this 
relationship within our special buddy language. Substitution then happens 
at this stage called "intermediate code generation". It can happen as a 
whole (like PIC to IMG). 

Then, we can perform two ways to optimize aka shorten our message and 
still be understood. we can optimize after the replacing of IMG to 
I AM GOOD to just GOOD (since our context is still within the response). 
This in computers is similar to assembly level optimization, where in 
computers the I AM GOOD is the finished lengthy machine code 
and GOOD is the desirable short and sweet machine code for the computer 
to happily run without errors. On the other hand, we can also shorten from 
the IMG word itself and turn it into G. That is similar to compiler level 
optimization, where we shorten the acronym (which is how assembly 
languages relate to machine code) first before translating into assembly. 
Note that shortening the acronym is optional. It is the same with computers. 
You will encounter them often, so expect them. 

The last stage after these optimizations is the code generation stage.
This is the I AM GOOD with the context now means I agree, we need to go
visit that place. In computers, that would be from assembly language
to machine code where only computers can understand them. Every machine
will have their own contexts. Even if their language seems like they both 
use ones and zeroes, the context already built into them may differ, which 
makes two different machines understand the same code in a different manner.

That is really cool isn't it? I didn't know about compilers and translations
like those special buddy languages have in common before. I came up with it
while writing this chapter, though these only cover a small portion of what
these little translating magic called compilers and interpreters can do.
Aside from simulations, search engines, and your favorite voice assistants
like Siri, you can use these to also make old games made for one machine
work for another! I particularly love gaming, and I often get frustrated 
when this game X of mine can't even be played into some gadget I commonly
use. The key message when you want to say whether this activity can be close
to compilers or interpreters is one word: replacement. If there's something
hard, and yet it can be replaced into another thing which is easy, then a 
compiler or interpreter can be used as a tool to make it happen. Note however 
that replacements can be imperfect. This is a limitation to compilers
or interpreters as well. Translations can get lost in meaning the more they
are applied, and compilers and interpreters are never fail-safe.

I hope you understand how replacements are the central theme to this section.
Nothing can compare to the original. If it has to be exact and
precise all the time, copying rather than replacing should be the goal. 
However, if a replacement is fine for you, or even more desirable than the
original, then welcome! You will enjoy how to create replacements for
different kinds of actions performed using languages with compiler design
and construction :>




 



 