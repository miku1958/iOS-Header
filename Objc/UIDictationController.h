//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/AFDictationDelegate-Protocol.h>
#import <UIKit/_UITouchPhaseChangeDelegate-Protocol.h>

@class AFDictationConnection, AFDictationOptions, AFPreferences, CADisplayLink, NSArray, NSMutableArray, NSString, NSTimer, UIAlertView, UIDictationStreamingOperations, UIKeyboardInputMode, UIWindow, _UIDictationPrivacySheetController;

__attribute__((visibility("hidden")))
@interface UIDictationController : NSObject <AFDictationDelegate, _UITouchPhaseChangeDelegate>
{
    AFDictationConnection *_connection;
    AFDictationOptions *_options;
    AFPreferences *_preferences;
    NSArray *_availableLanguages;
    NSTimer *_recordingLimitTimer;
    void *_callCenterFrameworkFileHandle;
    id _callCenter;
    void *_facetimeCallFrameworkFileHandle;
    id _facetimeCallManager;
    BOOL _wasDisabledDueToTelephonyActivity;
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
    BOOL dictationStartedFromGesture;
    BOOL _performingStreamingEditingOperation;
    BOOL _discardNextHypothesis;
    BOOL _hasPreheated;
    BOOL _wantsAvailabilityMonitoringWhenAppActive;
    NSMutableArray *_pendingEdits;
    NSString *_previousHypothesis;
    NSString *_lastHypothesis;
    NSString *_targetHypothesis;
    UIWindow *_dictationPresenterWindow;
    _UIDictationPrivacySheetController *_dictationPrivacySheetController;
    UIKeyboardInputMode *_inputModeThatInvokedDictation;
    struct _NSRange _insertionRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIWindow *dictationPresenterWindow; // @synthesize dictationPresenterWindow=_dictationPresenterWindow;
@property (strong, nonatomic) _UIDictationPrivacySheetController *dictationPrivacySheetController; // @synthesize dictationPrivacySheetController=_dictationPrivacySheetController;
@property (nonatomic) BOOL dictationStartedFromGesture; // @synthesize dictationStartedFromGesture;
@property (nonatomic) BOOL discardNextHypothesis; // @synthesize discardNextHypothesis=_discardNextHypothesis;
@property (nonatomic) BOOL hasPreheated; // @synthesize hasPreheated=_hasPreheated;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIKeyboardInputMode *inputModeThatInvokedDictation; // @synthesize inputModeThatInvokedDictation=_inputModeThatInvokedDictation;
@property (nonatomic) struct _NSRange insertionRange; // @synthesize insertionRange=_insertionRange;
@property (copy, nonatomic) NSString *lastHypothesis; // @synthesize lastHypothesis=_lastHypothesis;
@property (strong, nonatomic) NSMutableArray *pendingEdits; // @synthesize pendingEdits=_pendingEdits;
@property (nonatomic) BOOL performingStreamingEditingOperation; // @synthesize performingStreamingEditingOperation=_performingStreamingEditingOperation;
@property (copy, nonatomic) NSString *previousHypothesis; // @synthesize previousHypothesis=_previousHypothesis;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetHypothesis; // @synthesize targetHypothesis=_targetHypothesis;
@property (nonatomic) BOOL wantsAvailabilityMonitoringWhenAppActive; // @synthesize wantsAvailabilityMonitoringWhenAppActive=_wantsAvailabilityMonitoringWhenAppActive;

+ (id)activeConnection;
+ (id)activeInstance;
+ (void)applicationDidBecomeActive;
+ (void)applicationDidChangeStatusBarFrame;
+ (void)applicationDidEnterBackgroundNotification;
+ (void)applicationWillResignActive;
+ (id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (BOOL)dictationIsFunctional;
+ (void)didBeginEditingInTextView:(id)arg1;
+ (void)didOneFingerTapInTextView:(id)arg1;
+ (void)disableGestureHandler;
+ (void)enableGestureHandlerIfNecessary;
+ (BOOL)fetchCurrentInputModeSupportsDictation;
+ (id)interpretation:(id)arg1 forPhraseIndex:(unsigned long long)arg2 isShiftLocked:(BOOL)arg3 autocapitalizationType:(long long)arg4;
+ (BOOL)isRunning;
+ (BOOL)isTextViewOnStarkScreen:(id)arg1;
+ (void)keyboardDidSetInputMode;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
+ (void)logCorrectionStatisticsForDelegate:(id)arg1;
+ (void)logDictationString:(id)arg1;
+ (id)metadataDictionaryForCorrectionIdentifier:(id)arg1;
+ (BOOL)openAssistantFrameworkIfNecessary;
+ (void)poppedLastStreamingOperation;
+ (id)serializedDictationPhrases:(id)arg1;
+ (id)serializedDictationPhrases:(id)arg1 fromKeyboard:(BOOL)arg2 transform:(struct __CFString *)arg3;
+ (id)serializedDictationPhrasesFromTokenMatrix:(id)arg1 fromKeyboard:(BOOL)arg2 transform:(struct __CFString *)arg3;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2 fromKeyboard:(BOOL)arg3 options:(id)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2 ranges:(id *)arg3;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2 ranges:(id *)arg3 options:(id)arg4;
+ (double)serverManualEndpointingThreshold;
+ (BOOL)setupForOpeningConnections;
+ (BOOL)setupForPhraseSerialization;
+ (id)sharedInstance;
+ (BOOL)shouldDeleteBackwardInInputDelegate:(id)arg1;
+ (BOOL)shouldEnableGestureHandler;
+ (BOOL)shouldHideCursorForTextView:(id)arg1;
+ (BOOL)shouldHideSelectionUIForTextView:(id)arg1;
+ (BOOL)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
+ (id)singleLineResultForResult:(id)arg1;
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
- (void)_beginEnableDictationPrompt;
- (id)_connection;
- (void)_displayLinkFired:(id)arg1;
- (void)_endEnableDictationPromptAnimated:(BOOL)arg1;
- (id)_getBestHypothesisRangeGivenHintRange:(id)arg1 inputDelegate:(id)arg2 hypothesisRange:(struct _NSRange *)arg3 documentTextInRange:(id *)arg4;
- (id)_hypothesisRangeFromSelectionRange:(id)arg1 inputDelegate:(id)arg2;
- (void)_presentOptInAlert;
- (void)_presentPrivacySheet;
- (id)_rangeByExtendingRange:(id)arg1 backward:(long long)arg2 forward:(long long)arg3 inputDelegate:(id)arg4;
- (void)_restartDictation;
- (void)_runFinalizeOperation;
- (void)_setFinalResultHandler:(CDUnknownBlockType)arg1;
- (BOOL)_shouldDeleteBackwardInInputDelegate:(id)arg1;
- (BOOL)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
- (void)_startStreamingAnimations;
- (void)_stopStreamingAnimation;
- (void)_touchPhaseChangedForTouch:(id)arg1;
- (void)_updateFromSelectedTextRange:(id)arg1 withNewHypothesis:(id)arg2;
- (id)assistantCompatibleLanguageCodeForInputMode:(id)arg1;
- (float)audioLevel;
- (void)cancelDictation;
- (void)cancelDictationForTextStoreChangesInResponder:(id)arg1;
- (void)cancelRecordingLimitTimer;
- (void)completeStartConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)completeStartConnectionForReason:(long long)arg1;
- (id)connection;
- (id)connectionForStatisticsLogging;
- (void)dealloc;
- (void)delayedTelephonyCheckingSetup;
- (void)dictationConnection:(id)arg1 didHypothesizePhrases:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (BOOL)dictationEnabled;
- (BOOL)dictationIsModifyingText;
- (id)dictationPhraseArrayFromDictationResult:(id)arg1;
- (void)disableAutorotation;
- (BOOL)disabledDueToTelephonyActivity;
- (void)dismissDictationView:(id)arg1;
- (void)enableProximity;
- (void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)errorAnimationDidFinish;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (void)finishDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3;
- (id)init;
- (void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (BOOL)isIgnoringDocumentChanges;
- (BOOL)isRecievingResults;
- (id)language;
- (id)languageCodeForAssistantLanguageCode:(id)arg1;
- (BOOL)needsLeadingSpaceForPhrases:(id)arg1;
- (BOOL)needsTrailingSpaceForPhrases:(id)arg1;
- (void)performIgnoringDocumentChanges:(CDUnknownBlockType)arg1;
- (id)postfixTextForInputDelegate:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1;
- (void)preheatIfNecessary;
- (void)proximityStateChanged:(id)arg1;
- (void)reenableAutorotation;
- (void)releaseConnection;
- (void)releaseConnectionAfterDictationRequest;
- (void)releaseConnectionAfterStatisticsLogging;
- (void)restartDictationForTypeAndTalk;
- (struct __CFString *)resultTransformForLanguageModel:(id)arg1;
- (id)resultWithTrailingSpace:(id)arg1;
- (id)selectedTextForInputDelegate:(id)arg1;
- (void)setDictationInputmode;
- (void)setLanguage:(id)arg1;
- (void)setState:(int)arg1;
- (void)setupConnectionOptions;
- (void)setupForDictationStartForReason:(long long)arg1;
- (void)setupForStreamingDictationStart;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startConnectionForReason:(long long)arg1;
- (void)startDictation;
- (void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationForReason:(long long)arg1;
- (void)startRecordingLimitTimer;
- (int)state;
- (void)stopDictation;
- (id)streamingOperations;
- (id)supportedDictationLanguages:(CDUnknownBlockType)arg1;
- (BOOL)supportsInputMode:(id)arg1 error:(id *)arg2;
- (void)switchToDictationInputMode;
- (void)switchToDictationInputModeWithTouch:(id)arg1;
- (BOOL)wasDisabledDueToTelephonyActivity;

@end

