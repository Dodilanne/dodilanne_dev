# dodilanne.dev

## Motivation

A couple years ago, I built a [first version](https://github.com/Dodilanne/personal-website) of this website.
I used __Next.js__. Why? Well... because that's what I knew. That's what felt _easy_.
Since then, I realized that _easy_ doesn't mean _simple_, that using a massive meta framework built on top of a massive JS framework to build a one pager is a bit overkill...
So I set out to build this second, much _simpler_ version of the site using almost exclusively html and css and only reaching out for JS for progressive enhancements. 
Even the sprite animator which used to be [a mess](https://github.com/Dodilanne/personal-website/blob/main/src/components/animator.tsx) of useStates and useMemos is now driven by simple css keyframe animations
(You can see it in action by pressing <kbd>shift</kbd> + <kbd>D</kbd> while wiewing the website).

### Note

I could have used a static index.html file to make the setup even simpler, but I was dying to try out the Reason OCaml syntax on a web project...
