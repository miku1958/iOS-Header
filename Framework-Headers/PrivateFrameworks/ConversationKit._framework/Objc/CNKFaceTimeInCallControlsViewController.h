//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSString, UIView;
@protocol CNKFaceTimeInCallControlsViewControllerDelegate;

@interface CNKFaceTimeInCallControlsViewController : UIViewController
{
    MISSING_TYPE *groupName;
    MISSING_TYPE *representedLegacyCallIdentifier;
    MISSING_TYPE *participantsTableViewController;
    MISSING_TYPE *localParticipant;
    MISSING_TYPE *viewContent;
    MISSING_TYPE *mode;
    MISSING_TYPE *topInset;
    MISSING_TYPE *isExpanded;
    MISSING_TYPE *audioIsEnabled;
    MISSING_TYPE *videoIsEnabled;
    MISSING_TYPE *effectsAreAvailable;
    MISSING_TYPE *effectsAreEnabled;
    MISSING_TYPE *shouldShowJoinButton;
    MISSING_TYPE *delegate;
    MISSING_TYPE *participantDelegate;
    MISSING_TYPE *participantsViewControllerDelegate;
}

@property (nonatomic, readonly) UIView *audioButton;
@property (nonatomic) BOOL audioIsEnabled; // @synthesize audioIsEnabled;
@property (nonatomic, weak) id<CNKFaceTimeInCallControlsViewControllerDelegate> delegate; // @synthesize delegate;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) BOOL effectsAreAvailable; // @synthesize effectsAreAvailable;
@property (nonatomic) BOOL effectsAreEnabled; // @synthesize effectsAreEnabled;
@property (nonatomic) BOOL isExpanded; // @synthesize isExpanded;
@property (nonatomic) BOOL shouldShowJoinButton; // @synthesize shouldShowJoinButton;
@property (nonatomic) BOOL videoIsEnabled; // @synthesize videoIsEnabled;

- (void).cxx_destruct;
- (id)accessibilityCameraButton;
- (id)accessibilityCameraLabel;
- (id)accessibilityDisableVideoButton;
- (id)accessibilityDisableVideoLabel;
- (id)accessibilityEffectsButton;
- (id)accessibilityEffectsLabel;
- (id)accessibilityHotdog;
- (id)accessibilityJoinLeaveButton;
- (id)accessibilityMuteAudioButton;
- (id)accessibilityMuteAudioLabel;
- (id)accessibilityRouteButton;
- (id)accessibilityRouteLabel;
- (void)didTapAudioRouteButton:(id)arg1;
- (void)didTapEffectsButton:(id)arg1;
- (void)didTapFlipCameraButton:(id)arg1;
- (void)didTapJoinLeaveButton:(id)arg1;
- (void)didTapMuteButton:(id)arg1;
- (void)didTapToggleCameraButton:(id)arg1;
- (id)initWithActiveCall:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAudioRouteButtonFor:(id)arg1;
- (void)updateControlsVisibilityForExpandedState:(BOOL)arg1;
- (void)updateToRepresentLegacyCall:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

