# 2024-03-16
The focus today was a lot of the basics. I wanted to get player movement into a decent state, so that consists of;
- Running
- Jumping
- Ducking/crouching
- Main menu

## Running
Running is pretty simple. I'm using the default `BP_ThirdPerson` blueprint which comes with the third person template. To run, I just apply forward motion each tick through the PlayerController, so it's as though the player is constantly holding `W`.
I had originally tried to create a new character blueprint to avoid using `BP_ThirdPerson`. The reasoning there was something like "Endless runners are super simple and shouldn't need all this `CharacterMovement` stuff". I spent a few hours trying to get my custom character working before deleting it and going back to `BP_ThirdPerson`. It's just easier to take the existing gravity/locomotion/animation code and reuse it.

## Jumping
Jumping comes built-in to `BP_ThirdPerson` but I don't like how it feels. I watched a [GDC talk by Kyle Pittman](https://www.youtube.com/watch?v=hG9SzQxaCm8) about the mathematics of jumping in games. From this talk I learned 2 useful facts about jumping in games;
1. While physically inaccurate, it feels better when the jump is asymmetrical. This means your jump arc is not a parabola, as it would be in real life. An example given in the talk is Super Mario Bros, where gravity becomes 3x stronger as soon as Mario reaches the apex of his jump.
2. Users like having control of the jump. In short, this means that if the player holds the jump button, they should jump further/higher in some way.

I implemented both of the above in my jump logic. Gravity is significantly stronger during a descent than it is during an ascent. Both are controllable with parameters. Secondly, gravity is weakened if the player is holding the jump button. Again, the degree to which gravity is weakened is parameterized and it's also different depending on whether the player is ascending or descending.

## Ducking/Crouching
To implement crouching I pretty much just followed a tutorial by [The Real Unreal on Youtube](https://www.youtube.com/watch?v=0DQJkzLqCLk). I'm not too happy with the first iteration of crouching but it'll do for now. I'm not happy with the animation because it's a sort of "sneaking crouch" animation but due to the speed of this game it's played back at 2x speed and looks silly. I'm also not certain of the source of the animation files so I'll need to source some more reliable ones.

## Main menu
The main menu was another [Youtube tutorial, this time by Unreal University](https://www.youtube.com/watch?v=kumZj_mov58). It's very barebones for now but that's all I need. I'd like to add a game-over screen and maybe a pause menu at some point but I need to have a game over state & some gameplay before I do that.