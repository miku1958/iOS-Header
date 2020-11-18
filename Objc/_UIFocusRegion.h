//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/_UIFocusDebugQuickLookImageDrawing-Protocol.h>

@class NSMutableArray, NSString;

@interface _UIFocusRegion : NSObject <_UIFocusDebugQuickLookImageDrawing, NSCopying>
{
    NSMutableArray *_mutableOccludingRegions;
    _UIFocusRegion *_originalRegion;
    struct CGRect _frame;
}

@property (readonly, weak, nonatomic, getter=_debugAssociatedObject) id debugAssociatedObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, setter=_setFrame:) struct CGRect frame; // @synthesize frame=_frame;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, getter=_mutableOccludingRegions, setter=_setMutableOccludingRegions:) NSMutableArray *mutableOccludingRegions; // @synthesize mutableOccludingRegions=_mutableOccludingRegions;
@property (strong, nonatomic, getter=_originalRegion, setter=_setOriginRegion:) _UIFocusRegion *originalRegion; // @synthesize originalRegion=_originalRegion;
@property (readonly) Class superclass;

+ (id)__regionsByEvaluatingOcclusionsForBaseRegions:(id)arg1 occludingRegions:(id)arg2 baseRegionsCanOccludeEachOther:(BOOL)arg3;
+ (id)_regionsByEvaluatingOcclusionsForRegions:(id)arg1;
+ (id)_regionsByOccludingRegions:(id)arg1 beneathRegions:(id)arg2;
- (void).cxx_destruct;
- (void)_addOccludingRegion:(id)arg1;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1;
- (BOOL)_canBeOccludedByRegionsAbove;
- (BOOL)_canOccludeRegionsBelow;
- (id)_defaultFocusItem;
- (void)_didParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (unsigned long long)_effectiveBoundariesBlockingFocusMovementRequest:(id)arg1;
- (unsigned long long)_effectiveFocusableBoundariesForHeading:(unsigned long long)arg1;
- (unsigned long long)_focusableBoundaries;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2;
- (id)_occludingRegions;
- (long long)_preferredDistanceComparisonType;
- (id)_resizeToRect:(struct CGRect)arg1;
- (BOOL)_shouldCropRegionToSearchArea;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (id)_subregionWithFrame:(struct CGRect)arg1;
- (id)_visibleSubregionsWhenOccludedByRegion:(id)arg1;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

