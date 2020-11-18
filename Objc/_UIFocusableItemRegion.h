//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIFocusRegion.h>

@protocol UIFocusItem;

@interface _UIFocusableItemRegion : _UIFocusRegion
{
    BOOL _itemCanBecomeFocused;
    id<UIFocusItem> _item;
}

@property (readonly, weak, nonatomic) id<UIFocusItem> item; // @synthesize item=_item;

- (void).cxx_destruct;
- (id)_defaultFocusItem;
- (id)_destinationItemForFocusMovement:(id)arg1 inMap:(id)arg2;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (unsigned long long)_focusableBoundaries;
- (long long)_preferredDistanceComparisonType;
- (BOOL)_shouldBeOccludedByRegion:(id)arg1;
- (BOOL)_shouldCropRegionToSearchArea;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (id)_visualRepresentationColor;
- (long long)_visualRepresentationPatternType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;

@end

