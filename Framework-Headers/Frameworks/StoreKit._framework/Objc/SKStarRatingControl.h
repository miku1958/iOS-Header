//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImageView, UILabel;

@interface SKStarRatingControl : UIControl
{
    UIImageView *_backgroundImageView;
    UILabel *_explanationLabel;
    UIImageView *_foregroundImageView;
    struct CGSize _hitPadding;
    double _starWidth;
    struct CGPoint _trackingLastPoint;
    struct CGPoint _trackingStartPoint;
    float _value;
}

@property (copy, nonatomic) NSString *explanationText;
@property (nonatomic) double starWidth; // @synthesize starWidth=_starWidth;
@property (nonatomic) float value;

- (BOOL)_alwaysHandleScrollerMouseEvent;
- (struct CGRect)_foregroundImageClipBounds;
- (id)_newExplanationLabel;
- (void)_updateValueForPoint:(struct CGPoint)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)canHandleSwipes;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHitPadding:(struct CGSize)arg1;
- (void)sizeToFit;

@end

