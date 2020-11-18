//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle
{
    NSString *_label;
}

+ (id)candidateWithPinyinSyllable:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (int)type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPinyinSyllable:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;

@end

