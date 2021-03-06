//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFCameraPlaybackEngineObserver-Protocol.h>
#import <HomeUI/HUCameraPlayerScrubbing-Protocol.h>
#import <HomeUI/HUFeedbackConsentViewControllerDelegate-Protocol.h>
#import <HomeUI/NSURLSessionDelegate-Protocol.h>
#import <HomeUI/UIGestureRecognizerDelegate-Protocol.h>

@class CADisplayLink, HFCameraAnalyticsCameraClipExportSessionEvent, HFCameraPlaybackEngine, HMCameraClipFetchVideoAssetContextOperation, HUClipScrubberDataSource, HUClipScrubberScrollDelegate, HUClipScrubberView, NSLayoutConstraint, NSString, UIButton, UITapGestureRecognizer, UIView;

@interface HUClipScrubberViewController : UIViewController <NSURLSessionDelegate, UIGestureRecognizerDelegate, HUFeedbackConsentViewControllerDelegate, HUCameraPlayerScrubbing, HFCameraPlaybackEngineObserver>
{
    BOOL _isVisible;
    CDUnknownBlockType _accessoryButtonHandler;
    CDUnknownBlockType _beginEditingHandler;
    CDUnknownBlockType _endEditingHandler;
    HFCameraPlaybackEngine *_playbackEngine;
    HUClipScrubberView *_scrubberView;
    UIButton *_selectionButton;
    UIButton *_nearbyAccessoriesButton;
    UIButton *_feedbackButton;
    UIView *_selectionPlatter;
    UIView *_feedbackPlatter;
    UIView *_nearbyAccessoriesPlatter;
    HUClipScrubberDataSource *_dataSource;
    HUClipScrubberScrollDelegate *_clipScrollDelegate;
    NSLayoutConstraint *_scrubberViewRightAnchorConstraint;
    NSLayoutConstraint *_scrubberViewLeftAnchorConstraint;
    NSLayoutConstraint *_feedbackPlatterTopAnchorConstraint;
    NSLayoutConstraint *_nearbyAccessoriesPlatterTopAnchorConstraint;
    NSLayoutConstraint *_selectionPlatterTopAnchorConstraint;
    CADisplayLink *_scrubberUpdateDisplayLink;
    unsigned long long _lastEngineMode;
    HMCameraClipFetchVideoAssetContextOperation *_exportDownloadOperation;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    HFCameraAnalyticsCameraClipExportSessionEvent *_exportSessionEvent;
}

@property (copy, nonatomic) CDUnknownBlockType accessoryButtonHandler; // @synthesize accessoryButtonHandler=_accessoryButtonHandler;
@property (copy, nonatomic) CDUnknownBlockType beginEditingHandler; // @synthesize beginEditingHandler=_beginEditingHandler;
@property (strong, nonatomic) HUClipScrubberScrollDelegate *clipScrollDelegate; // @synthesize clipScrollDelegate=_clipScrollDelegate;
@property (readonly, nonatomic) double currentScrubberResolution;
@property (strong, nonatomic) HUClipScrubberDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property (copy, nonatomic) CDUnknownBlockType endEditingHandler; // @synthesize endEditingHandler=_endEditingHandler;
@property (weak, nonatomic) HMCameraClipFetchVideoAssetContextOperation *exportDownloadOperation; // @synthesize exportDownloadOperation=_exportDownloadOperation;
@property (strong, nonatomic) HFCameraAnalyticsCameraClipExportSessionEvent *exportSessionEvent; // @synthesize exportSessionEvent=_exportSessionEvent;
@property (strong, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property (strong, nonatomic) UIView *feedbackPlatter; // @synthesize feedbackPlatter=_feedbackPlatter;
@property (strong, nonatomic) NSLayoutConstraint *feedbackPlatterTopAnchorConstraint; // @synthesize feedbackPlatterTopAnchorConstraint=_feedbackPlatterTopAnchorConstraint;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property (nonatomic) unsigned long long lastEngineMode; // @synthesize lastEngineMode=_lastEngineMode;
@property (strong, nonatomic) UIButton *nearbyAccessoriesButton; // @synthesize nearbyAccessoriesButton=_nearbyAccessoriesButton;
@property (strong, nonatomic) UIView *nearbyAccessoriesPlatter; // @synthesize nearbyAccessoriesPlatter=_nearbyAccessoriesPlatter;
@property (strong, nonatomic) NSLayoutConstraint *nearbyAccessoriesPlatterTopAnchorConstraint; // @synthesize nearbyAccessoriesPlatterTopAnchorConstraint=_nearbyAccessoriesPlatterTopAnchorConstraint;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property (strong, nonatomic) CADisplayLink *scrubberUpdateDisplayLink; // @synthesize scrubberUpdateDisplayLink=_scrubberUpdateDisplayLink;
@property (strong, nonatomic) HUClipScrubberView *scrubberView; // @synthesize scrubberView=_scrubberView;
@property (strong, nonatomic) NSLayoutConstraint *scrubberViewLeftAnchorConstraint; // @synthesize scrubberViewLeftAnchorConstraint=_scrubberViewLeftAnchorConstraint;
@property (strong, nonatomic) NSLayoutConstraint *scrubberViewRightAnchorConstraint; // @synthesize scrubberViewRightAnchorConstraint=_scrubberViewRightAnchorConstraint;
@property (strong, nonatomic) UIButton *selectionButton; // @synthesize selectionButton=_selectionButton;
@property (strong, nonatomic) UIView *selectionPlatter; // @synthesize selectionPlatter=_selectionPlatter;
@property (strong, nonatomic) NSLayoutConstraint *selectionPlatterTopAnchorConstraint; // @synthesize selectionPlatterTopAnchorConstraint=_selectionPlatterTopAnchorConstraint;
@property (strong, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConstraints;
- (BOOL)_cellBoundsContainsPlayhead:(id)arg1;
- (id)_displayableURLForCameraClipURL:(id)arg1;
- (id)_feedbackClip;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_scrubberDisplayLinkTick:(id)arg1;
- (void)_updatePlaybackPosition:(id)arg1 animated:(BOOL)arg2;
- (void)changeToLiveMode;
- (void)consentController:(id)arg1 didFinishConsentWithAnswer:(BOOL)arg2;
- (void)dealloc;
- (void)deleteClip;
- (void)didDoubleTap:(id)arg1;
- (void)didPinch:(id)arg1;
- (void)didSelectFeedbackButton;
- (void)didSelectRightActionButton:(id)arg1;
- (void)didTap:(id)arg1;
- (void)dismissEditInterface;
- (unsigned long long)displayMode;
- (void)donateAllClips;
- (void)donateClip:(id)arg1;
- (void)exportCurrentClipWithCompletion:(CDUnknownBlockType)arg1;
- (void)exportLocalClipAtURL:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)loadView;
- (id)outputURLForClip:(id)arg1;
- (id)platterWithView:(id)arg1;
- (void)playbackEngine:(id)arg1 didRemoveEvents:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateEvents:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimelineState:(unsigned long long)arg2;
- (void)presentFeedbackConsent;
- (void)presentFeedbackOptions;
- (void)presentPreviouslySubmittedClipAlert;
- (void)reloadClipManager:(id)arg1;
- (void)removeLiveButtonHighlighting;
- (void)showAssociatedAccessories;
- (void)showDeleteInterface;
- (void)showEditInterface;
- (void)submitCurrentClip;
- (void)togglePlayPause;
- (void)updateAccessoryViews;
- (void)updateDisplayForLiveMode;
- (void)updateScrubberDisplayLinkState;
- (void)updateScrubberViewAndAssociatedConstraints;
- (void)updateSelectionPlatterDisplay;
- (id)uploadURLCameraClip:(id)arg1;
- (BOOL)userIsScrubbing;
- (void)verifySubmitAllClips;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

