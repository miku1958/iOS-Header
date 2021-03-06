//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol OS_nw_activity;

@interface PARRequest : NSObject <NSSecureCoding>
{
    unsigned long long _queryId;
    BOOL _isClientOnlyExperiment;
    BOOL _isInReservedAllocationForExperiment;
    BOOL _verboseReply;
    BOOL _pretend;
    double _scale;
    NSString *_keyboardInputMode;
    NSString *_experimentNamespaceId;
    NSString *_experimentId;
    NSString *_treatmentId;
    NSString *_clientShortName;
    unsigned long long _triggerEvent;
    NSArray *_queryItems;
    NSDictionary *_headerItems;
    NSObject<OS_nw_activity> *_nwActivity;
    char *_nwActivityToken;
}

@property (readonly, nonatomic) unsigned long long clientQueryId;
@property (copy, nonatomic) NSString *clientShortName; // @synthesize clientShortName=_clientShortName;
@property (copy, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property (copy, nonatomic) NSString *experimentNamespaceId; // @synthesize experimentNamespaceId=_experimentNamespaceId;
@property (copy, nonatomic) NSDictionary *headerItems; // @synthesize headerItems=_headerItems;
@property (nonatomic) BOOL isClientOnlyExperiment; // @synthesize isClientOnlyExperiment=_isClientOnlyExperiment;
@property (nonatomic) BOOL isInReservedAllocationForExperiment; // @synthesize isInReservedAllocationForExperiment=_isInReservedAllocationForExperiment;
@property (copy, nonatomic) NSString *keyboardInputMode; // @synthesize keyboardInputMode=_keyboardInputMode;
@property (strong, nonatomic) NSObject<OS_nw_activity> *nwActivity; // @synthesize nwActivity=_nwActivity;
@property (readonly, nonatomic) unsigned int nwActivityLabel;
@property (readonly, nonatomic) char *nwActivityToken; // @synthesize nwActivityToken=_nwActivityToken;
@property (nonatomic) BOOL pretend; // @synthesize pretend=_pretend;
@property (readonly, nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property (copy, nonatomic) NSArray *queryItems; // @synthesize queryItems=_queryItems;
@property (nonatomic) double scale; // @synthesize scale=_scale;
@property (copy, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property (nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property (nonatomic) BOOL verboseReply; // @synthesize verboseReply=_verboseReply;

+ (id)cardRequestWithURL:(id)arg1;
+ (id)cardRequestWithURL:(id)arg1 queryId:(unsigned long long)arg2;
+ (id)flightRequestForQuery:(id)arg1 date:(id)arg2 appBundleId:(id)arg3;
+ (id)lookupRequestWithString:(id)arg1 queryContext:(id)arg2 domain:(id)arg3 lookupSelectionType:(long long)arg4 appBundleId:(id)arg5;
+ (id)lookupRequestWithString:(id)arg1 queryContext:(id)arg2 domain:(id)arg3 lookupSelectionType:(long long)arg4 appBundleId:(id)arg5 queryId:(unsigned long long)arg6;
+ (id)moreResultsRequestWithURL:(id)arg1;
+ (id)moreResultsRequestWithURL:(id)arg1 queryId:(unsigned long long)arg2;
+ (id)searchReplayRequestWithString:(id)arg1;
+ (id)searchRequestWithEngagedSuggestion:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3;
+ (id)searchRequestWithString:(id)arg1 triggerEvent:(unsigned long long)arg2;
+ (id)searchRequestWithString:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)zeroKeywordRequest;
+ (id)zeroKeywordRequest:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)responseClass;
- (void)setQueryId:(unsigned long long)arg1;

@end

