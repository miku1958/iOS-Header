//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/BRLTBrailleStateManagerDelegate-Protocol.h>
#import <ScreenReaderOutput/SCROBrailleDisplayCommandDispatcherDelegate-Protocol.h>
#import <ScreenReaderOutput/SCROBrailleDriverDelegate-Protocol.h>

@class NSAttributedString, NSLock, NSMutableArray, NSString, NSTimer, SCROBrailleDisplayInput, SCROBrailleDisplayStatus, SCROBrailleEventDispatcher, SCROBrailleLine;
@protocol SCROBrailleDisplayCommandDispatcherProtocol, SCROBrailleDisplayDelegate, SCROBrailleDriverProtocol, SCROIOElementProtocol;

@interface SCROBrailleDisplay : NSObject <SCROBrailleDisplayCommandDispatcherDelegate, SCROBrailleDriverDelegate, BRLTBrailleStateManagerDelegate>
{
    NSLock *_contentLock;
    id<SCROBrailleDisplayDelegate> _delegate;
    id<SCROBrailleDisplayCommandDispatcherProtocol> _commandDispatcher;
    id<SCROBrailleDriverProtocol> _brailleDriver;
    id<SCROIOElementProtocol> _ioElement;
    SCROBrailleLine *_brailleLine;
    int _outputContractionMode;
    int _inputContractionMode;
    BOOL _outputShowEightDot;
    BOOL _inputShowEightDot;
    BOOL _shouldBatchUpdates;
    BOOL _needsUpdating;
    BOOL _automaticBrailleTranslationEnabled;
    BOOL _wordWrapEnabled;
    BOOL _autoAdvanceEnabled;
    double _autoAdvanceDuration;
    NSString *_driverIdentifier;
    NSString *_driverModelIdentifier;
    long long _mainSize;
    long long _statusSize;
    BOOL _postsKeyboardEvents;
    int _brailleInputMode;
    SCROBrailleDisplayStatus *_status;
    SCROBrailleEventDispatcher *_eventDispatcher;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopTimer *_inputEventTimer;
    struct __CFRunLoopTimer *_blinkerEventTimer;
    BOOL _blinkingEnabled;
    BOOL _inputAllowed;
    BOOL _inputEnabled;
    BOOL _inputPaused;
    double _inputPausedTime;
    NSMutableArray *_keyEventsQueue;
    SCROBrailleDisplayInput *_input;
    BOOL _isValid;
    BOOL _delegateWantsDisplayCallback;
    unsigned int _persistentKeyModifiers;
    CDUnknownBlockType _eventHandled;
    double _brailleKeyDebounceTimeout;
    NSTimer *_autoAdvanceTimer;
}

@property (nonatomic) double autoAdvanceDuration; // @synthesize autoAdvanceDuration=_autoAdvanceDuration;
@property (nonatomic) BOOL autoAdvanceEnabled;
@property (strong, nonatomic) NSTimer *autoAdvanceTimer; // @synthesize autoAdvanceTimer=_autoAdvanceTimer;
@property (nonatomic) BOOL automaticBrailleTranslationEnabled; // @synthesize automaticBrailleTranslationEnabled=_automaticBrailleTranslationEnabled;
@property (nonatomic) double brailleKeyDebounceTimeout; // @synthesize brailleKeyDebounceTimeout=_brailleKeyDebounceTimeout;
@property (readonly, nonatomic) unsigned long long brailleLineGenerationID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delegateWantsDisplayCallback;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSAttributedString *editingString;
@property (copy, nonatomic) CDUnknownBlockType eventHandled; // @synthesize eventHandled=_eventHandled;
@property (readonly, nonatomic) BOOL hasEdits;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL inputAllowed; // @synthesize inputAllowed=_inputAllowed;
@property (nonatomic) int inputContractionMode; // @synthesize inputContractionMode=_inputContractionMode;
@property (nonatomic) BOOL inputShowEightDot; // @synthesize inputShowEightDot=_inputShowEightDot;
@property (readonly, nonatomic) long long lineOffset;
@property (nonatomic) int outputContractionMode; // @synthesize outputContractionMode=_outputContractionMode;
@property (nonatomic) BOOL outputShowEightDot; // @synthesize outputShowEightDot=_outputShowEightDot;
@property (nonatomic) unsigned int persistentKeyModifiers; // @synthesize persistentKeyModifiers=_persistentKeyModifiers;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SCROBrailleLine *testingBrailleLine;
@property (nonatomic) BOOL wordWrapEnabled;

+ (BOOL)brailleDriverClassIsValid:(Class)arg1;
+ (id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;
- (void).cxx_destruct;
- (void)_aggregatedStatusHandler:(id)arg1;
- (BOOL)_attemptLoad;
- (void)_autoAdvancePanHandler:(id)arg1;
- (void)_beginAutoAdvanceIfEnabled;
- (void)_blinkerEventHandler;
- (void)_bulkStatusAttributesHandler:(id)arg1;
- (void)_configurationChangeHandler;
- (void)_configurationChangeNotification:(id)arg1;
- (BOOL)_currentChordShouldExecuteEvenDuringTyping;
- (void)_delayedConfigurationChangeNotification;
- (void)_delayedDisplayLoad;
- (void)_delayedSleepNotification:(id)arg1;
- (void)_delayedUnloadNotification;
- (BOOL)_hasBrailleChord;
- (BOOL)_hasKeyChord;
- (BOOL)_hasPressedBrailleKeys;
- (id)_initWithDriver:(id)arg1 driverIdentifier:(id)arg2 ioElement:(id)arg3 delegate:(id)arg4;
- (void)_inputEventHandler;
- (BOOL)_inputPaused;
- (BOOL)_isMemorizingKeys;
- (id)_newBrailleKeyForCurrentBrailleChord;
- (id)_newBrailleKeyForCurrentKeyChord;
- (id)_newBrailleKeyboardKeyForText:(id)arg1 modifiers:(unsigned int)arg2;
- (void)_panHandler:(id)arg1;
- (void)_pauseInput;
- (void)_processKeyEvents:(id)arg1;
- (void)_replaceRange:(struct _NSRange)arg1 withString:(id)arg2 cursor:(unsigned long long)arg3;
- (void)_runThread;
- (void)_setBatchUpdates:(id)arg1;
- (void)_setBrailleFormatter:(id)arg1;
- (void)_setBrailleFormatterHandler:(id)arg1;
- (void)_setBrailleKeyDebounceTimeoutHandler:(double)arg1;
- (void)_setDelegateWantsDisplayCallbackHandler:(id)arg1;
- (void)_simulateKeypressHandler:(id)arg1;
- (void)_singleLetterInputHandler:(id)arg1;
- (void)_sleepNotification:(id)arg1;
- (void)_startEditingText;
- (void)_statusDisplayHandler:(id)arg1;
- (id)_statusStringWithDictionary:(id)arg1;
- (void)_stopMemorization;
- (void)_textSearchModeHandler:(id)arg1;
- (void)_translateBrailleStringAndPostEvent;
- (void)_translateBrailleToClipboard;
- (void)_unloadHandler;
- (void)_unloadNotification:(id)arg1;
- (void)_unpauseInput;
- (void)_unpauseInputAndProcessKeyEvents;
- (void)_updateDisplay;
- (id)aggregatedStatus;
- (void)beginUpdates;
- (void)brailleDisplayDeletedCharacter:(id)arg1;
- (void)brailleDisplayInsertedCharacter:(id)arg1;
- (void)brailleDisplayStringDidChange:(id)arg1 brailleSelection:(struct _NSRange)arg2;
- (void)brailleDriverDidReceiveInput;
- (id)brailleInputManager;
- (id)configuration;
- (void)dealloc;
- (void)didInsertScriptString:(id)arg1;
- (id)driverIdentifier;
- (id)driverModelIdentifier;
- (void)endUpdates;
- (void)handleCommandDeleteKeyEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandEscapeKeyEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandForwardDeleteKeyEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandMoveLeftForDispatcher:(id)arg1;
- (void)handleCommandMoveRightForDispatcher:(id)arg1;
- (void)handleCommandPanLeftForDispatcher:(id)arg1;
- (void)handleCommandPanRightForDispatcher:(id)arg1;
- (void)handleCommandReturnBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandRouterKeyEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandToggleContractedBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandToggleEightDotBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandTranslateForDispatcher:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)handleUnsupportedKeyEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)insertTypingString:(id)arg1;
- (void)invalidate;
- (id)ioElement;
- (BOOL)isLoaded;
- (BOOL)isValid;
- (id)keyArrayForBrailleStringWithCurrentModifiers:(id)arg1;
- (id)lineDescriptor;
- (long long)mainSize;
- (long long)masterStatusCellIndex;
- (void)panLeft;
- (void)panRight;
- (id)realStatus;
- (void)replaceScriptStringRange:(struct _NSRange)arg1 withScriptString:(id)arg2 cursorLocation:(unsigned long long)arg3;
- (void)requestFlushLine;
- (void)scriptSelectionDidChange:(struct _NSRange)arg1;
- (void)setAggregatedStatus:(id)arg1;
- (void)setBrailleFormatter:(id)arg1;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2;
- (void)setSingleLetterInputIsOn:(BOOL)arg1;
- (void)setStatusAttributesWithMasterCellIndex:(long long)arg1 virtualAlignment:(int)arg2;
- (void)setTextSearchModeOn:(BOOL)arg1;
- (void)setVirtualStatusAlignment:(int)arg1;
- (void)simulateKeypress:(id)arg1;
- (void)sleep;
- (long long)statusSize;
- (int)token;
- (long long)tokenForRouterIndex:(long long)arg1 location:(long long *)arg2 appToken:(id *)arg3;
- (void)translateBrailleToClipboard;
- (void)unpauseInputOnBrailleFormatterChange;
- (void)unsleep;
- (id)virtualStatus;
- (int)virtualStatusAlignment;

@end
