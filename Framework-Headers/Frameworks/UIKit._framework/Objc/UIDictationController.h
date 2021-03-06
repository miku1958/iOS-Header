//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <UIKitCore/UIDictationConnectionDelegate-Protocol.h>
#import <UIKitCore/UIDictationConnectionTokenFilterProtocol-Protocol.h>
#import <UIKitCore/_UIDictationPrivacySheetControllerDelegate-Protocol.h>
#import <UIKitCore/_UITouchPhaseChangeDelegate-Protocol.h>

@class AFAnalyticsTurnBasedInstrumentationContext, CADisplayLink, NSArray, NSDictionary, NSMutableArray, NSNumber, NSString, NSTimer, UIDictationConnection, UIDictationConnectionPreferences, UIDictationStreamingOperations, UIKeyboardInputMode, UITapGestureRecognizer, UIWindow, _UIDictationPrivacySheetController, _UIDictationTelephonyMonitor, _UIVoiceCommandButtonTapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIDictationController : NSObject <UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol, UIAdaptivePresentationControllerDelegate, _UIDictationPrivacySheetControllerDelegate, _UITouchPhaseChangeDelegate>
{
    UIDictationConnection *_dictationConnection;
    UIDictationConnectionPreferences *_preferences;
    NSTimer *_recordingLimitTimer;
    BOOL _connectionWasAlreadyAliveForStatisticsLogging;
    UIDictationStreamingOperations *_streamingOperations;
    NSString *_language;
    BOOL _recievingResults;
    BOOL _streamingAnimationActive;
    double _lastAnimationUpdateTimeStamp;
    CDUnknownBlockType _finalResultsOperation;
    CADisplayLink *_streamingAnimationDisplayLink;
    BOOL cancelledByWaitingForLocalResults;
    long long _updatingDocument;
    BOOL _deferredCancellationRequested;
    BOOL _isOfflineMetricsSessionActive;
    BOOL _didUseOfflineDictation;
    long long _lastOfflineDictationMetricEvent;
    _UIDictationTelephonyMonitor *_monitor;
    NSString *_prefixTextForStart;
    NSString *_selectionTextForStart;
    NSString *_postfixTextForStart;
    BOOL _hasDictated;
    NSDictionary *_selectedAttributesForDictation;
    CDUnknownBlockType _privacySheetDismissalHandler;
    int _dictationInputModeNotifierToken;
    long long _currentShortcutType;
    UITapGestureRecognizer *_hardwareShortcutRecognizer;
    _UIVoiceCommandButtonTapGestureRecognizer *_hardwareVoiceCommandKeyRecognizer;
    BOOL _prevForceDisplayOverridePlaceholder;
    BOOL _performingStreamingEditingOperation;
    BOOL _discardNextHypothesis;
    BOOL _hasPreheated;
    BOOL _logAppEnterBackground;
    BOOL _hasPostedInstrumentationDictationContext;
    BOOL _didToggleSoftwareKeyboardVisibleForDictation;
    BOOL _wantsAvailabilityMonitoringWhenAppActive;
    BOOL _selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate;
    BOOL _selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate;
    BOOL _localSpeechRecognitionForced;
    BOOL _secureOfflineOnlySpeechRecognition;
    BOOL _ignoreFinalizePhrases;
    BOOL _detectingUtterances;
    BOOL _finalizingRecognizedUtterance;
    BOOL _hasCheckedForLeadingSpaceOnce;
    BOOL _neededLeadingSpace;
    unsigned short _initialPreviousCharacterForAsyncDelegate;
    unsigned short _initialCharacterAfterSelectionForAsyncDelegate;
    NSString *_activationIdentifier;
    NSString *_smartLanguageSelectionOverrideLanguage;
    NSMutableArray *_pendingEdits;
    NSString *_previousHypothesis;
    NSString *_lastHypothesis;
    NSString *_targetHypothesis;
    UIWindow *_dictationPresenterWindow;
    unsigned long long _reasonType;
    NSString *_lastRecognitionText;
    id _lastCorrectionIdentifier;
    NSString *_interactionIdentifier;
    NSString *_lastMessageKeyboardLanguage;
    UIKeyboardInputMode *_currentInputModeForDictation;
    UIKeyboardInputMode *_keyboardInputModeToReturn;
    _UIDictationPrivacySheetController *_dictationPrivacySheetController;
    NSString *_detectedLanguage;
    NSArray *_dictationLanguages;
    NSString *_initialDictationLanguage;
    NSString *_fallbackDictationLanguage;
    unsigned long long _dictationSourceType;
    NSString *_currentKeyboardPrimaryLanguage;
    unsigned long long _stateHandler;
    NSString *_modelInfo;
    AFAnalyticsTurnBasedInstrumentationContext *_currentInstrumentationContext;
    struct _NSRange _insertionRange;
}

@property (copy, nonatomic) NSString *activationIdentifier; // @synthesize activationIdentifier=_activationIdentifier;
@property (strong, nonatomic) UIKeyboardInputMode *currentInputModeForDictation; // @synthesize currentInputModeForDictation=_currentInputModeForDictation;
@property (strong, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationContext; // @synthesize currentInstrumentationContext=_currentInstrumentationContext;
@property (copy, nonatomic) NSString *currentKeyboardPrimaryLanguage; // @synthesize currentKeyboardPrimaryLanguage=_currentKeyboardPrimaryLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detectedLanguage; // @synthesize detectedLanguage=_detectedLanguage;
@property (nonatomic, getter=isDetectingUtterances) BOOL detectingUtterances; // @synthesize detectingUtterances=_detectingUtterances;
@property (strong, nonatomic) NSArray *dictationLanguages; // @synthesize dictationLanguages=_dictationLanguages;
@property (strong, nonatomic) UIWindow *dictationPresenterWindow; // @synthesize dictationPresenterWindow=_dictationPresenterWindow;
@property (strong, nonatomic) _UIDictationPrivacySheetController *dictationPrivacySheetController; // @synthesize dictationPrivacySheetController=_dictationPrivacySheetController;
@property (readonly, strong, nonatomic) NSNumber *dictationRequestOrigin;
@property (nonatomic) unsigned long long dictationSourceType; // @synthesize dictationSourceType=_dictationSourceType;
@property (nonatomic) BOOL didToggleSoftwareKeyboardVisibleForDictation; // @synthesize didToggleSoftwareKeyboardVisibleForDictation=_didToggleSoftwareKeyboardVisibleForDictation;
@property (nonatomic) BOOL discardNextHypothesis; // @synthesize discardNextHypothesis=_discardNextHypothesis;
@property (copy, nonatomic) NSString *fallbackDictationLanguage; // @synthesize fallbackDictationLanguage=_fallbackDictationLanguage;
@property (nonatomic, getter=isFinalizingRecognizedUtterance) BOOL finalizingRecognizedUtterance; // @synthesize finalizingRecognizedUtterance=_finalizingRecognizedUtterance;
@property (nonatomic) BOOL hasCheckedForLeadingSpaceOnce; // @synthesize hasCheckedForLeadingSpaceOnce=_hasCheckedForLeadingSpaceOnce;
@property (nonatomic) BOOL hasPostedInstrumentationDictationContext; // @synthesize hasPostedInstrumentationDictationContext=_hasPostedInstrumentationDictationContext;
@property (nonatomic) BOOL hasPreheated; // @synthesize hasPreheated=_hasPreheated;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreFinalizePhrases; // @synthesize ignoreFinalizePhrases=_ignoreFinalizePhrases;
@property (nonatomic) unsigned short initialCharacterAfterSelectionForAsyncDelegate; // @synthesize initialCharacterAfterSelectionForAsyncDelegate=_initialCharacterAfterSelectionForAsyncDelegate;
@property (copy, nonatomic) NSString *initialDictationLanguage; // @synthesize initialDictationLanguage=_initialDictationLanguage;
@property (nonatomic) unsigned short initialPreviousCharacterForAsyncDelegate; // @synthesize initialPreviousCharacterForAsyncDelegate=_initialPreviousCharacterForAsyncDelegate;
@property (nonatomic) struct _NSRange insertionRange; // @synthesize insertionRange=_insertionRange;
@property (copy, nonatomic) NSString *interactionIdentifier; // @synthesize interactionIdentifier=_interactionIdentifier;
@property (strong, nonatomic) UIKeyboardInputMode *keyboardInputModeToReturn; // @synthesize keyboardInputModeToReturn=_keyboardInputModeToReturn;
@property (copy, nonatomic) id lastCorrectionIdentifier; // @synthesize lastCorrectionIdentifier=_lastCorrectionIdentifier;
@property (copy, nonatomic) NSString *lastHypothesis; // @synthesize lastHypothesis=_lastHypothesis;
@property (copy, nonatomic) NSString *lastMessageKeyboardLanguage; // @synthesize lastMessageKeyboardLanguage=_lastMessageKeyboardLanguage;
@property (copy, nonatomic) NSString *lastRecognitionText; // @synthesize lastRecognitionText=_lastRecognitionText;
@property (nonatomic) BOOL localSpeechRecognitionForced; // @synthesize localSpeechRecognitionForced=_localSpeechRecognitionForced;
@property (nonatomic) BOOL logAppEnterBackground; // @synthesize logAppEnterBackground=_logAppEnterBackground;
@property (copy, nonatomic) NSString *modelInfo; // @synthesize modelInfo=_modelInfo;
@property (nonatomic) BOOL neededLeadingSpace; // @synthesize neededLeadingSpace=_neededLeadingSpace;
@property (strong, nonatomic) NSMutableArray *pendingEdits; // @synthesize pendingEdits=_pendingEdits;
@property (nonatomic) BOOL performingStreamingEditingOperation; // @synthesize performingStreamingEditingOperation=_performingStreamingEditingOperation;
@property (copy, nonatomic) NSString *previousHypothesis; // @synthesize previousHypothesis=_previousHypothesis;
@property (nonatomic) unsigned long long reasonType; // @synthesize reasonType=_reasonType;
@property (nonatomic) BOOL secureOfflineOnlySpeechRecognition; // @synthesize secureOfflineOnlySpeechRecognition=_secureOfflineOnlySpeechRecognition;
@property (nonatomic) BOOL selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate; // @synthesize selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate=_selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate;
@property (nonatomic) BOOL selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate; // @synthesize selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate=_selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate;
@property (copy) NSString *smartLanguageSelectionOverrideLanguage; // @synthesize smartLanguageSelectionOverrideLanguage=_smartLanguageSelectionOverrideLanguage;
@property (nonatomic) unsigned long long stateHandler; // @synthesize stateHandler=_stateHandler;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetHypothesis; // @synthesize targetHypothesis=_targetHypothesis;
@property (nonatomic) BOOL wantsAvailabilityMonitoringWhenAppActive; // @synthesize wantsAvailabilityMonitoringWhenAppActive=_wantsAvailabilityMonitoringWhenAppActive;

+ (id)UIDictationInstrumentaionLocalIdentifierWithLocalString:(id)arg1;
+ (id)UIDictationLanguageSourceType:(unsigned long long)arg1;
+ (int)UIDictationStartStopReasonToInstrumentationDictationEndPointType:(unsigned long long)arg1;
+ (int)UIDictationStartStopReasonToInstrumentationInvocationSourceType:(unsigned long long)arg1;
+ (id)UIDictationStartStopReasonTypeDescription:(unsigned long long)arg1;
+ (BOOL)_applicationIsActive;
+ (id)_dictationLog;
+ (id)activeConnection;
+ (id)activeInstance;
+ (id)activeSLSDictationLanguages;
+ (void)applicationDidBecomeActive;
+ (void)applicationDidEnterBackgroundNotification;
+ (void)applicationWillResignActive;
+ (id)arrayWithTextEntriesRemoved:(id)arg1;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (BOOL)canShareDictationData;
+ (BOOL)checkTraitsSupportDictation:(id)arg1;
+ (BOOL)dictationInfoIsOnScreen;
+ (BOOL)dictationIsFunctional;
+ (id)dictionaryWithTextEntriesRemoved:(id)arg1;
+ (void)didBeginEditingInTextView:(id)arg1;
+ (BOOL)fetchCurrentInputModeSupportsDictation;
+ (void)instrumentationDictationAlternativeSelectedWithInstrumentationContext:(id)arg1 originalText:(id)arg2 replacementText:(id)arg3 replacementIndex:(unsigned long long)arg4 alternativesAvailableCount:(unsigned long long)arg5 dictationLanguage:(id)arg6;
+ (void)instrumentationDictationAlternativesViewedWithInstrumentationContext:(id)arg1 alternatives:(id)arg2 dictationLanguage:(id)arg3;
+ (id)interpretation:(id)arg1 forPhraseIndex:(unsigned long long)arg2 isShiftLocked:(BOOL)arg3 autocapitalizationType:(long long)arg4 useServerCapitalization:(BOOL)arg5;
+ (BOOL)isDictationSearchBarButtonVisible;
+ (BOOL)isRunning;
+ (BOOL)isTextViewOnStarkScreen:(id)arg1;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
+ (void)logCorrectionStatisticsForDelegate:(id)arg1 reason:(unsigned long long)arg2;
+ (void)logDictationString:(id)arg1;
+ (void)onDidBecomeActive;
+ (void)onWillResignActive;
+ (void)performOperations:(CDUnknownBlockType)arg1 keyboardShifted:(BOOL)arg2;
+ (void)poppedLastStreamingOperation;
+ (BOOL)remoteCanDictateCurrentInputMode;
+ (id)removeTextIfNeeded:(id)arg1;
+ (id)removeTextIfNeeded:(id)arg1 metadata:(id)arg2;
+ (id)serializedDictationPhrases:(id)arg1;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2 autocapitalization:(long long)arg3 capitalization:(unsigned long long)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2 capitalization:(unsigned long long)arg3;
+ (double)serverManualEndpointingThreshold;
+ (id)sharedInstance;
+ (BOOL)shouldDeleteBackwardInInputDelegate:(id)arg1;
+ (BOOL)shouldHideCursorForTextView:(id)arg1;
+ (BOOL)shouldHideSelectionUIForTextView:(id)arg1;
+ (BOOL)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
+ (BOOL)shouldPreferOnlineRecognition;
+ (BOOL)shouldRemoveTextEntries;
+ (BOOL)shouldRemoveTextEntries:(id)arg1;
+ (void)siriPreferencesChanged;
+ (id)slsDictationLanguages;
+ (BOOL)starkScreenExists;
+ (id)streamingHypothesisForPhrases:(id)arg1;
+ (id)stringForState:(int)arg1;
+ (id)stringForViewMode:(int)arg1;
+ (BOOL)takesPressesBegan:(id)arg1 forTextView:(id)arg2;
+ (BOOL)takesPressesChanged:(id)arg1 forTextView:(id)arg2;
+ (BOOL)takesPressesEnded:(id)arg1 forTextView:(id)arg2;
+ (id)textRelatedMetadataKeys;
+ (void)updateLandingView;
+ (BOOL)usingServerManualEndpointingThreshold;
+ (BOOL)usingTypeAndTalk;
+ (int)viewMode;
+ (void)viewServiceDidBecomeActive;
+ (void)viewServiceWillResignActive;
+ (id)whitelistedDictationDictionariesFromMetadataDictionaries:(id)arg1;
+ (id)whitelistedDictationDictionaryFromMetadata:(id)arg1;
+ (id)whitelistedDictationMetadataKeys;
- (void).cxx_destruct;
- (BOOL)_allowsMicsInSearchFieldForLanguageIdentifiers:(id)arg1;
- (id)_assistantCompatibleLanguageCodeForInputMode:(id)arg1;
- (void)_beginEnableDictationPrompt;
- (void)_beginOfflineMetricsSession;
- (void)_clearExistingText;
- (void)_completeStartDictationWithContinuation:(CDUnknownBlockType)arg1;
- (id)_containingSearchBarForView:(id)arg1;
- (void)_createDictationPresenterWindowIfNecessary;
- (id)_currentLanguageForOfflineDictationMetrics;
- (void)_deleteBackwardIntoText;
- (void)_displayLinkFired:(id)arg1;
- (void)_displaySecureContentsAsPlainText:(BOOL)arg1 afterDelay:(double)arg2;
- (void)_endEnableDictationPromptAnimated:(BOOL)arg1;
- (void)_endOfflineMetricsSession;
- (id)_getBestHypothesisRangeGivenHintRange:(id)arg1 inputDelegate:(id)arg2 hypothesisRange:(struct _NSRange *)arg3 documentTextInRange:(id *)arg4;
- (struct _NSRange)_getRangeOfString:(id)arg1 inDocumentText:(id)arg2;
- (void)_handleDataSharingSheetDecision;
- (void)_handlePrivacySheetDismissal;
- (id)_hypothesisRangeFromSelectionRange:(id)arg1 inputDelegate:(id)arg2;
- (void)_markOfflineDictationInputMetricEvent;
- (void)_presentAlertForDictationInputModeOfType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_presentDataSharingOptInAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentOptInAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentPrivacySheetForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_rangeByExtendingRange:(id)arg1 backward:(long long)arg2 forward:(long long)arg3 inputDelegate:(id)arg4;
- (void)_restartDictation;
- (void)_runFinalizeOperation;
- (void)_runFinalizeOperation:(BOOL)arg1;
- (void)_setFinalResultHandler:(CDUnknownBlockType)arg1;
- (void)_setupHypothesisAsFinalResults;
- (BOOL)_shouldDeleteBackwardInInputDelegate:(id)arg1;
- (BOOL)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
- (void)_startDictation;
- (void)_startStreamingAnimations;
- (void)_stopStreamingAnimation;
- (BOOL)_systemLanguageSupportsDictation;
- (void)_touchPhaseChangedForTouch:(id)arg1;
- (void)_updateFromSelectedTextRange:(id)arg1 withNewHypothesis:(id)arg2;
- (float)audioLevel;
- (void)cancelDictation;
- (void)cancelDictationForTextStoreChangesInResponder:(id)arg1;
- (void)cancelRecordingLimitTimer;
- (void)clearTextFieldPlaceholder;
- (void)completeStartConnection;
- (void)completeStartConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (id)connectionForStatisticsLogging;
- (BOOL)currentViewModeSupportsDictationMics;
- (BOOL)dataSharingDecided;
- (void)dealloc;
- (CDUnknownBlockType)dictationBlockForToken:(id)arg1;
- (id)dictationConnection;
- (void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2;
- (void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2;
- (void)dictationConnection:(id)arg1 didFailRecognitionWithError:(id)arg2;
- (void)dictationConnection:(id)arg1 didFailRecordingWithError:(id)arg2;
- (void)dictationConnection:(id)arg1 didFilterTokensWithFilterState:(id)arg2 forFinalize:(BOOL)arg3;
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
- (void)dictationConnection:(id)arg1 didStartRecordingWithOptions:(id)arg2;
- (void)dictationConnection:(id)arg1 filterState:(id)arg2 processFilteredToken:(id)arg3 forFinalize:(BOOL)arg4;
- (BOOL)dictationConnection:(id)arg1 filterState:(id)arg2 shouldCheckpointAtToken:(id)arg3;
- (void)dictationConnection:(id)arg1 finalizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 secureInput:(BOOL)arg5;
- (void)dictationConnection:(id)arg1 receivedInterpretation:(id)arg2 languageModel:(id)arg3 secureInput:(BOOL)arg4;
- (void)dictationConnection:(id)arg1 updateOptions:(id)arg2;
- (id)dictationConnection:(id)arg1 willFilterTokensWithLanguageModel:(id)arg2 forFinalize:(BOOL)arg3;
- (void)dictationConnectionDidCancel:(id)arg1;
- (void)dictationConnectionDidCancelIncompatibleLocalRecognizer:(id)arg1;
- (void)dictationConnectionDidCancelRecording:(id)arg1;
- (void)dictationConnectionDidEndRecording:(id)arg1;
- (void)dictationConnectionDidFinish:(id)arg1;
- (void)dictationConnectionDidStartRecording:(id)arg1;
- (void)dictationConnectionWillStartRecording:(id)arg1;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (BOOL)dictationDisabledDueToTelephonyActivity;
- (BOOL)dictationEnabled;
- (BOOL)dictationIsModifyingText;
- (void)dictationPrivacySheetControllerDidFinish:(id)arg1;
- (BOOL)dictationSearchFieldUIEnabled;
- (BOOL)dictationSearchFieldUISupportsTraitCollection:(id)arg1;
- (id)dictationUIState;
- (void)didShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3 instrumentationContext:(id)arg4 dictationLanguage:(id)arg5;
- (void)dismissDictationView:(id)arg1;
- (void)dismissSoftwareKeyboardIfNeeded;
- (void)doubleTappedKey:(id)arg1;
- (void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)endSmartLanguageSelectionOverride;
- (void)errorAnimationDidFinish;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (void)finalizeDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 secureInput:(BOOL)arg4 finalResult:(BOOL)arg5;
- (void)finishDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 secureInput:(BOOL)arg4;
- (void)handleHardwareKeyboardGesture;
- (id)init;
- (void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)instrumentationDictationContextEmitInstrumentation;
- (void)instrumentationDictationTranscriptionMetadataEmitInstrumentationWithDictationResult:(id)arg1;
- (BOOL)isFallingBackToMonolingualDictation;
- (BOOL)isIgnoringDocumentChanges;
- (BOOL)isRecievingResults;
- (void)keyboardDismissed:(id)arg1;
- (void)keyboardInputModeChanged:(id)arg1;
- (id)language;
- (id)languageCodeForAssistantLanguageCode:(id)arg1;
- (void)logAlternativeSelected:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3;
- (void)logDidAcceptDictationResult:(id)arg1 reasonType:(unsigned long long)arg2;
- (void)logDidAcceptReplacement:(id)arg1 replacementLanguageCode:(id)arg2 originalText:(id)arg3 correctionIdentifier:(id)arg4 interactionIdentifier:(id)arg5;
- (void)markKeyboardDeleteMetricEvent;
- (void)markKeyboardDidReset;
- (void)markKeyboardInputMetricEvent;
- (void)overrideSmartLanguageSelection:(id)arg1;
- (void)performIgnoringDocumentChanges:(CDUnknownBlockType)arg1;
- (id)postfixTextForInputDelegate:(id)arg1;
- (void)preferencesChanged:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1;
- (void)preheatIfNecessary;
- (void)prepareDoubleTapShortcutGesture:(id)arg1;
- (void)prepareStartDictationKeyboardGestures;
- (void)prepareStartDictationKeyboardGesturesForDelegate:(id)arg1;
- (void)prepareVoiceCommandSingleTapGesture:(id)arg1;
- (void)presentAlertOfType:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)releaseConnection;
- (void)releaseConnectionAfterDictationRequest;
- (void)releaseConnectionAfterStatisticsLogging;
- (void)removeStartDictationKeyboardGestures;
- (void)restartDictationForTypeAndTalk;
- (void)restoreTextFieldPlaceholder;
- (struct __CFString *)resultTransformForLanguageModel:(id)arg1;
- (id)resultWithTrailingSpace:(id)arg1;
- (id)selectedTextForInputDelegate:(id)arg1;
- (void)setDictationInfoOnScreenNotifyKey:(BOOL)arg1;
- (void)setDictationInputMode:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setState:(int)arg1;
- (void)setupForDictationStart;
- (void)setupForStreamingDictationStart;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (BOOL)shouldOverrideManualEndpointing;
- (BOOL)shouldPresentOptInAlert;
- (BOOL)shouldUseDictationSearchFieldBehavior;
- (void)showSoftwareKeyboardIfNeeded;
- (BOOL)smartLanguageSelectionOverridden;
- (void)startConnection;
- (void)startDictation;
- (void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startHelpMessageDisplay;
- (void)startRecordingLimitTimer;
- (int)state;
- (void)stopAndCancelDictationIfNeededWithReasonType:(unsigned long long)arg1;
- (void)stopAndCancelDictationWithReasonType:(unsigned long long)arg1;
- (void)stopDictation;
- (void)stopDictation:(BOOL)arg1;
- (void)stopDictationByTimer;
- (void)stopDictationIgnoreFinalizePhrases;
- (void)stopHelpMessageDisplay;
- (id)streamingOperations;
- (BOOL)supportsDictationLanguage:(id)arg1 error:(id *)arg2;
- (BOOL)supportsInputMode:(id)arg1 error:(id *)arg2;
- (void)switchToDictationInputMode;
- (void)switchToDictationInputModeWithTouch:(id)arg1;
- (void)switchToDictationInputModeWithTouch:(id)arg1 withKeyboardInputMode:(id)arg2;
- (void)switchToDictationLanguage:(id)arg1;
- (void)updateDoubleTapShortcutWithPreference:(long long)arg1;
- (void)voiceCommandSingleTapKey:(id)arg1;

@end

