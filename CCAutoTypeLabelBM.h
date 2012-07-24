//
//  CCLabelBMAutoType.h
//
//  Created by Stephen Ceresia on 12-07-03.
//  Copyright (c) 2012 EXC_BAD_ACCESS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@class CCAutoTypeLabelBM;
@protocol CCAutoTypeLabelBMDelegate

@optional

- (void) typingFinished:(CCAutoTypeLabelBM*) sender;

@end

@interface CCAutoTypeLabelBM : CCLabelBMFont
{
    NSObject <CCAutoTypeLabelBMDelegate> *delegate;
    NSMutableArray *arrayOfCharacters;
    NSString *autoTypeString;
}
@property (readwrite, assign) NSObject <CCAutoTypeLabelBMDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *arrayOfCharacters;
@property (nonatomic, retain) NSString *autoTypeString;

- (void) typeText:(NSString*) txt withDelay:(float) d;

@end
