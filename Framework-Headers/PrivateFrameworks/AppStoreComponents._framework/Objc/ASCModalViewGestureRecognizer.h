//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet, UIView;

__attribute__((visibility("hidden")))
@interface ASCModalViewGestureRecognizer : UIGestureRecognizer
{
    UIView *_targetView;
    NSMutableSet *_activeTouches;
}

@property (readonly, nonatomic) NSMutableSet *activeTouches; // @synthesize activeTouches=_activeTouches;
@property (readonly, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetView:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (BOOL)isAnyTouch:(id)arg1 fromEvent:(id)arg2 outsideView:(id)arg3;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

