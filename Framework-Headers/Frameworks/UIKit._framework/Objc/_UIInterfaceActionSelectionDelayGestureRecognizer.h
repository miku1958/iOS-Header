//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSelectionDelayGestureRecognizer : UIGestureRecognizer
{
    UIDelayedAction *_delayedAction;
}

@property (readonly, nonatomic) UIDelayedAction *delayedAction; // @synthesize delayedAction=_delayedAction;

- (void).cxx_destruct;
- (void)_timerSatisfied;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
