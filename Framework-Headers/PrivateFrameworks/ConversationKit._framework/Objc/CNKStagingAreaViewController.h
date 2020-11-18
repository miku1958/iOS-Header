//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, TUCall;
@protocol CNKFaceTimeMultiwayConversationViewControllerDelegate, CNKStagingAreaViewControllerDelegate;

@interface CNKStagingAreaViewController : UIViewController
{
    MISSING_TYPE *participantLabel;
    MISSING_TYPE *secondaryParticipantLabel;
    MISSING_TYPE *localPreviewFrontView;
    MISSING_TYPE *localPreviewBackView;
    MISSING_TYPE *audioVisualizationView;
    MISSING_TYPE *controlsViewController;
    MISSING_TYPE *constraintController;
    MISSING_TYPE *controlsDragController;
    MISSING_TYPE *effectsEnabled;
    MISSING_TYPE *avcEffects;
    MISSING_TYPE *effectsCaptureInfo;
    MISSING_TYPE *effectsViewController;
    MISSING_TYPE *effectsBrowserViewController;
    MISSING_TYPE *effectsLayoutController;
    MISSING_TYPE *conversationController;
    MISSING_TYPE *videoDeviceController;
    MISSING_TYPE *numberFormatter;
    MISSING_TYPE *scheduledUpdateTimer;
    MISSING_TYPE *isWaitingToConnect;
    MISSING_TYPE *hasJoined;
    MISSING_TYPE *delegate;
    MISSING_TYPE *stagingAreaDelegate;
    MISSING_TYPE *call;
    MISSING_TYPE *deviceOrientation;
}

@property (nonatomic, strong) TUCall *call; // @synthesize call;
@property (nonatomic, weak) id<CNKFaceTimeMultiwayConversationViewControllerDelegate> delegate; // @synthesize delegate;
@property (nonatomic) long long deviceOrientation; // @synthesize deviceOrientation;
@property (nonatomic) BOOL effectsEnabled; // @synthesize effectsEnabled;
@property (nonatomic) BOOL hasJoined; // @synthesize hasJoined;
@property (nonatomic, weak) id<CNKStagingAreaViewControllerDelegate> stagingAreaDelegate; // @synthesize stagingAreaDelegate;

- (CDUnknownBlockType).cxx_destruct;
- (void)didTapJoinButton;
- (void)didTapLeaveButton;
- (void)didTapSwapLocalParticipantCamera;
- (void)didTapToggleVideoMute;
- (id)initWithActiveCall:(id)arg1;
- (id)initWithActiveCall:(id)arg1 hasJoined:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

