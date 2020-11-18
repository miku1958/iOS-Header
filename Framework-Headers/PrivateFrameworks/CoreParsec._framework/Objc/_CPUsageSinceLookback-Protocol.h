//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, _CPDeviceContext;

@protocol _CPUsageSinceLookback <NSObject>

@property (nonatomic) int activeDaysInCollectionPeriod;
@property (nonatomic) int client;
@property (nonatomic) long long collectionEndTimestamp;
@property (nonatomic) long long collectionStartTimestamp;
@property (nonatomic) int configuredLookbackTimeInDays;
@property (strong, nonatomic) _CPDeviceContext *context;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int totalEngagements;
@property (nonatomic) int totalUsagesInCollectionPeriod;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
