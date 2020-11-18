//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpotlightUI/SFSpeechRecognizerDelegate-Protocol.h>
#import <SpotlightUI/SPSearchAgentDelegate-Protocol.h>
#import <SpotlightUI/SPUISearchDictationViewProtocol-Protocol.h>
#import <SpotlightUI/SPUISearchFirstTimeViewControllerDelegate-Protocol.h>
#import <SpotlightUI/SPUISearchHeaderDelegate-Protocol.h>
#import <SpotlightUI/SPUISearchPluginClientInterface-Protocol.h>
#import <SpotlightUI/SPUISearchResultsActionManagerDelegate-Protocol.h>
#import <SpotlightUI/SPUISearchTableViewDelegate-Protocol.h>
#import <SpotlightUI/SPUISearchViewControllerPresentation-Protocol.h>
#import <SpotlightUI/SearchUIDelegate-Protocol.h>
#import <SpotlightUI/UIGestureRecognizerDelegate-Protocol.h>
#import <SpotlightUI/UINavigationControllerDelegate-Protocol.h>
#import <SpotlightUI/UISearchBarDelegate-Protocol.h>
#import <SpotlightUI/UITableViewDataSource-Protocol.h>
#import <SpotlightUI/UITableViewDelegate-Protocol.h>
#import <SpotlightUI/UITextFieldDelegate-Protocol.h>
#import <SpotlightUI/_SFSpeechRecognitionTaskDelegatePrivate-Protocol.h>

@class NSArray, NSDate, NSMutableSet, NSString, NSTimer, SFSpeechRecognitionTask, SFSpeechRecognizer, SPFeedbackVoiceSearch, SPUISearchDictationView, SPUISearchFirstTimeViewController, SPUISearchHeader, SPUISearchResultsActionManager, SPUISearchTableView, UIPanGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView, _UIBackdropView;

@interface SPUISearchViewController : UIViewController <SPUISearchResultsActionManagerDelegate, SPUISearchFirstTimeViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, SPUISearchTableViewDelegate, SPSearchAgentDelegate, UISearchBarDelegate, UINavigationControllerDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, SPUISearchHeaderDelegate, _SFSpeechRecognitionTaskDelegatePrivate, SFSpeechRecognizerDelegate, SearchUIDelegate, SPUISearchViewControllerPresentation, SPUISearchPluginClientInterface, SPUISearchDictationViewProtocol>
{
    SPUISearchFirstTimeViewController *_firstTimeViewController;
    SPUISearchTableView *_tableView;
    SPUISearchHeader *_searchHeader;
    SPUISearchResultsActionManager *_actionManager;
    UITapGestureRecognizer *_tapRecognizer;
    UISwipeGestureRecognizer *_swipeRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    double _lastContentOffsetY;
    BOOL _scrollDown;
    BOOL _wasPreviouslyScrolledToTop;
    long long _searchMode;
    long long _visibility;
    long long _firstTimeViewShowCount;
    NSString *_fteString;
    NSString *_fteLearnMoreLink;
    NSString *_fteContinueLink;
    BOOL _duetExpertChanged;
    BOOL _perfMetricsTestInProgress;
    double _triggerTimestamp;
    struct CGPoint _preReachabilityTableViewOrigin;
    struct CGPoint _reachabilityTableViewOrigin;
    BOOL _showingForReachability;
    BOOL _defaultSearchEnabled;
    NSTimer *_completionTimer;
    NSString *_recognizerLocaleName;
    SFSpeechRecognizer *_recognizer;
    SFSpeechRecognitionTask *_currentTask;
    BOOL _activated;
    BOOL _isPresenting;
    BOOL _updateTableWhenFinishedPresenting;
    BOOL _dismissWhenFinishedPresenting;
    BOOL _countedSeenFTE;
    BOOL _fteShown;
    BOOL _feedbackProvided;
    SPUISearchDictationView *_flamesView;
    NSString *_voiceQueryIdentifier;
    SPFeedbackVoiceSearch *_voiceSearchFeedback;
    BOOL _userIsTyping;
    BOOL _isTransitioningZKWBackdropView;
    BOOL _userInitiatedScrollInProgress;
    unsigned long long _presentsFromEdge;
    NSDate *_deactivateTime;
    NSTimer *_hysteresisTimer;
    unsigned long long _minimumQueryLengthForTableUpdate;
    double _typingHysteresis;
    NSString *_lastQuery;
    unsigned long long _queryStartTime;
    NSMutableSet *_purgeableTableViewCells;
    _UIBackdropView *_zkwBackdropView;
    double _zkwBackdropViewTransitionProgress;
    NSDate *_timeOfLastZKWUpdate;
    double _zkwExpirationInterval;
    NSTimer *_clearSearchTimer;
    double _clearSearchTimeInterval;
    double _clippingHeight;
    NSArray *_clippedCells;
    UIView *_topDividerView;
    unsigned long long _currentPresentationSource;
    NSString *_lastSearchQuery;
}

@property (readonly, nonatomic) BOOL _hasResults;
@property double clearSearchTimeInterval; // @synthesize clearSearchTimeInterval=_clearSearchTimeInterval;
@property (strong) NSTimer *clearSearchTimer; // @synthesize clearSearchTimer=_clearSearchTimer;
@property (strong) NSArray *clippedCells; // @synthesize clippedCells=_clippedCells;
@property double clippingHeight; // @synthesize clippingHeight=_clippingHeight;
@property (nonatomic) unsigned long long currentPresentationSource; // @synthesize currentPresentationSource=_currentPresentationSource;
@property (strong) NSDate *deactivateTime; // @synthesize deactivateTime=_deactivateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFadingOut) BOOL fadingOut;
@property (readonly) unsigned long long hash;
@property (strong) NSTimer *hysteresisTimer; // @synthesize hysteresisTimer=_hysteresisTimer;
@property BOOL isTransitioningZKWBackdropView; // @synthesize isTransitioningZKWBackdropView=_isTransitioningZKWBackdropView;
@property (strong) NSString *lastQuery; // @synthesize lastQuery=_lastQuery;
@property (strong, nonatomic) NSString *lastSearchQuery; // @synthesize lastSearchQuery=_lastSearchQuery;
@property unsigned long long minimumQueryLengthForTableUpdate; // @synthesize minimumQueryLengthForTableUpdate=_minimumQueryLengthForTableUpdate;
@property (nonatomic) unsigned long long presentsFromEdge; // @synthesize presentsFromEdge=_presentsFromEdge;
@property (strong) NSMutableSet *purgeableTableViewCells; // @synthesize purgeableTableViewCells=_purgeableTableViewCells;
@property unsigned long long queryStartTime; // @synthesize queryStartTime=_queryStartTime;
@property (readonly) Class superclass;
@property (strong) NSDate *timeOfLastZKWUpdate; // @synthesize timeOfLastZKWUpdate=_timeOfLastZKWUpdate;
@property (strong) UIView *topDividerView; // @synthesize topDividerView=_topDividerView;
@property double typingHysteresis; // @synthesize typingHysteresis=_typingHysteresis;
@property BOOL userInitiatedScrollInProgress; // @synthesize userInitiatedScrollInProgress=_userInitiatedScrollInProgress;
@property BOOL userIsTyping; // @synthesize userIsTyping=_userIsTyping;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (strong) _UIBackdropView *zkwBackdropView; // @synthesize zkwBackdropView=_zkwBackdropView;
@property double zkwBackdropViewTransitionProgress; // @synthesize zkwBackdropViewTransitionProgress=_zkwBackdropViewTransitionProgress;
@property double zkwExpirationInterval; // @synthesize zkwExpirationInterval=_zkwExpirationInterval;

+ (void)openApplicationWithBundleID:(id)arg1;
+ (void)openApplicationWithBundleID:(id)arg1 continuationAction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_actionManager;
- (void)_addGaussianBlurWithRadius:(double)arg1;
- (BOOL)_allowSwipeToDismiss;
- (void)_animateZKWBlurOut:(BOOL)arg1;
- (void)_cacheZKWQueryLive:(BOOL)arg1 allowInternet:(BOOL)arg2;
- (void)_cleanUpAfterScrolling:(id)arg1;
- (void)_clearSearchResults;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_didFinishDismissing;
- (void)_didFinishPresenting;
- (void)_dismissAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_duetExpertChanged:(id)arg1;
- (BOOL)_enoughFirstTimeViewsShown;
- (void)_handleDismissGesture;
- (void)_handlePanRecognizer:(id)arg1;
- (void)_handleSwipeRecognizer:(id)arg1;
- (void)_handleTapRecognizer:(id)arg1;
- (BOOL)_hasNoQuery;
- (BOOL)_isPullDownSpotlight;
- (BOOL)_isShowingCardDetailView;
- (void)_proactivelyUpdateZKWContent;
- (void)_registerForPerfMetricsTestNotifications;
- (void)_reloadTable;
- (void)_requestFTEStringsIfNeeded;
- (void)_resetToZKWSearchMode:(long long)arg1 background:(BOOL)arg2;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldEditingStarted;
- (void)_searchFieldReturnPressed;
- (void)_sendAbandonmentFeedbackForReason:(unsigned long long)arg1;
- (void)_sendFeedback:(id)arg1;
- (void)_setDismissGestureRecognizersEnabled:(BOOL)arg1;
- (void)_setFirstTimeViewVisible:(BOOL)arg1;
- (void)_setShowingKeyboard:(BOOL)arg1;
- (void)_setVisibility:(long long)arg1;
- (BOOL)_shouldShowFirstTimeView;
- (BOOL)_shouldUpdateZKWContent:(BOOL)arg1;
- (void)_showDictationView;
- (BOOL)_showKeyboardOnPresentation;
- (BOOL)_showingKeyboard;
- (void)_springBoardDidGoToHomeScreen:(id)arg1;
- (void)_triggerDismissForGesture:(id)arg1;
- (void)_updateClipping;
- (void)_updateFeedback:(id)arg1 forSectionIndex:(int)arg2;
- (void)_updateFirstTimeExperienceSeenCount;
- (void)_updateGestureRecognizerEnabledStatus;
- (void)_updateQuery;
- (void)_updateTableContents;
- (void)_updateTableLayoutIfNeeded;
- (void)_updateTableScrollability;
- (id)_wrapperProxy;
- (void)actionManager:(id)arg1 dismissAnimated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)actionManager:(id)arg1 dismissViewController:(id)arg2 completion:(CDUnknownBlockType)arg3 animated:(BOOL)arg4;
- (void)actionManager:(id)arg1 presentViewController:(id)arg2 completion:(CDUnknownBlockType)arg3 modally:(BOOL)arg4;
- (void)actionManager:(id)arg1 sendFeedback:(id)arg2;
- (void)activate;
- (void)animateForReachabilityActivatedWithOffsetFactor:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)animateForReachabilityDeactivatedWithHandler:(CDUnknownBlockType)arg1;
- (void)animateZKWIn;
- (void)animateZKWOut;
- (void)attributionButtonTapped:(id)arg1;
- (float)audioLevelForFlamesView;
- (void)backgroundResetToFullZKWSearchModeIfNeeded;
- (void)cancelButtonPressed;
- (void)clearPurgeableMemoryForNonVisibleTableViewCells;
- (void)clearSearchTimerDidFire;
- (void)commonDepature;
- (void)configureReachabilityGesture;
- (id)countOfVisibleResultsInSection:(long long)arg1;
- (id)currentSearchModel;
- (void)deactivate;
- (void)dealloc;
- (void)dictationButtonPressed;
- (void)didFinishPresenting:(BOOL)arg1;
- (void)didFinishZKWBlur;
- (void)didReceiveMemoryWarning;
- (void)didSelectActionItemForResult:(id)arg1;
- (void)dismiss;
- (void)dismissAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)donePressed;
- (BOOL)expandableSidewaysRowExistsInSection:(long long)arg1;
- (void)finishDictation;
- (void)firstTimeViewControllerDidSelectContinueAction:(id)arg1;
- (void)firstTimeViewControllerDidSelectLearnMoreAction:(id)arg1;
- (void)foregroundResetToZKWSearchModeNow;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleCancelReachabilityGesture:(id)arg1;
- (void)handleDictationCompletion:(id)arg1;
- (id)init;
- (id)inputTypeForInputMode:(id)arg1;
- (BOOL)isDictationAvailable;
- (BOOL)isZKWSearchMode;
- (void)loadView;
- (long long)maxUnexpandedRowsInSection:(long long)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (long long)numberOfPossibleRowsInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)openURL:(id)arg1;
- (void)prefetchImagesForScrollDirection:(BOOL)arg1 delta:(double)arg2;
- (id)recognizer;
- (void)requestGestureResetAnimated:(BOOL)arg1;
- (void)resetCells;
- (void)resultSelected:(id)arg1;
- (void)resultSelected:(id)arg1 inSection:(id)arg2;
- (BOOL)resultShouldAppearInSidewaysRow:(id)arg1;
- (id)resultsForRow:(long long)arg1 inSection:(long long)arg2;
- (id)resultsForRow:(long long)arg1 inSection:(long long)arg2 expanded:(BOOL)arg3;
- (id)resultsForRowsInSection:(long long)arg1 expanded:(BOOL)arg2;
- (id)resultsForRowsInSection:(long long)arg1 stopAfterRow:(long long)arg2 expanded:(BOOL)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentUpdatedResults:(id)arg1;
- (id)searchHeader;
- (id)searchTableView;
- (void)searchTableViewExpansionDidToggleBegin:(id)arg1;
- (void)searchTableViewExpansionDidToggleEnd:(id)arg1;
- (BOOL)sectionCanHaveSidewaysRows:(id)arg1;
- (void)sendRenderFeedback;
- (void)sendRenderFeedbackInternal;
- (void)setSearchMode:(long long)arg1;
- (void)setTableViewShown:(BOOL)arg1;
- (void)setVoiceQueryIdentifier:(id)arg1 reason:(id)arg2;
- (BOOL)shouldHideExpandabilityOfSections;
- (BOOL)shouldShowMoreButtonForSection:(unsigned long long)arg1;
- (void)speechRecognitionDidDetectSpeech:(id)arg1;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didReceiveSearchResponse:(id)arg2 data:(id)arg3 recognizedText:(id)arg4 stable:(BOOL)arg5 searchType:(long long)arg6;
- (void)speechRecognitionTask:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
- (void)speechRecognitionTask:(id)arg1 didRecordAudioPCMBuffer:(id)arg2;
- (void)speechRecognitionTaskFinishedReadingAudio:(id)arg1;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;
- (void)speechRecognizer:(id)arg1 availabilityDidChange:(BOOL)arg2;
- (BOOL)spotlightIsInactiveAndRotating;
- (void)startClearSearchTimer;
- (void)startDictation:(id)arg1;
- (void)stopClearSearchTimer;
- (void)stopDictation:(id)arg1;
- (void)switchFromSearchResultsToZKW;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (struct CGPoint)tableView:(id)arg1 newContentOffsetAfterUpdate:(struct CGPoint)arg2 context:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableViewDidFinishReload:(id)arg1;
- (BOOL)tableViewIsShown;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)timeToStartDictation:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePresentationProgress:(double)arg1;
- (void)updateZKWBlurProgress:(double)arg1;
- (void)userFinishedTyping;
- (id)viewControllerForPresenting;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willBeginDismissing:(BOOL)arg1;
- (void)willBeginPresentingAnimated:(BOOL)arg1;
- (void)willBeginPresentingAnimated:(BOOL)arg1 fromSource:(unsigned long long)arg2;
- (void)willBeginZKWBlur;

@end

