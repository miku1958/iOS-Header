//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIEvent, UIGestureRecognizer;

@protocol _UIEventObserver <NSObject>

@optional
- (void)_gestureRecognizer:(UIGestureRecognizer *)arg1 didTransitionToState:(long long)arg2;
- (NSArray *)_gestureRecognizersForEvent:(UIEvent *)arg1;
@end
