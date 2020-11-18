//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFocusSystem, _UIFocusRegion, _UIFocusRegionContentAttributes, _UIFocusSearchInfo;
@protocol UICoordinateSpace, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshotter : NSObject
{
    BOOL _snapshotFrameIsEmpty;
    BOOL _clipToSnapshotRect;
    UIFocusSystem *_focusSystem;
    id<_UIFocusRegionContainer> _rootContainer;
    id<UICoordinateSpace> _coordinateSpace;
    _UIFocusRegionContentAttributes *_contentAttributes;
    _UIFocusRegion *_focusedRegion;
    id<_UIFocusRegionContainer> _regionsContainer;
    _UIFocusSearchInfo *_searchInfo;
    struct CGRect _snapshotFrame;
}

@property (nonatomic) BOOL clipToSnapshotRect; // @synthesize clipToSnapshotRect=_clipToSnapshotRect;
@property (readonly, copy, nonatomic) _UIFocusRegionContentAttributes *contentAttributes; // @synthesize contentAttributes=_contentAttributes;
@property (readonly, weak, nonatomic) id<UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property (copy, nonatomic) _UIFocusRegion *focusedRegion; // @synthesize focusedRegion=_focusedRegion;
@property (weak, nonatomic) id<_UIFocusRegionContainer> regionsContainer; // @synthesize regionsContainer=_regionsContainer;
@property (readonly, weak, nonatomic) id<_UIFocusRegionContainer> rootContainer; // @synthesize rootContainer=_rootContainer;
@property (strong, nonatomic) _UIFocusSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property (nonatomic) struct CGRect snapshotFrame; // @synthesize snapshotFrame=_snapshotFrame;

- (void).cxx_destruct;
- (id)_searchAreaForContainerSearchRect:(struct CGRect)arg1;
- (id)captureSnapshot;
- (id)init;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3 searchInfo:(id)arg4;

@end

