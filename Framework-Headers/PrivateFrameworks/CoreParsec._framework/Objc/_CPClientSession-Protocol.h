//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPFeedbackPayload, _CPUsageEnvelope, _CPUsageSinceLookback;

@protocol _CPClientSession <NSObject>

@property (copy, nonatomic) NSString *agent;
@property (strong, nonatomic) _CPUsageEnvelope *cohortsFeedback;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL duEnabled;
@property (copy, nonatomic) NSArray *feedbacks;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSData *jsonFeedback;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *parsecDeveloperID;
@property (nonatomic) int previousSessionEndReason;
@property (nonatomic) BOOL removeTimestamps;
@property (copy, nonatomic) NSDictionary *resourceVersions;
@property (nonatomic) double sessionStart;
@property (strong, nonatomic) _CPUsageSinceLookback *usageSinceLookback;
@property (copy, nonatomic) NSString *userGuidString;

- (void)addFeedback:(_CPFeedbackPayload *)arg1;
- (void)clearFeedback;
- (_CPFeedbackPayload *)feedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackCount;
- (BOOL)getResourceVersions:(id *)arg1 forKey:(NSString *)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (void)setResourceVersions:(NSString *)arg1 forKey:(NSString *)arg2;
@end
