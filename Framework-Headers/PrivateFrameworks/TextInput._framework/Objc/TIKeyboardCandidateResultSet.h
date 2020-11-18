//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, TIKeyboardCandidate, TIKeyboardIntermediateText;

@interface TIKeyboardCandidateResultSet : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _excludedExtensionCandidates;
    NSArray *_candidates;
    unsigned long long _initialSelectedIndex;
    TIKeyboardCandidate *_defaultCandidate;
    NSArray *_sortMethods;
    NSDictionary *_sortMethodGroups;
    NSDictionary *_indexTitles;
    NSDictionary *_showExtensionCandidates;
    NSArray *_initiallyHiddenCandidates;
    unsigned long long _generatedCandidateCount;
    unsigned long long _batchCandidateLocation;
    unsigned long long _selectedHiddenCandidateIndex;
    NSArray *_proactiveTriggers;
    TIKeyboardIntermediateText *_uncommittedText;
    TIKeyboardCandidate *_acceptedCandidate;
}

@property (strong, nonatomic) TIKeyboardCandidate *acceptedCandidate; // @synthesize acceptedCandidate=_acceptedCandidate;
@property (nonatomic) unsigned long long batchCandidateLocation; // @synthesize batchCandidateLocation=_batchCandidateLocation;
@property (strong, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property (copy, nonatomic) TIKeyboardCandidate *defaultCandidate; // @synthesize defaultCandidate=_defaultCandidate;
@property (nonatomic) BOOL excludedExtensionCandidates; // @synthesize excludedExtensionCandidates=_excludedExtensionCandidates;
@property (readonly, nonatomic) TIKeyboardCandidate *firstCandidate;
@property (nonatomic) unsigned long long generatedCandidateCount; // @synthesize generatedCandidateCount=_generatedCandidateCount;
@property (readonly, nonatomic) BOOL hasCandidates;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasOnlyProactiveCandidates;
@property (strong, nonatomic) NSDictionary *indexTitles; // @synthesize indexTitles=_indexTitles;
@property (nonatomic) unsigned long long initialSelectedIndex; // @synthesize initialSelectedIndex=_initialSelectedIndex;
@property (strong, nonatomic) NSArray *initiallyHiddenCandidates; // @synthesize initiallyHiddenCandidates=_initiallyHiddenCandidates;
@property (readonly, nonatomic) BOOL isDummySet;
@property (readonly, nonatomic) NSArray *proactiveTriggers; // @synthesize proactiveTriggers=_proactiveTriggers;
@property (nonatomic) unsigned long long selectedHiddenCandidateIndex; // @synthesize selectedHiddenCandidateIndex=_selectedHiddenCandidateIndex;
@property (strong, nonatomic) NSDictionary *showExtensionCandidates; // @synthesize showExtensionCandidates=_showExtensionCandidates;
@property (strong, nonatomic) NSDictionary *sortMethodGroups; // @synthesize sortMethodGroups=_sortMethodGroups;
@property (strong, nonatomic) NSArray *sortMethods; // @synthesize sortMethods=_sortMethods;
@property (strong, nonatomic) TIKeyboardIntermediateText *uncommittedText; // @synthesize uncommittedText=_uncommittedText;

+ (id)dummySet;
+ (id)setWithCandidates:(id)arg1;
+ (id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9;
+ (id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10;
+ (id)setWithCandidates:(id)arg1 proactiveTriggers:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSubsetOf:(id)arg1;
- (unsigned long long)positionInCandidateList:(id)arg1;
- (id)setByAppendingSet:(id)arg1;

@end

