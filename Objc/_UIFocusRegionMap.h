//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFocusSystem, UIView, _UIFocusRegionMapSnapshot;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionMap : NSObject
{
    UIView *_rootView;
    UIFocusSystem *_focusSystem;
    _UIFocusRegionMapSnapshot *_lastSnapshot;
    struct CGRect _minimumSearchArea;
}

@property (strong, nonatomic) UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property (strong, nonatomic) _UIFocusRegionMapSnapshot *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property (nonatomic) struct CGRect minimumSearchArea; // @synthesize minimumSearchArea=_minimumSearchArea;
@property (weak, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;

- (void).cxx_destruct;
- (id)_closestFocusableRegionInArray:(id)arg1 toPoint:(struct CGPoint)arg2 usingHeading:(unsigned long long)arg3 withFocusedView:(id)arg4 consideringFavoredRegion:(BOOL)arg5 includingFocusedView:(BOOL)arg6;
- (BOOL)_containsFocusableRegionForView:(id)arg1;
- (id)_contextWithSourceView:(id)arg1 focusedContainerGuide:(id)arg2 movement:(id)arg3;
- (id)_contextWithSourceView:(id)arg1 focusedRegion:(id)arg2 movement:(id)arg3;
- (struct CGPoint)_focusCandidateSearchOriginForFocusedFrame:(struct CGRect)arg1 heading:(unsigned long long)arg2 minimumSearchArea:(struct CGRect)arg3;
- (struct CGRect)_focusCandidateSearchRectForFocusedFrame:(struct CGRect)arg1 heading:(unsigned long long)arg2 minimumSearchArea:(struct CGRect)arg3;
- (id)_nearestCandidateForFocusMovement:(id)arg1 fromFocusedView:(id)arg2 withFocusedRect:(struct CGRect)arg3 includingFocusedView:(BOOL)arg4;
- (struct CGRect)_rectThatJustBarelyIntersectsRect:(struct CGRect)arg1 startingRect:(struct CGRect)arg2;
- (struct CGRect)_viewSearchRectForFocusedFrame:(struct CGRect)arg1 focusCandidateSearchRect:(struct CGRect)arg2 includesFocusedFrame:(BOOL)arg3;
- (struct CGRect)_viewSearchRectForSnapshotRect:(struct CGRect)arg1;
- (id)debugQuickLookObject;
- (id)initWithRootView:(id)arg1 focusSystem:(id)arg2;
- (id)linearlyOrderedCandidatesForFocusMovement:(id)arg1 fromView:(id)arg2 indexForFocusedView:(unsigned long long *)arg3;
- (id)linearlyOrderedFocusRegionMapEntriesForFocusMovement:(id)arg1 fromView:(id)arg2;
- (id)nearestCandidateFromRect:(struct CGRect)arg1;

@end

