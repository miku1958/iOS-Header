//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString;

@interface CDDMBookkeeping : NSManagedObject
{
}

@property (strong, nonatomic) NSNumber *budgetVersion; // @dynamic budgetVersion;
@property (strong, nonatomic) NSNumber *databaseVersion; // @dynamic databaseVersion;
@property (strong, nonatomic) NSString *deviceDescription; // @dynamic deviceDescription;
@property (strong, nonatomic) NSNumber *maxAttributeIntegerId; // @dynamic maxAttributeIntegerId;
@property (strong, nonatomic) NSNumber *maxForecastGroupId; // @dynamic maxForecastGroupId;
@property (strong, nonatomic) NSNumber *maxPoolIntegerId; // @dynamic maxPoolIntegerId;
@property (strong, nonatomic) NSDate *newestEntryDate; // @dynamic newestEntryDate;
@property (strong, nonatomic) NSDate *oldestEntryDate; // @dynamic oldestEntryDate;
@property (strong, nonatomic) NSNumber *systemCumulativeComputeUtilizationGauge; // @dynamic systemCumulativeComputeUtilizationGauge;
@property (strong, nonatomic) NSNumber *systemCumulativeIoReadBytesGauge; // @dynamic systemCumulativeIoReadBytesGauge;
@property (strong, nonatomic) NSNumber *systemCumulativeIoWriteBytesGauge; // @dynamic systemCumulativeIoWriteBytesGauge;
@property (strong, nonatomic) NSNumber *systemCumulativeMillijoulesGauge; // @dynamic systemCumulativeMillijoulesGauge;
@property (strong, nonatomic) NSNumber *systemCumulativeNetworkBytesGauge; // @dynamic systemCumulativeNetworkBytesGauge;
@property (strong, nonatomic) NSNumber *systemCumulativePushesGauge; // @dynamic systemCumulativePushesGauge;

@end

