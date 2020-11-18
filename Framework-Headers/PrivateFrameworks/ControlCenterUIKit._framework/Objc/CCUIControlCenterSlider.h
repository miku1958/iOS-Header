//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

@class UIImageView;

@interface CCUIControlCenterSlider : UISlider
{
    UIImageView *_minValueHighlightedImageView;
    UIImageView *_maxValueHighlightedImageView;
    BOOL _adjusting;
}

@property (nonatomic, getter=isAdjusting) BOOL adjusting; // @synthesize adjusting=_adjusting;

+ (struct UIEdgeInsets)_edgeInsetsForSliderKnob;
+ (id)_knobImage;
+ (id)_resizableTrackImage;
+ (id)_trackImage;
- (void).cxx_destruct;
- (void)_configureHighlightedValueImagesLikeRegularValueImages;
- (void)_setTrackImage:(id)arg1;
- (struct UIEdgeInsets)_thumbHitEdgeInsets;
- (void)_updateEffects;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)ccuiSupportsDelayedTouchesByContainingScrollViewForGesture:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)leftValueImageOriginForBounds:(struct CGRect)arg1 andSize:(struct CGSize)arg2;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)rightValueImageOriginForBounds:(struct CGRect)arg1 andSize:(struct CGSize)arg2;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMaximumValueImage:(id)arg1 cacheKey:(id)arg2;
- (void)setMinimumValueImage:(id)arg1;
- (void)setMinimumValueImage:(id)arg1 cacheKey:(id)arg2;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;

@end

