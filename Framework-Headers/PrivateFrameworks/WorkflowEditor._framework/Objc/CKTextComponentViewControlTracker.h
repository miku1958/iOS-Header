//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTextCheckingResult;

@interface CKTextComponentViewControlTracker : NSObject
{
    NSTextCheckingResult *_trackingTextCheckingResult;
}

- (void).cxx_destruct;
- (void)_sendActionsToControl:(id)arg1 forControlEvents:(unsigned long long)arg2 withEvent:(id)arg3;
- (BOOL)beginTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3;
- (void)cancelTrackingForTextComponentView:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3;
- (void)endTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3;

@end

