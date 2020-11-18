//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPanGestureRecognizer.h>

@class UIEvent, UITouch;
@protocol _UIMultiSelectOneFingerPanGestureDelegate;

__attribute__((visibility("hidden")))
@interface _UIMultiSelectOneFingerPanGesture : UIPanGestureRecognizer
{
    UITouch *_activeTouch;
    UIEvent *_activeEvent;
    id<_UIMultiSelectOneFingerPanGestureDelegate> _oneFingerPanDelegate;
}

@property (readonly, nonatomic) UIEvent *activeEvent; // @synthesize activeEvent=_activeEvent;
@property (readonly, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
@property (weak, nonatomic) id<_UIMultiSelectOneFingerPanGestureDelegate> oneFingerPanDelegate; // @synthesize oneFingerPanDelegate=_oneFingerPanDelegate;

- (void).cxx_destruct;
- (BOOL)_affectedByGesture:(id)arg1;
- (BOOL)_preventsDragInteractionGestures;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)reset;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
