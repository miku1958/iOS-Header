//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChatService/BCSMetric.h>

#import <BusinessChatService/BCSCoreAnalyticsEventDescribing-Protocol.h>
#import <BusinessChatService/BCSItemIdentifierProviding-Protocol.h>
#import <BusinessChatService/BCSResolutionMetricProtocol-Protocol.h>

@class BCSFlagMeasurement, BCSTimingMeasurement, NSDictionary, NSString;
@protocol BCSItemIdentifying;

@interface BCSItemResolutionMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSItemIdentifierProviding, BCSResolutionMetricProtocol>
{
    BOOL errorEncountered;
    BCSFlagMeasurement *cacheHitMeasurement;
    BCSTimingMeasurement *timingMeasurement;
}

@property (strong, nonatomic) BCSFlagMeasurement *cacheHitMeasurement; // @synthesize cacheHitMeasurement;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL errorEncountered; // @synthesize errorEncountered;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<BCSItemIdentifying> itemIdentifier;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (strong, nonatomic) BCSTimingMeasurement *timingMeasurement; // @synthesize timingMeasurement;

+ (id)metricForItemIdentifier:(id)arg1 postProcessingMetricHandlers:(id)arg2;
- (void).cxx_destruct;

@end

