//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TILabeledKeyboardCandidate : TIKeyboardCandidateSingle
{
    long long _transliterationType;
    BOOL _transliterationCandidate;
    NSString *_label;
}

@property (copy, nonatomic) NSString *label; // @synthesize label=_label;

+ (BOOL)supportsSecureCoding;
+ (int)type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 label:(id)arg3;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 label:(id)arg3 transliterationType:(long long)arg4;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTransliterationCandidate;

@end

