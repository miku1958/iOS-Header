//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class RCUIConfiguration, UIColor, UIFont;

@interface RCChronologicalAnnotationView : UIView
{
    long long _lastHourComponentsUsedForMajorTickUpdate;
    double _majorTickTimeUnit;
    double _majorTickMinimumSpacing;
    UIFont *_timeLabelFont;
    double _contentDuration;
    unsigned long long _maximumMajorUnitsInVisibleDuration;
    RCUIConfiguration *_UIConfiguration;
    UIColor *_backgroundDebugColor;
    CDStruct_73a5d3ca _visibleTimeRange;
    CDStruct_73a5d3ca _markerClippingRange;
}

@property (copy, nonatomic) RCUIConfiguration *UIConfiguration; // @synthesize UIConfiguration=_UIConfiguration;
@property (strong, nonatomic) UIColor *backgroundDebugColor; // @synthesize backgroundDebugColor=_backgroundDebugColor;
@property (nonatomic) double contentDuration; // @synthesize contentDuration=_contentDuration;
@property (nonatomic) CDStruct_73a5d3ca markerClippingRange; // @synthesize markerClippingRange=_markerClippingRange;
@property (nonatomic) unsigned long long maximumMajorUnitsInVisibleDuration; // @synthesize maximumMajorUnitsInVisibleDuration=_maximumMajorUnitsInVisibleDuration;
@property (nonatomic) CDStruct_73a5d3ca visibleTimeRange; // @synthesize visibleTimeRange=_visibleTimeRange;

+ (long long)_determineWidestTimeLabelDigit;
+ (id)_normalTimeLabelFont;
- (void).cxx_destruct;
- (id)_timeLabelAttributes;
- (id)_timeLabelAttributesWithFont:(id)arg1;
- (void)_updateMajorTickMinimumSpacingForContentDuration:(double)arg1;
- (void)_updateMajorTickTimeUnit;
- (id)description;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)labelsSize;
- (void)setFrame:(struct CGRect)arg1;

@end
