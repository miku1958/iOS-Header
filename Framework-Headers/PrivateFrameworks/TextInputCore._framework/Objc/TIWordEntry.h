//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIUserAction.h>

@class NSArray, NSMutableArray, NSString, TICursorEvent, TIKeyboardCandidate, TIKeyboardInput;

@interface TIWordEntry : TIUserAction
{
    BOOL _includesCursorEdits;
    BOOL _includesOrientationChange;
    BOOL _isRetrocorrection;
    BOOL _isMultilingual;
    BOOL _isOOV;
    BOOL _isContinuousPathCompletion;
    BOOL _isPunctuationEntryFollowingAWord;
    int _wordEntryType;
    int _wordAlignmentConf;
    int _touchAlignmentConf;
    NSString *_acceptedString;
    NSString *_originalAcceptedString;
    NSString *_orientation;
    TIKeyboardInput *_inputTriggeredTextAccepted;
    long long _layoutID;
    NSMutableArray *_allKeyboardInputsM;
    NSMutableArray *_allTouchesM;
    NSMutableArray *_candidatesOfferedM;
    NSMutableArray *_touchLayoutsM;
    TIKeyboardCandidate *_acceptedCandidate;
    TIKeyboardCandidate *_originalCandidate;
    NSString *_inputStem;
    NSString *_inputContext;
    TIWordEntry *_editedEntry;
    TICursorEvent *_editAction;
    NSMutableArray *_allEdits;
    unsigned long long _sessionIndex;
    unsigned long long _alignmentConflicts;
    long long _candidateIndex;
}

@property (strong, nonatomic) TIKeyboardCandidate *acceptedCandidate; // @synthesize acceptedCandidate=_acceptedCandidate;
@property (copy, nonatomic) NSString *acceptedString; // @synthesize acceptedString=_acceptedString;
@property (nonatomic) unsigned long long alignmentConflicts; // @synthesize alignmentConflicts=_alignmentConflicts;
@property (strong, nonatomic) NSMutableArray *allEdits; // @synthesize allEdits=_allEdits;
@property (readonly, nonatomic) NSArray *allKeyboardInputs;
@property (strong, nonatomic) NSMutableArray *allKeyboardInputsM; // @synthesize allKeyboardInputsM=_allKeyboardInputsM;
@property (readonly, nonatomic) NSArray *allTouches;
@property (strong, nonatomic) NSMutableArray *allTouchesM; // @synthesize allTouchesM=_allTouchesM;
@property long long candidateIndex; // @synthesize candidateIndex=_candidateIndex;
@property (readonly, nonatomic) NSArray *candidatesOffered;
@property (strong, nonatomic) NSMutableArray *candidatesOfferedM; // @synthesize candidatesOfferedM=_candidatesOfferedM;
@property (strong, nonatomic) TICursorEvent *editAction; // @synthesize editAction=_editAction;
@property (strong, nonatomic) TIWordEntry *editedEntry; // @synthesize editedEntry=_editedEntry;
@property (nonatomic) BOOL includesCursorEdits; // @synthesize includesCursorEdits=_includesCursorEdits;
@property (nonatomic) BOOL includesOrientationChange; // @synthesize includesOrientationChange=_includesOrientationChange;
@property (copy, nonatomic) NSString *inputContext; // @synthesize inputContext=_inputContext;
@property (copy, nonatomic) NSString *inputStem; // @synthesize inputStem=_inputStem;
@property (strong, nonatomic) TIKeyboardInput *inputTriggeredTextAccepted; // @synthesize inputTriggeredTextAccepted=_inputTriggeredTextAccepted;
@property (nonatomic) BOOL isContinuousPathCompletion; // @synthesize isContinuousPathCompletion=_isContinuousPathCompletion;
@property (nonatomic) BOOL isMultilingual; // @synthesize isMultilingual=_isMultilingual;
@property (nonatomic) BOOL isOOV; // @synthesize isOOV=_isOOV;
@property (nonatomic) BOOL isPunctuationEntryFollowingAWord; // @synthesize isPunctuationEntryFollowingAWord=_isPunctuationEntryFollowingAWord;
@property (nonatomic) BOOL isRetrocorrection; // @synthesize isRetrocorrection=_isRetrocorrection;
@property long long layoutID; // @synthesize layoutID=_layoutID;
@property (copy, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property (copy, nonatomic) NSString *originalAcceptedString; // @synthesize originalAcceptedString=_originalAcceptedString;
@property (strong, nonatomic) TIKeyboardCandidate *originalCandidate; // @synthesize originalCandidate=_originalCandidate;
@property (nonatomic) unsigned long long sessionIndex; // @synthesize sessionIndex=_sessionIndex;
@property (nonatomic) int touchAlignmentConf; // @synthesize touchAlignmentConf=_touchAlignmentConf;
@property (readonly, nonatomic) NSArray *touchLayouts;
@property (strong, nonatomic) NSMutableArray *touchLayoutsM; // @synthesize touchLayoutsM=_touchLayoutsM;
@property (nonatomic) int wordAlignmentConf; // @synthesize wordAlignmentConf=_wordAlignmentConf;
@property (nonatomic) int wordEntryType; // @synthesize wordEntryType=_wordEntryType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addCandidateOffered:(id)arg1;
- (void)addKeyInput:(id)arg1;
- (void)addTouchEvent:(id)arg1 withLayoutId:(unsigned long long)arg2;
- (id)description;
- (id)descriptionWithContext;
- (id)documentContextBeforeInput;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEntryFollowingANewLine;

@end
