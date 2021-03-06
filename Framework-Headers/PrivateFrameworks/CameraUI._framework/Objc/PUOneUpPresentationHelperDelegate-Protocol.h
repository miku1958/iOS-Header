//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class PUOneUpPresentationHelper, PUOneUpViewController, UIScrollView, UIView, UIViewController;

@protocol PUOneUpPresentationHelperDelegate <NSObject>
- (UIViewController *)oneUpPresentationHelperViewController:(PUOneUpPresentationHelper *)arg1;
- (long long)oneUpPresentationOrigin:(PUOneUpPresentationHelper *)arg1;

@optional
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 didDismissOneUpViewController:(PUOneUpViewController *)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 previewScrubberDidBecomeAvailable:(UIScrollView *)arg2;
- (long long)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 transitionTypeWithProposedTransitionType:(long long)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 willPresentOneUpPreviewViewController:(PUOneUpViewController *)arg2;
- (void)oneUpPresentationHelper:(PUOneUpPresentationHelper *)arg1 willPresentOneUpViewController:(PUOneUpViewController *)arg2;
- (unsigned long long)oneUpPresentationHelperAdditionalOptions:(PUOneUpPresentationHelper *)arg1;
- (BOOL)oneUpPresentationHelperDisableFinalFadeoutAnimation:(PUOneUpPresentationHelper *)arg1;
- (BOOL)oneUpPresentationHelperEnableFreezeLayoutOnOrientationChange:(PUOneUpPresentationHelper *)arg1;
- (long long)oneUpPresentationHelperPreferredBarStyle:(PUOneUpPresentationHelper *)arg1;
- (long long)oneUpPresentationHelperPreferredPresentationOrientation:(PUOneUpPresentationHelper *)arg1;
- (BOOL)oneUpPresentationHelperPreventRevealInMomentAction:(PUOneUpPresentationHelper *)arg1;
- (UIScrollView *)oneUpPresentationHelperScrollView:(PUOneUpPresentationHelper *)arg1;
- (BOOL)oneUpPresentationHelperShouldAutoPlay:(PUOneUpPresentationHelper *)arg1;
- (BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(PUOneUpPresentationHelper *)arg1;
- (UIView *)oneUpPresentationHelperViewHostingGestureRecognizers:(PUOneUpPresentationHelper *)arg1;
- (UIView *)oneUpPresentationHelperViewHostingTilingView:(PUOneUpPresentationHelper *)arg1;
- (BOOL)oneUpPresentationHelperWantsShowInLibraryButton:(PUOneUpPresentationHelper *)arg1;
@end

