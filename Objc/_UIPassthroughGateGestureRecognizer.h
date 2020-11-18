//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

#import <UIKitCore/_UIScrollEventRespondable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPassthroughGateGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)_supportsTouchContinuation;
- (void)_scrollingChangedWithEvent:(id)arg1;
- (void)endClosed;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)open;
- (BOOL)shouldReceiveEvent:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end

