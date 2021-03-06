//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardCandidate.h>

@class NSString;

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate
{
    BOOL _extensionCandidate;
    NSString *_candidate;
    NSString *_input;
    long long *_cursorMovement;
}

@property (copy, nonatomic) NSString *candidate; // @synthesize candidate=_candidate;
@property (nonatomic) long long *cursorMovement; // @synthesize cursorMovement=_cursorMovement;
@property (nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate; // @synthesize extensionCandidate=_extensionCandidate;
@property (copy, nonatomic) NSString *input; // @synthesize input=_input;

+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 cursorMovement:(long long)arg3;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 customInfoType:(unsigned long long)arg3;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(BOOL)arg3;
+ (id)candidateWithUnchangedInput:(id)arg1;
+ (id)secureCandidateForInput:(id)arg1 slotID:(unsigned int)arg2;
+ (id)secureCandidateForInput:(id)arg1 slotID:(unsigned int)arg2 customInfoType:(unsigned long long)arg3;
+ (BOOL)supportsSecureCoding;
+ (int)type;
- (void).cxx_destruct;
- (id)candidateByReplacingWithCandidate:(id)arg1;
- (id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(BOOL)arg3;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseCandidate:(id)arg1;
- (id)initWithUnchangedInput:(id)arg1;

@end

