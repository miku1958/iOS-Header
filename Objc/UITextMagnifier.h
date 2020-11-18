//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIResponder, UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifier : UIView
{
    UIView *_target;
    struct CGPoint _magnificationPoint;
    struct CGPoint _animationPoint;
    struct CGPoint _terminalPoint;
    BOOL _terminalPointPlacedCarefully;
    UIResponder<UITextInput> *_text;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    UIView *_magnifierRenderer;
    UIView *_autoscrollRenderer;
    int _autoscrollDirections;
}

@property (nonatomic) struct CGPoint animationPoint; // @synthesize animationPoint=_animationPoint;
@property (readonly, nonatomic) BOOL isHorizontal;
@property (nonatomic) struct CGPoint magnificationPoint; // @synthesize magnificationPoint=_magnificationPoint;
@property (strong, nonatomic) UIView *target; // @synthesize target=_target;
@property (readonly, nonatomic) struct CGPoint terminalPoint; // @synthesize terminalPoint=_terminalPoint;
@property (readonly, nonatomic) BOOL terminalPointPlacedCarefully; // @synthesize terminalPointPlacedCarefully=_terminalPointPlacedCarefully;
@property (strong, nonatomic) UIResponder<UITextInput> *text; // @synthesize text=_text;

+ (id)getLoupeBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (void)animateToAutoscrollRenderer;
- (void)animateToMagnifierRenderer;
- (void)autoscrollWillNotStart;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(BOOL)arg5;
- (void)detectLostTouches:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)postAutoscrollPoint:(struct CGPoint)arg1;
- (void)remove;
- (void)setAutoscrollDirections:(int)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)setToMagnifierRenderer;
- (void)stopMagnifying:(BOOL)arg1;
- (void)windowWillRotate:(id)arg1;
- (void)zoomDownAnimation;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomUpAnimation;
- (void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2;

@end

