//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, TIKeyboardCandidate;

@interface TIWordSearchCandidateResultSet : NSObject <NSCopying>
{
    BOOL _empty;
    NSMutableArray *_mutableCandidates;
    NSMutableDictionary *_mutableCandidateRefsDictionary;
    NSArray *_disambiguationCandidates;
    unsigned long long _selectedDisambiguationCandidateIndex;
    TIKeyboardCandidate *_candidateAfterSegmentBreak;
    NSArray *_proactiveCandidates;
    NSArray *_autoconvertedCandidates;
    NSString *_autoconvertedCandidateString;
    NSString *_autoconvertedInputString;
    NSMutableArray *_mutableProactiveTriggers;
}

@property (strong, nonatomic) NSString *autoconvertedCandidateString; // @synthesize autoconvertedCandidateString=_autoconvertedCandidateString;
@property (copy, nonatomic) NSArray *autoconvertedCandidates; // @synthesize autoconvertedCandidates=_autoconvertedCandidates;
@property (strong, nonatomic) NSString *autoconvertedInputString; // @synthesize autoconvertedInputString=_autoconvertedInputString;
@property (copy, nonatomic) TIKeyboardCandidate *candidateAfterSegmentBreak; // @synthesize candidateAfterSegmentBreak=_candidateAfterSegmentBreak;
@property (readonly, nonatomic) NSDictionary *candidateRefsDictionary;
@property (readonly, nonatomic) NSArray *candidates;
@property (copy, nonatomic) NSArray *disambiguationCandidates; // @synthesize disambiguationCandidates=_disambiguationCandidates;
@property (nonatomic, getter=isEmpty) BOOL empty; // @synthesize empty=_empty;
@property (strong, nonatomic) NSMutableDictionary *mutableCandidateRefsDictionary; // @synthesize mutableCandidateRefsDictionary=_mutableCandidateRefsDictionary;
@property (strong, nonatomic) NSMutableArray *mutableCandidates; // @synthesize mutableCandidates=_mutableCandidates;
@property (readonly, nonatomic) NSMutableArray *mutableProactiveTriggers; // @synthesize mutableProactiveTriggers=_mutableProactiveTriggers;
@property (strong, nonatomic) NSArray *proactiveCandidates; // @synthesize proactiveCandidates=_proactiveCandidates;
@property (readonly, nonatomic) NSArray *proactiveTriggers;
@property (nonatomic) unsigned long long selectedDisambiguationCandidateIndex; // @synthesize selectedDisambiguationCandidateIndex=_selectedDisambiguationCandidateIndex;

+ (id)emptySet;
- (void).cxx_destruct;
- (void)addCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (void)addMecabraCandidate:(id)arg1 mecabraCandidateRef:(void *)arg2;
- (void)addMecabraFacemarkCandidate:(void *)arg1 forInput:(id)arg2;
- (void)addMecabraProactiveCandidate:(void *)arg1 triggerSourceType:(unsigned char)arg2;
- (void)addProactiveTrigger:(id)arg1;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 deleteCount:(unsigned long long)arg4;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5 annotation:(id)arg6;
- (void)addSyntheticMecabraProactiveCandidate:(id)arg1 triggerSourceType:(unsigned char)arg2;
- (void)clearProactiveTriggers;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 disambiguationCandidates:(id)arg3 selectedDisambiguationCandidateIndex:(unsigned long long)arg4;
- (void)insertMecabraCandidate:(id)arg1 mecabraCandidateRef:(void *)arg2 atIndex:(unsigned long long)arg3;
- (void)insertSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)moveCandidate:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)setAutoconvertedMecabraCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;

@end
