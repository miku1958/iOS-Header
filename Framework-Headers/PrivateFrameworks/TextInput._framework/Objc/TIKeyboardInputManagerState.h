//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString, TICharacterSetDescription, TIKeyEventMap, TIKeyboardBehaviors, TIKeyboardCandidate;

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding>
{
    TIKeyboardBehaviors *_keyboardBehaviors;
    union {
        long long integerValue;
        struct {
            unsigned int canHandleKeyHitTest:1;
            unsigned int ignoresDeadKeys:1;
            unsigned int shouldExtendPriorWord:1;
            unsigned int suppliesCompletions:1;
            unsigned int supportsNumberKeySelection:1;
            unsigned int supportsSetPhraseBoundary:1;
            unsigned int suppressCompletionsForFieldEditor:1;
            unsigned int usesAutoDeleteWord:1;
            unsigned int usesCandidateSelection:1;
            unsigned int commitsAcceptedCandidate:1;
            unsigned int nextInputWouldStartSentence:1;
            unsigned int inputStringIsExemptFromChecker:1;
            unsigned int suppressPlaceholderCandidate:1;
            unsigned int usesAutocorrectionLists:1;
        } fields;
    } _mask;
    BOOL _shouldAddModifierSymbolsToWordCharacters;
    TIKeyboardCandidate *_autocorrectionRecordForInputString;
    NSString *_wordSeparator;
    unsigned long long _inputCount;
    unsigned long long _inputIndex;
    NSString *_inputString;
    TIKeyEventMap *_keyEventMap;
    NSString *_replacementForDoubleSpace;
    NSString *_shadowTyping;
    unsigned long long _initialCandidateBatchCount;
    TICharacterSetDescription *_wordCharacters;
    TICharacterSetDescription *_shortcutCompletions;
    TICharacterSetDescription *_inputsPreventingAcceptSelectedCandidate;
    TICharacterSetDescription *_inputsToReject;
    TICharacterSetDescription *_terminatorsPreventingAutocorrection;
    TICharacterSetDescription *_terminatorsDeletingAutospace;
    NSString *_searchStringForMarkedText;
}

@property (strong, nonatomic) TIKeyboardCandidate *autocorrectionRecordForInputString; // @synthesize autocorrectionRecordForInputString=_autocorrectionRecordForInputString;
@property (nonatomic) BOOL canHandleKeyHitTest;
@property (nonatomic) BOOL commitsAcceptedCandidate;
@property (nonatomic) BOOL ignoresDeadKeys;
@property (nonatomic) unsigned long long initialCandidateBatchCount; // @synthesize initialCandidateBatchCount=_initialCandidateBatchCount;
@property (nonatomic) unsigned long long inputCount; // @synthesize inputCount=_inputCount;
@property (nonatomic) unsigned long long inputIndex; // @synthesize inputIndex=_inputIndex;
@property (copy, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
@property (nonatomic) BOOL inputStringIsExemptFromChecker;
@property (copy, nonatomic) TICharacterSetDescription *inputsPreventingAcceptSelectedCandidate; // @synthesize inputsPreventingAcceptSelectedCandidate=_inputsPreventingAcceptSelectedCandidate;
@property (copy, nonatomic) TICharacterSetDescription *inputsToReject; // @synthesize inputsToReject=_inputsToReject;
@property (strong, nonatomic) TIKeyEventMap *keyEventMap; // @synthesize keyEventMap=_keyEventMap;
@property (strong, nonatomic) TIKeyboardBehaviors *keyboardBehaviors; // @synthesize keyboardBehaviors=_keyboardBehaviors;
@property (nonatomic) BOOL nextInputWouldStartSentence;
@property (copy, nonatomic) NSString *replacementForDoubleSpace; // @synthesize replacementForDoubleSpace=_replacementForDoubleSpace;
@property (copy, nonatomic) NSString *searchStringForMarkedText; // @synthesize searchStringForMarkedText=_searchStringForMarkedText;
@property (copy, nonatomic) NSString *shadowTyping; // @synthesize shadowTyping=_shadowTyping;
@property (copy, nonatomic) TICharacterSetDescription *shortcutCompletions; // @synthesize shortcutCompletions=_shortcutCompletions;
@property (nonatomic) BOOL shouldAddModifierSymbolsToWordCharacters; // @synthesize shouldAddModifierSymbolsToWordCharacters=_shouldAddModifierSymbolsToWordCharacters;
@property (nonatomic) BOOL shouldExtendPriorWord;
@property (nonatomic) BOOL suppliesCompletions;
@property (nonatomic) BOOL supportsNumberKeySelection;
@property (nonatomic) BOOL supportsSetPhraseBoundary;
@property (nonatomic) BOOL suppressCompletionsForFieldEditor;
@property (nonatomic) BOOL suppressPlaceholderCandidate;
@property (copy, nonatomic) TICharacterSetDescription *terminatorsDeletingAutospace; // @synthesize terminatorsDeletingAutospace=_terminatorsDeletingAutospace;
@property (copy, nonatomic) TICharacterSetDescription *terminatorsPreventingAutocorrection; // @synthesize terminatorsPreventingAutocorrection=_terminatorsPreventingAutocorrection;
@property (nonatomic) BOOL usesAutoDeleteWord;
@property (nonatomic) BOOL usesAutocorrectionLists;
@property (nonatomic) BOOL usesCandidateSelection;
@property (copy, nonatomic) TICharacterSetDescription *wordCharacters; // @synthesize wordCharacters=_wordCharacters;
@property (copy, nonatomic) NSString *wordSeparator; // @synthesize wordSeparator=_wordSeparator;

+ (BOOL)supportsSecureCoding;
- (BOOL)acceptInputString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)inputStringAcceptsCurrentCandidateIfSelected:(id)arg1;
- (BOOL)shouldDeleteAutospaceBeforeTerminator:(id)arg1;
- (BOOL)shouldSuppressAutocorrectionWithTerminator:(id)arg1;
- (BOOL)stringEndsWord:(id)arg1;

@end

