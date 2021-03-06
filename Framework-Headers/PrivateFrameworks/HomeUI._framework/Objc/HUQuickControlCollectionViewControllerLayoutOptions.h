//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HUQuickControlCollectionViewControllerLayoutOptions : NSObject
{
    double _rowSpacing;
    double _interitemSpacingForExtraSmallControlSize;
    double _interitemSpacingForSmallControlSize;
    double _interitemSpacingForRegularControlSize;
    double _interitemSpacingForLargeControlSize;
    double _minimumSectionSpacing;
    double _minimumNavBarToControlsSpacing;
    double _minimumSectionToSensorSectionSpacing;
    double _thermostatSectionSpacingOverride;
    unsigned long long _preferredLayoutStyle;
    unsigned long long _titlePosition;
    NSNumber *_overrideSizeSubclass;
    struct CGSize _viewSize;
}

@property (nonatomic) double interitemSpacingForExtraSmallControlSize; // @synthesize interitemSpacingForExtraSmallControlSize=_interitemSpacingForExtraSmallControlSize;
@property (nonatomic) double interitemSpacingForLargeControlSize; // @synthesize interitemSpacingForLargeControlSize=_interitemSpacingForLargeControlSize;
@property (nonatomic) double interitemSpacingForRegularControlSize; // @synthesize interitemSpacingForRegularControlSize=_interitemSpacingForRegularControlSize;
@property (nonatomic) double interitemSpacingForSmallControlSize; // @synthesize interitemSpacingForSmallControlSize=_interitemSpacingForSmallControlSize;
@property (nonatomic) double minimumNavBarToControlsSpacing; // @synthesize minimumNavBarToControlsSpacing=_minimumNavBarToControlsSpacing;
@property (nonatomic) double minimumSectionSpacing; // @synthesize minimumSectionSpacing=_minimumSectionSpacing;
@property (nonatomic) double minimumSectionToSensorSectionSpacing; // @synthesize minimumSectionToSensorSectionSpacing=_minimumSectionToSensorSectionSpacing;
@property (strong, nonatomic) NSNumber *overrideSizeSubclass; // @synthesize overrideSizeSubclass=_overrideSizeSubclass;
@property (nonatomic) unsigned long long preferredLayoutStyle; // @synthesize preferredLayoutStyle=_preferredLayoutStyle;
@property (nonatomic) double rowSpacing; // @synthesize rowSpacing=_rowSpacing;
@property (nonatomic) double thermostatSectionSpacingOverride; // @synthesize thermostatSectionSpacingOverride=_thermostatSectionSpacingOverride;
@property (nonatomic) unsigned long long titlePosition; // @synthesize titlePosition=_titlePosition;
@property (readonly, nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property (readonly, nonatomic) long long viewSizeSubclass;

+ (id)defaultOptions;
+ (id)defaultOptionsForViewSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (id)initWithViewSize:(struct CGSize)arg1;

@end

