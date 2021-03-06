//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBCallMetrics, _INPBContactValue, _INPBDateTime, _INPBInteger;

@protocol _INPBCallRecordValue <NSObject>

@property (nonatomic) int callCapability;
@property (strong, nonatomic) _INPBCallMetrics *callMetrics;
@property (nonatomic) int callType;
@property (strong, nonatomic) _INPBContactValue *caller;
@property (strong, nonatomic) _INPBDateTime *dateCreated;
@property (nonatomic) BOOL hasCallCapability;
@property (readonly, nonatomic) BOOL hasCallMetrics;
@property (nonatomic) BOOL hasCallType;
@property (readonly, nonatomic) BOOL hasCaller;
@property (readonly, nonatomic) BOOL hasDateCreated;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasNumberOfCalls;
@property (nonatomic) BOOL hasPreferredCallProvider;
@property (readonly, nonatomic) BOOL hasProviderId;
@property (nonatomic) BOOL hasUnseen;
@property (copy, nonatomic) NSString *identifier;
@property (strong, nonatomic) _INPBInteger *numberOfCalls;
@property (nonatomic) int preferredCallProvider;
@property (copy, nonatomic) NSString *providerId;
@property (nonatomic) BOOL unseen;

- (int)StringAsCallCapability:(NSString *)arg1;
- (int)StringAsCallType:(NSString *)arg1;
- (int)StringAsPreferredCallProvider:(NSString *)arg1;
- (NSString *)callCapabilityAsString:(int)arg1;
- (NSString *)callTypeAsString:(int)arg1;
- (NSString *)preferredCallProviderAsString:(int)arg1;
@end

