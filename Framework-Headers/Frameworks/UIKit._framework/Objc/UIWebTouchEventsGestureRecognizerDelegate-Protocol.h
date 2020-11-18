//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSSet, UIEvent, UIWebTouchEventsGestureRecognizer;

@protocol UIWebTouchEventsGestureRecognizerDelegate <NSObject>
- (BOOL)isAnyTouchOverActiveArea:(NSSet *)arg1;

@optional
- (BOOL)gestureRecognizer:(UIWebTouchEventsGestureRecognizer *)arg1 shouldIgnoreWebTouchWithEvent:(UIEvent *)arg2;
- (BOOL)shouldIgnoreWebTouch;
@end

