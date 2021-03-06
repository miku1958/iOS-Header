//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SiriPresentationControllerDelegate-Protocol.h>

@class NSArray, NSString, SiriPresentationSpringBoardMainScreenViewController;
@protocol SiriPresentation;

@protocol SiriPresentationSpringBoardMainScreenViewControllerDelegate <SiriPresentationControllerDelegate>
- (void)screenWakeIdleTimerResetRequested;
- (void)screenWakeRequested;
- (BOOL)siriPresentation:(id<SiriPresentation>)arg1 requestsDeviceUnlockWithPassword:(NSString *)arg2;

@optional
- (void)siriPresentation:(id<SiriPresentation>)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(NSArray *)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateHomeGestureSharing:(BOOL)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateShouldDismissForSwipesOutsideContent:(BOOL)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateShouldDismissForTapOutsideContentTo:(BOOL)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateShouldDismissForTapsOutsideContent:(BOOL)arg2;
- (void)siriPresentation:(SiriPresentationSpringBoardMainScreenViewController *)arg1 didUpdateShouldPassTouchesThroughToSpringBoard:(BOOL)arg2;
@end

