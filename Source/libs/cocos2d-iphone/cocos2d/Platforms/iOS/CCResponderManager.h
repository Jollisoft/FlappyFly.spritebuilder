/*
 * cocos2d for iPhone: http://www.cocos2d-iphone.org
 *
 * Copyright (c) 2010 Ricardo Quesada
 * Copyright (c) 2011 Zynga Inc.
 * Copyright (c) 2013 Lars Birkemose
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *
 * File autogenerated with Xcode. Adapted for cocos2d needs.
 */

#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR

// -----------------------------------------------------------------
#pragma mark - iOS
// -----------------------------------------------------------------

#import <UIKit/UIKit.h>

#define RESPONDER UIResponder

@protocol CCResponderProtocol <NSObject>

@optional
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event;

@end

// -----------------------------------------------------------------

@interface CCTouch : NSObject

@property (nonatomic, strong) CCNode *node;                       // the node associated with the touch
@property (nonatomic, weak) UITouch *touch;                       // the current touch ( should not be retained )
@property (nonatomic, weak) UIEvent *event;                       // the current event ( should not be retained )

@end

#else

// -----------------------------------------------------------------
#pragma mark - Mac
// -----------------------------------------------------------------

#import <AppKit/AppKit.h>

#define RESPONDER NSResponder

@protocol CCResponderProtocol <NSObject>

@optional
- (void)mouseDown:(NSEvent *)theEvent;

@end



#endif

// -----------------------------------------------------------------
#pragma mark - Both
// -----------------------------------------------------------------

@class CCNode;

// -----------------------------------------------------------------

enum
{
    CCResponderManagerBufferSize        = 128,
};

// -----------------------------------------------------------------

@interface CCResponderManager : RESPONDER

// -----------------------------------------------------------------

@property (nonatomic) BOOL eventProcessed;                        // event was processed

// -----------------------------------------------------------------

+ (id)responderManager;
- (id)init;

- (void)addResponder:(CCNode *)responder;
- (void)removeAllResponders;

// -----------------------------------------------------------------

@end

















































