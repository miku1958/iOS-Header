//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@interface TIHandwritingCandidate : TIKeyboardCandidateSingle
{
    unsigned long long _uniqueID;
    unsigned long long _completionUniqueID;
}

@property (readonly, nonatomic) unsigned long long completionUniqueID; // @synthesize completionUniqueID=_completionUniqueID;
@property (readonly, nonatomic) unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;

+ (BOOL)supportsSecureCoding;
+ (int)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 uniqueID:(unsigned long long)arg3 completionUniqueID:(unsigned long long)arg4;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCompletionCandidate;
- (BOOL)isInlineCompletionCandidate;

@end

