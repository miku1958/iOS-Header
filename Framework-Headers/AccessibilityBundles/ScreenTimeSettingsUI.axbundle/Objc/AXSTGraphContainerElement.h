//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@interface AXSTGraphContainerElement : UIAccessibilityElement
{
    long long _mode;
    unsigned long long _itemType;
}

@property (nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property (nonatomic) long long mode; // @synthesize mode=_mode;

- (id)_accessibilityDataSeriesGridlinePositionsForAxis:(long long)arg1;
- (BOOL)_accessibilityDataSeriesIncludesTrendlineInSonification;
- (id)_accessibilityDataSeriesMaximumValueForAxis:(long long)arg1;
- (id)_accessibilityDataSeriesMinimumValueForAxis:(long long)arg1;
- (id)_accessibilityDataSeriesName;
- (BOOL)_accessibilityDataSeriesSupportsSonification;
- (BOOL)_accessibilityDataSeriesSupportsSummarization;
- (id)_accessibilityDataSeriesTitleForAxis:(long long)arg1;
- (long long)_accessibilityDataSeriesType;
- (id)_accessibilityDataSeriesUnitLabelForAxis:(long long)arg1;
- (id)_accessibilityDataSeriesValueDescriptionForPosition:(double)arg1 axis:(long long)arg2;
- (id)_accessibilityDataSeriesValuesForAxis:(long long)arg1;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_axBarElements;
- (double)_updateYValueForType:(double)arg1;
- (long long)accessibilityContainerType;

@end

