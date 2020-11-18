//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PRCandidateList : NSObject
{
    NSMutableArray *_candidates;
    unsigned long long _maxCount;
}

- (void)addCandidate:(id)arg1;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 errorType:(unsigned long long)arg3;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 errorType:(unsigned long long)arg4;
- (void)addCandidateWithString:(id)arg1 errorType:(unsigned long long)arg2;
- (void)addReplacementCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedCharacter:(unsigned short)arg4 actualCharacter:(unsigned short)arg5;
- (void)addTranspositionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedFirstCharacter:(unsigned short)arg4 intendedSecondCharacter:(unsigned short)arg5;
- (id)candidateStrings;
- (id)candidates;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)initWithMaxCount:(unsigned long long)arg1;
- (BOOL)isFull;
- (unsigned long long)maxCount;

@end

