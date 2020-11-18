//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, _CPDeviceContext, _CPImagesUsagePropensity, _CPNewsUsagePropensity, _CPSafariUsagePropensity, _CPSpotlightUsagePropensity, _CPUsageSinceLookback;

@protocol _CPUsageEnvelope <NSObject>

@property (nonatomic) long long collectionEndTimestamp;
@property (nonatomic) long long collectionStartTimestamp;
@property (nonatomic) int configuredLookbackTimeInDays;
@property (strong, nonatomic) _CPDeviceContext *context;
@property (strong, nonatomic) _CPImagesUsagePropensity *imagesUsagePropensity;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _CPNewsUsagePropensity *newsUsagePropensity;
@property (strong, nonatomic) _CPSafariUsagePropensity *safariUsagePropensity;
@property (strong, nonatomic) _CPSpotlightUsagePropensity *spotlightUsagePropensity;
@property (nonatomic) int totalSessions;
@property (strong, nonatomic) _CPUsageSinceLookback *usageSinceLookback;
@property (copy, nonatomic) NSData *uuidBytes;
@property (readonly, nonatomic) unsigned long long whichKind;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
