//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIDictationConnectionDelegate-Protocol.h>
#import <UIKit/UIDictationConnectionTokenFilterProtocol-Protocol.h>
#import <UIKit/_UITouchPhaseChangeDelegate-Protocol.h>

@class CADisplayLink, NSMutableArray, NSString, NSTimer, UIAlertView, UIDictationConnection, UIDictationConnectionPreferences, UIDictationStreamingOperations, UIKeyboardInputMode, UIWindow, _UIDictationPrivacySheetController, _UIDictationTelephonyMonitor;

__attribute__((visibility("hidden")))
@interface UIDictationController : NSObject <UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol, _UITouchPhaseChangeDelegate>
{
    UIDictationConnection *_dictationConnection;
    UIDictationConnectionPreferences *_preferences;
    NSTimer *_recordingLimitTimer;
    UIAlertView *_dictationAvailableSoonAlert;
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
    BOOL _ignoreFinalizePhrases;
    BOOL _isOfflineMetricsSessionActive;
    BOOL _didUseOfflineDictation;
    long long _lastOfflineDictationMetricEvent;
    _UIDictationTelephonyMonitor *_monitor;
    NSString *_prefixTextForStart;
    NSString *_selectionTextForStart;
    NSString *_postfixTextForStart;
    BOOL dictationStartedFromGesture;
    BOOL _performingStreamingEditingOperation;
    BOOL _discardNextHypothesis;
    BOOL _hasPreheated;
    BOOL _wantsAvailabilityMonitoringWhenAppActive;
    NSString *_activationIdentifier;
    NSMutableArray *_pendingEdits;
    NSString *_previousHypothesis;
    NSString *_lastHypothesis;
    NSString *_targetHypothesis;
    UIWindow *_dictationPresenterWindow;
    _UIDictationPrivacySheetController *_dictationPrivacySheetController;
    UIKeyboardInputMode *_currentInputModeForDictation;
    UIKeyboardInputMode *_keyboardInputModeToReturn;
    struct _NSRange _insertionRange;
}

@property (copy, nonatomic) NSString *activationIdentifier; // @synthesize activationIdentifier=_activationIdentifier;
@property (strong, nonatomic) UIKeyboardInputMode *currentInputModeForDictation; // @synthesize currentInputModeForDictation=_currentInputModeForDictation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIWindow *dictationPresenterWindow; // @synthesize dictationPresenterWindow=_dictationPresenterWindow;
@property (strong, nonatomic) _UIDictationPrivacySheetController *dictationPrivacySheetController; // @synthesize dictationPrivacySheetController=_dictationPrivacySheetController;
@property (nonatomic) BOOL dictationStartedFromGesture; // @synthesize dictationStartedFromGesture;
@property (nonatomic) BOOL discardNextHypothesis; // @synthesize discardNextHypothesis=_discardNextHypothesis;
@property (nonatomic) BOOL hasPreheated; // @synthesize hasPreheated=_hasPreheated;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct _NSRange insertionRange; // @synthesize insertionRange=_insertionRange;
@property (strong, nonatomic) UIKeyboardInputMode *keyboardInputModeToReturn; // @synthesize keyboardInputModeToReturn=_keyboardInputModeToReturn;
@property (copy, nonatomic) NSString *lastHypothesis; // @synthesize lastHypothesis=_lastHypothesis;
@property (strong, nonatomic) NSMutableArray *pendingEdits; // @synthesize pendingEdits=_pendingEdits;
@property (nonatomic) BOOL performingStreamingEditingOperation; // @synthesize performingStreamingEditingOperation=_performingStreamingEditingOperation;
@property (copy, nonatomic) NSString *previousHypothesis; // @synthesize previousHypothesis=_previousHypothesis;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetHypothesis; // @synthesize targetHypothesis=_targetHypothesis;
@property (nonatomic) BOOL wantsAvailabilityMonitoringWhenAppActive; // @synthesize wantsAvailabilityMonitoringWhenAppActive=_wantsAvailabilityMonitoringWhenAppActive;

+ (BOOL)_applicationIsActive;
+ (id)activeConnection;
+ (id)activeInstance;
+ (void)applicationDidBecomeActive;
+ (void)applicationDidEnterBackgroundNotification;
+ (void)applicationWillResignActive;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (BOOL)checkTraitsSupportDictation:(id)arg1;
+ (BOOL)dictationInfoIsOnScreen;
+ (BOOL)dictationIsFunctional;
+ (void)didBeginEditingInTextView:(id)arg1;
+ (void)didOneFingerTapInTextView:(id)arg1;
+ (void)disableGestureHandler;
+ (void)enableGestureHandlerIfNecessary;
+ (BOOL)fetchCurrentInputModeSupportsDictation;
+ (id)interpretation:(id)arg1 forPhraseIndex:(unsigned long long)arg2 isShiftLocked:(BOOL)arg3 autocapitalizationType:(long long)arg4 useServerCapitalization:(BOOL)arg5;
+ (BOOL)isRunning;
+ (BOOL)isTextViewOnStarkScreen:(id)arg1;
+ (void)keyboardDidSetInputMode;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
+ (void)logCorrectionStatisticsForDelegate:(id)arg1;
+ (void)logDictationString:(id)arg1;
+ (void)performOperations:(CDUnknownBlockType)arg1 keyboardShifted:(BOOL)arg2;
+ (void)poppedLastStreamingOperation;
+ (BOOL)remoteCanDictateCurrentInputMode;
+ (id)serializedDictationPhrases:(id)arg1;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2 autocapitalization:(long long)arg3 capitalization:(unsigned long long)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2 capitalization:(unsigned long long)arg3;
+ (double)serverManualEndpointingThreshold;
+ (id)sharedInstance;
+ (BOOL)shouldDeleteBackwardInInputDelegate:(id)arg1;
+ (BOOL)shouldEnableGestureHandler;
+ (BOOL)shouldHideCursorForTextView:(id)arg1;
+ (BOOL)shouldHideSelectionUIForTextView:(id)arg1;
+ (BOOL)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
+ (void)siriPreferencesChanged;
+ (BOOL)starkScreenExists;
+ (id)streamingHypothesisForPhrases:(id)arg1;
+ (id)stringForState:(int)arg1;
+ (id)stringForViewMode:(int)arg1;
+ (BOOL)takesPressesBegan:(id)arg1 forTextView:(id)arg2;
+ (BOOL)takesPressesChanged:(id)arg1 forTextView:(id)arg2;
+ (BOOL)takesPressesEnded:(id)arg1 forTextView:(id)arg2;
+ (void)updateLandingView;
+ (BOOL)usingServerManualEndpointingThreshold;
+ (BOOL)usingTypeAndTalk;
+ (int)viewMode;
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
- (id)_hypothesisRangeFromSelectionRange:(id)arg1 inputDelegate:(id)arg2;
- (void)_markOfflineDictationInputMetricEvent;
- (void)_presentOptInAlertForDictationInputMode;
- (void)_presentOptInAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentPrivacySheetWithCompletion:(CDUnknownBlockType)arg1;
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
- (void)dealloc;
- (CDUnknownBlockType)dictationBlockForToken:(id)arg1;
- (id)dictationConnection;
- (void)dictationConnection:(id)arg1 didFailRecognitionWithError:(id)arg2;
- (void)dictationConnection:(id)arg1 didFailRecordingWithError:(id)arg2;
- (void)dictationConnection:(id)arg1 didFilterTokensWithFilterState:(id)arg2 forFinalize:(BOOL)arg3;
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
- (void)dictationConnection:(id)arg1 filterState:(id)arg2 processFilteredToken:(id)arg3 forFinalize:(BOOL)arg4;
- (BOOL)dictationConnection:(id)arg1 filterState:(id)arg2 shouldCheckpointAtToken:(id)arg3;
- (void)dictationConnection:(id)arg1 finalizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 secureInput:(BOOL)arg5;
- (void)dictationConnection:(id)arg1 receivedInterpretation:(id)arg2 languageModel:(id)arg3 secureInput:(BOOL)arg4;
- (void)dictationConnection:(id)arg1 updateOptions:(id)arg2;
- (id)dictationConnection:(id)arg1 willFilterTokensWithLanguageModel:(id)arg2 forFinalize:(BOOL)arg3;
- (void)dictationConnectionDidCancel:(id)arg1;
- (void)dictationConnectionDidCancelRecording:(id)arg1;
- (void)dictationConnectionDidEndRecording:(id)arg1;
- (void)dictationConnectionDidFinish:(id)arg1;
- (void)dictationConnectionDidStartRecording:(id)arg1;
- (void)dictationConnectionWillStartRecording:(id)arg1;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (BOOL)dictationEnabled;
- (BOOL)dictationIsModifyingText;
- (void)disableAutorotation;
- (BOOL)disabledDueToTelephonyActivity;
- (void)dismissDictationView:(id)arg1;
- (void)enableProximity;
- (void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)errorAnimationDidFinish;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (void)finishDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 secureInput:(BOOL)arg4;
- (id)init;
- (void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (BOOL)isIgnoringDocumentChanges;
- (BOOL)isRecievingResults;
- (id)language;
- (id)languageCodeForAssistantLanguageCode:(id)arg1;
- (void)markKeyboardDeleteMetricEvent;
- (void)markKeyboardDidReset;
- (void)markKeyboardInputMetricEvent;
- (void)performIgnoringDocumentChanges:(CDUnknownBlockType)arg1;
- (id)postfixTextForInputDelegate:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1;
- (void)preheatIfNecessary;
- (void)presentOptInAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)proximityStateChanged:(id)arg1;
- (void)reenableAutorotation;
- (void)releaseConnection;
- (void)releaseConnectionAfterDictationRequest;
- (void)releaseConnectionAfterStatisticsLogging;
- (void)restartDictationForTypeAndTalk;
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
- (BOOL)shouldPresentOptInAlert;
- (void)startConnection;
- (void)startDictation;
- (void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startHelpMessageDisplay;
- (void)startRecordingLimitTimer;
- (int)state;
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

@end
