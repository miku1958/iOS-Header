//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCROBrailleDisplayInput : NSObject
{
    BOOL _prepareToMemorizeNextKey;
    BOOL _requestPrepareToMemorizeNextKey;
    BOOL _memorizeNextKeyImmediately;
    BOOL _willMemorizeNow;
    BOOL _isQuiet;
    BOOL _newDown;
    BOOL _currentBrailleChordContainsSpacebar;
    BOOL _currentBrailleChordBeganWithSpacebar;
    BOOL _currentBrailleChordContainsNonSpacebarChordableKey;
    BOOL _spacebarIsDown;
    BOOL _skipBrailleKeyboardKeyTranslation;
    unsigned int _routerEvent;
    unsigned int _currentHIDCommand;
    unsigned int _currentBrailleModifiers;
    unsigned int _downBrailleModifiers;
    double _quietSince;
    double _busySince;
    double _nextWillMemorizeNotificationTime;
    double _memorizeNextKeyImmediatelyTimeout;
    struct __CFArray *_currentChord;
    struct __CFSet *_downKeys;
    double _lastBrailleChordTypingTime;
    struct __CFArray *_currentBrailleChord;
    struct __CFSet *_downBrailleDots;
    double _lastBrailleChordPosted;
    double _brailleCharExponentialMovingAverage;
    double _brailleTranslationTimeout;
}

@property (nonatomic) double brailleCharExponentialMovingAverage; // @synthesize brailleCharExponentialMovingAverage=_brailleCharExponentialMovingAverage;
@property (nonatomic) double brailleTranslationTimeout; // @synthesize brailleTranslationTimeout=_brailleTranslationTimeout;
@property (nonatomic) double busySince; // @synthesize busySince=_busySince;
@property (nonatomic) struct __CFArray *currentBrailleChord; // @synthesize currentBrailleChord=_currentBrailleChord;
@property (nonatomic) BOOL currentBrailleChordBeganWithSpacebar; // @synthesize currentBrailleChordBeganWithSpacebar=_currentBrailleChordBeganWithSpacebar;
@property (nonatomic) BOOL currentBrailleChordContainsNonSpacebarChordableKey; // @synthesize currentBrailleChordContainsNonSpacebarChordableKey=_currentBrailleChordContainsNonSpacebarChordableKey;
@property (nonatomic) BOOL currentBrailleChordContainsSpacebar; // @synthesize currentBrailleChordContainsSpacebar=_currentBrailleChordContainsSpacebar;
@property (nonatomic) unsigned int currentBrailleModifiers; // @synthesize currentBrailleModifiers=_currentBrailleModifiers;
@property (nonatomic) struct __CFArray *currentChord; // @synthesize currentChord=_currentChord;
@property (nonatomic) unsigned int currentHIDCommand; // @synthesize currentHIDCommand=_currentHIDCommand;
@property (nonatomic) struct __CFSet *downBrailleDots; // @synthesize downBrailleDots=_downBrailleDots;
@property (nonatomic) unsigned int downBrailleModifiers; // @synthesize downBrailleModifiers=_downBrailleModifiers;
@property (nonatomic) struct __CFSet *downKeys; // @synthesize downKeys=_downKeys;
@property (nonatomic) BOOL isQuiet; // @synthesize isQuiet=_isQuiet;
@property (nonatomic) double lastBrailleChordPosted; // @synthesize lastBrailleChordPosted=_lastBrailleChordPosted;
@property (nonatomic) double lastBrailleChordTypingTime; // @synthesize lastBrailleChordTypingTime=_lastBrailleChordTypingTime;
@property (nonatomic) BOOL memorizeNextKeyImmediately; // @synthesize memorizeNextKeyImmediately=_memorizeNextKeyImmediately;
@property (nonatomic) double memorizeNextKeyImmediatelyTimeout; // @synthesize memorizeNextKeyImmediatelyTimeout=_memorizeNextKeyImmediatelyTimeout;
@property (nonatomic) BOOL newDown; // @synthesize newDown=_newDown;
@property (nonatomic) double nextWillMemorizeNotificationTime; // @synthesize nextWillMemorizeNotificationTime=_nextWillMemorizeNotificationTime;
@property (nonatomic) BOOL prepareToMemorizeNextKey; // @synthesize prepareToMemorizeNextKey=_prepareToMemorizeNextKey;
@property (nonatomic) double quietSince; // @synthesize quietSince=_quietSince;
@property (nonatomic) BOOL requestPrepareToMemorizeNextKey; // @synthesize requestPrepareToMemorizeNextKey=_requestPrepareToMemorizeNextKey;
@property (nonatomic) unsigned int routerEvent; // @synthesize routerEvent=_routerEvent;
@property (nonatomic) BOOL skipBrailleKeyboardKeyTranslation; // @synthesize skipBrailleKeyboardKeyTranslation=_skipBrailleKeyboardKeyTranslation;
@property (nonatomic) BOOL spacebarIsDown; // @synthesize spacebarIsDown=_spacebarIsDown;
@property (nonatomic) BOOL willMemorizeNow; // @synthesize willMemorizeNow=_willMemorizeNow;

- (void)dealloc;

@end

