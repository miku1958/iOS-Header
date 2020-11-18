//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface PKPhysicalButtonView : UIView
{
    UIView *_containerView;
    UILabel *_instructionLabel;
    UIView *_buttonView;
    BOOL _animateSlide;
    BOOL _animating;
    double _animationWidth;
    NSString *_periodicAnimationKey;
    NSString *_presentationAnimationKey;
    long long _style;
    NSString *_instruction;
}

@property (nonatomic) BOOL animating; // @synthesize animating=_animating;
@property (copy, nonatomic) NSString *instruction; // @synthesize instruction=_instruction;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;

- (void).cxx_destruct;
- (void)_animateWithWidth:(double)arg1;
- (void)_animateWithWidth:(double)arg1 delay:(double)arg2;
- (void)_beginAnimationIfNecessary;
- (void)_beginAnimationIfNecessaryWithDelay:(double)arg1;
- (void)_endAnimationIfNecessary;
- (void)_removePeriodicAnimationForKey:(id)arg1 fromLayer:(id)arg2;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
