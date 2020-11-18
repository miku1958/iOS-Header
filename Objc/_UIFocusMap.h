//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIFocusSystem, _UIFocusMapSearchInfo;
@protocol UICoordinateSpace, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMap : NSObject
{
    BOOL _minimumSearchAreaIsEmpty;
    BOOL _trackingSearchInfo;
    BOOL _needsSearchInfo;
    UIFocusSystem *_focusSystem;
    id<_UIFocusRegionContainer> _rootContainer;
    id<UICoordinateSpace> _coordinateSpace;
    _UIFocusMapSearchInfo *_defaultItemSearchInfo;
    _UIFocusMapSearchInfo *_focusMovementSearchInfo;
    struct CGRect _minimumSearchArea;
}

@property (readonly, weak, nonatomic) id<UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property (readonly, nonatomic, getter=_defaultItemSearchContext) _UIFocusMapSearchInfo *defaultItemSearchInfo; // @synthesize defaultItemSearchInfo=_defaultItemSearchInfo;
@property (readonly, nonatomic, getter=_focusMovementSearchContext) _UIFocusMapSearchInfo *focusMovementSearchInfo; // @synthesize focusMovementSearchInfo=_focusMovementSearchInfo;
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property (nonatomic) struct CGRect minimumSearchArea; // @synthesize minimumSearchArea=_minimumSearchArea;
@property (readonly, weak, nonatomic) id<_UIFocusRegionContainer> rootContainer; // @synthesize rootContainer=_rootContainer;

- (void).cxx_destruct;
- (id)_allDefaultFocusableRegionsInContainer:(id)arg1 intersectingRegion:(id)arg2;
- (id)_allFocusableItemsInEnvironment:(id)arg1;
- (void)_beginTrackingDefaultItemSearchInfoIfNecessary;
- (void)_beginTrackingFocusMovementSearchInfoIfNecessary;
- (void)_beginTrackingSearches;
- (id)_closestFocusableItemToPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 excludingItems:(id)arg3;
- (id)_defaultFocusItemInEnvironment:(id)arg1;
- (id)_defaultFocusItemInEnvironment:(id)arg1 limitScopeUsingFocusPreferences:(BOOL)arg2;
- (id)_defaultMapSnapshotter;
- (id)_findAllDefaultFocusableRegionsWithSnapshotter:(id)arg1;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 focusedRegion:(id)arg2;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inRegions:(id)arg2;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3;
- (id)_stopTrackingSearches;
- (void)_trackExternalSnapshot:(id)arg1;
- (void)diagnoseFocusabilityForItem:(id)arg1 report:(id)arg2;
- (id)init;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3;

@end
