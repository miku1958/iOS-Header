//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EnhancedLoggingState/NSCopying-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSUserDefaults;

@interface ELSSnapshot : NSObject <NSCopying>
{
    unsigned long long _status;
    unsigned long long _consent;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_queue;
    long long _retriesRemaining;
    NSArray *_identifiersToRetry;
    NSDictionary *_metadata;
    NSNumber *_uploadCompletedPercentage;
    NSDictionary *_followUpOptions;
    NSUserDefaults *_defaults;
}

@property (nonatomic) unsigned long long consent; // @synthesize consent=_consent;
@property (strong, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property (readonly, nonatomic) double durationRemaining;
@property (readonly, nonatomic) NSArray *encodedQueue;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (strong, nonatomic) NSDictionary *followUpOptions; // @synthesize followUpOptions=_followUpOptions;
@property (strong, nonatomic) NSArray *identifiersToRetry; // @synthesize identifiersToRetry=_identifiersToRetry;
@property (strong, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (readonly, nonatomic) BOOL needsFollowup;
@property (strong, nonatomic) NSArray *queue; // @synthesize queue=_queue;
@property (nonatomic) long long retriesRemaining; // @synthesize retriesRemaining=_retriesRemaining;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (nonatomic) unsigned long long status; // @synthesize status=_status;
@property (readonly, nonatomic) double totalDuration;
@property (strong, nonatomic) NSNumber *uploadCompletedPercentage; // @synthesize uploadCompletedPercentage=_uploadCompletedPercentage;

+ (id)consentToString:(unsigned long long)arg1;
+ (id)statusToString:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)JSONObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)decodeQueue:(id)arg1;
- (id)description;
- (id)dictionaryRepresentationPretty:(BOOL)arg1;
- (id)init;
- (void)refreshConsent;
- (void)refreshDates;
- (void)refreshFollowUpOptions;
- (void)refreshIdentifiersToRetry;
- (void)refreshKeyPaths:(id)arg1;
- (void)refreshMetadata;
- (void)refreshQueue;
- (void)refreshRetriesRemaining;
- (void)refreshStatus;
- (void)refreshUploadCompletedPercentage;

@end

