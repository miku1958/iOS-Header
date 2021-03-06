//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUInteractiveTileTracker.h>

@class PHSwipeDownTracker, PUTileController, PUTileLayoutInfo, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUSwipedDownTileTracker : PUInteractiveTileTracker
{
    UIPanGestureRecognizer *_panGestureRecognizer;
    PUTileController *_designatedTileController;
    PHSwipeDownTracker *__swipeDownTracker;
    PUTileLayoutInfo *__trackedTileLayoutInfo;
}

@property (strong, nonatomic, setter=_setSwipeDownTracker:) PHSwipeDownTracker *_swipeDownTracker; // @synthesize _swipeDownTracker=__swipeDownTracker;
@property (strong, nonatomic, setter=_setTrackedTileLayoutInfo:) PUTileLayoutInfo *_trackedTileLayoutInfo; // @synthesize _trackedTileLayoutInfo=__trackedTileLayoutInfo;
@property (strong, nonatomic) PUTileController *designatedTileController; // @synthesize designatedTileController=_designatedTileController;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;

- (void).cxx_destruct;
- (void)completeTracking;
- (id)initWithPanGestureRecognizer:(id)arg1 tilingView:(id)arg2;
- (id)initWithTilingView:(id)arg1;
- (void)startTileControllerTracking;
- (id)tileControllerToTrack;
- (void)updateGestureRecognizerTracking;
- (void)updateTileControllerTracking;

@end

