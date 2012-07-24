CCAutoType
==========

cocos2d-iPhone class to add RPG-like auto typing dialog

Video example:

http://www.youtube.com/watch?v=z5aLkzy_pio

Usage:

<pre>
CCAutoTypeLabelBM *autoText = [CCAutoTypeLabelBM labelWithString:@"" fntFile:@"someFont.fnt"];
[autoText setDelegate:self];
autoText.position = ccp(160,240);
[self addChild:autoText];
[autoText typeText:@"This is some text. It\n could probably use\n line breaks." withDelay:0.1f];
</pre>

You can add this optional delegate method to know when the typing is finished. If you want to use this, remember to add <CCAutoTypeLabelBMDelegate> to your scene's .h file:

<pre>
- (void) typingFinished:(CCAutoTypeLabelBM*) sender
{
    // typing is done. do something
}
</pre>

Some notes (which may or may not make this useless to you):

- You have to initialize the CCLabelBMFont with a blank string. Sorry, I'm sure there's a cleaner way.
- You need to put in your own line breaks.
- Delay is the amount of time between each letter appearing.
- In the video I'm looking through an array of strings, and re-calling the typeText:withDelay: method. Ideally this would accept an array of strings.