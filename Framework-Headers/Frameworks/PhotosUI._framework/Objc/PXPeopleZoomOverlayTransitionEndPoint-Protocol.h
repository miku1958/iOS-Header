//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, PXPeopleZoomOverlayTransitionAnimator;

@protocol PXPeopleZoomOverlayTransitionEndPoint <NSObject>
- (BOOL)shouldPerformZoomingTransitionWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (NSArray *)snapshotRectsInScreenCoordinatesWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (NSArray *)snapshotViewsForZoomingTransitionWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;

@optional
- (void)zoomOverlayTransitionDidBeginAnimationWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (void)zoomOverlayTransitionDidEndAnimationWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (void)zoomOverlayTransitionWillBeginAnimationWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (void)zoomOverlayTransitionWillEndAnimationWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
@end

