//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString, TIProactiveTrigger;

@interface TIZephyrCandidate : TIKeyboardCandidateSingle
{
    BOOL _isFromPhraseDictionary;
    BOOL _isFromTextChecker;
    BOOL _isSecureContentCandidate;
    BOOL _isSendCurrentLocation;
    BOOL _fromBundleIdWhitelistedForMetrics;
    BOOL _targetBundleIdWhitelistedForMetrics;
    unsigned int _usageTrackingMask;
    unsigned long long _wordOriginFeedbackID;
    TIProactiveTrigger *_proactiveTrigger;
    NSString *_fromBundleId;
    unsigned long long _ageForConnectionsMetrics;
    NSString *_label;
}

@property (nonatomic) unsigned long long ageForConnectionsMetrics; // @synthesize ageForConnectionsMetrics=_ageForConnectionsMetrics;
@property (copy, nonatomic) NSString *fromBundleId; // @synthesize fromBundleId=_fromBundleId;
@property (nonatomic) BOOL fromBundleIdWhitelistedForMetrics; // @synthesize fromBundleIdWhitelistedForMetrics=_fromBundleIdWhitelistedForMetrics;
@property (nonatomic) BOOL isFromPhraseDictionary; // @synthesize isFromPhraseDictionary=_isFromPhraseDictionary;
@property (nonatomic) BOOL isFromTextChecker; // @synthesize isFromTextChecker=_isFromTextChecker;
@property (nonatomic) BOOL isSendCurrentLocation; // @synthesize isSendCurrentLocation=_isSendCurrentLocation;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) BOOL targetBundleIdWhitelistedForMetrics; // @synthesize targetBundleIdWhitelistedForMetrics=_targetBundleIdWhitelistedForMetrics;

+ (BOOL)supportsSecureCoding;
+ (int)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned int)arg4 secureContentCandidate:(BOOL)arg5 proactiveTrigger:(id)arg6;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAutocorrection;
- (BOOL)isSecureContentCandidate;
- (id)proactiveTrigger;
- (unsigned int)usageTrackingMask;
- (unsigned long long)wordOriginFeedbackID;

@end
