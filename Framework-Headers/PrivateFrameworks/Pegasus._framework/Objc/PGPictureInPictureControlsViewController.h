//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSTimer, PGPlaybackProgress, PGPlaybackProgressIndicator, UIButton;
@protocol PGPictureInPictureControlsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PGPictureInPictureControlsViewController : UIViewController
{
    BOOL _showsAlternateActionButtonImage;
    PGPlaybackProgress *_playbackProgress;
    NSArray *_loadedTimeRanges;
    UIButton *_stopButton;
    UIButton *_actionButton;
    UIButton *_cancelButton;
    PGPlaybackProgressIndicator *_playbackProgressIndicator;
    long long _controlsSize;
    BOOL _controlsVisibilityNeedsUpdate;
    long long _controlsVisibilityCounter;
    NSTimer *_controlsVisibilityTimer;
    BOOL _shouldShowControlsIfNeeded;
    BOOL _shouldShowControlsForUserInteraction;
    BOOL _shouldShowControlsAfterUserInteraction;
    BOOL _shouldHideControlsTemporarely;
    BOOL _showsControls;
    BOOL _preventControlsVisibilityChangeAnimation;
    id<PGPictureInPictureControlsViewControllerDelegate> _delegate;
    struct {
        unsigned int pictureInPictureControlsViewControllerStopButtonTapped:1;
        unsigned int pictureInPictureControlsViewControllerActionButtonTapped:1;
        unsigned int pictureInPictureControlsViewControllerCancelButtonTapped:1;
        unsigned int pictureInPictureControlsViewControllerShouldHandleTapGesture:1;
        unsigned int pictureInPictureControlsViewControllerShouldHandleDoubleTapGesture:1;
    } _delegateRespondsTo;
    long long _controlsStyle;
}

@property (readonly, nonatomic) long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
@property (weak, nonatomic) id<PGPictureInPictureControlsViewControllerDelegate> delegate;
@property (strong, nonatomic) NSArray *loadedTimeRanges;
@property (strong, nonatomic) PGPlaybackProgress *playbackProgress;
@property (nonatomic) BOOL showsAlternateActionButtonImage;

- (void).cxx_destruct;
- (id)_actionButtonBackgroundImage;
- (id)_actionButtonImage;
- (void)_actionButtonTapped:(id)arg1;
- (void)_addControlForUserInteractionObservation:(id)arg1;
- (id)_buttonImageWithName:(id)arg1;
- (id)_cancelButtonBackgroundImage;
- (id)_cancelButtonImage;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_handleDoubleDoubleTapGestureRecognizer:(id)arg1;
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;
- (void)_handleSingleTapGestureRecognizer:(id)arg1;
- (void)_hideControlsForTouchUp;
- (void)_hideControlsIfPossible;
- (void)_hideControlsIfPossibleAfterDelayIfPlaying;
- (void)_hideControlsIfPossibleUntilFurtherUserInteraction;
- (void)_manageControlsSize;
- (void)_removeControlForUserInteractionObservation:(id)arg1;
- (void)_setControlsVisibilityNeedsUpdate;
- (void)_showControlsForTouchDown;
- (void)_showControlsIfNeeded;
- (void)_showControlsIfNeededAndHideIfPossibleAfterDelayIfPlaying;
- (void)_showControlsIfNeededAndHideIfPossibleAfterDelayIfPlayingWithDelay:(double)arg1;
- (id)_stopButtonBackgroundImage;
- (id)_stopButtonImage;
- (void)_stopButtonTapped:(id)arg1;
- (void)_toggleControlsVisibilityForUserInteraction;
- (void)_updateControlsVisibility;
- (void)_updateControlsVisibilityIfNeeded;
- (void)_userInteractionObservationControlTouchDown:(id)arg1;
- (void)_userInteractionObservationControlTouchUp:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithControlsStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)startShowingControlsAnimated:(BOOL)arg1;
- (void)stopShowingControlsAnimated:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
