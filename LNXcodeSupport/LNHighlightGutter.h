//
//  LNHighlightGutter.h
//  LNXcodeSupport
//
//  Created by User on 08/06/2017.
//  Copyright © 2017 John Holdsworth. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "LNFileHighlights.h"
@class LNExtensionClient;

@interface LNHighlightGutter : NSView
@end

@interface LNHighlightFleck : NSView
@property LNHighlightElement *element;
@property LNExtensionClient *extension;
@property CGFloat yoffset;
+ (LNHighlightFleck *)fleck;
+ (void)recycle:(NSArray *)used;
@end
