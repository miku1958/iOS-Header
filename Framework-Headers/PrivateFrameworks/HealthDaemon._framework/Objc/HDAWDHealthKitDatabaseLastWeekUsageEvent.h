//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitDatabaseLastWeekUsageEvent : PBCodable <NSCopying>
{
    long long _databaseSizeMB;
    long long _highFrequencyDataSizeMB;
    long long _lastMonthDatabaseSizeIncreaseMB;
    long long _lastMonthRowsAdded;
    long long _manuallyEnteredTypesCount;
    long long _percentageDeletedObjects;
    long long _rowCountObjects;
    long long _thirdPartyAppsCount;
    long long _thirdPartyAppsWroteDataCount;
    unsigned long long _timestamp;
    int _rowCountCDA;
    BOOL _hasWatchSource;
    struct {
        unsigned int databaseSizeMB:1;
        unsigned int highFrequencyDataSizeMB:1;
        unsigned int lastMonthDatabaseSizeIncreaseMB:1;
        unsigned int lastMonthRowsAdded:1;
        unsigned int manuallyEnteredTypesCount:1;
        unsigned int percentageDeletedObjects:1;
        unsigned int rowCountObjects:1;
        unsigned int thirdPartyAppsCount:1;
        unsigned int thirdPartyAppsWroteDataCount:1;
        unsigned int timestamp:1;
        unsigned int rowCountCDA:1;
        unsigned int hasWatchSource:1;
    } _has;
}

@property (nonatomic) long long databaseSizeMB; // @synthesize databaseSizeMB=_databaseSizeMB;
@property (nonatomic) BOOL hasDatabaseSizeMB;
@property (nonatomic) BOOL hasHasWatchSource;
@property (nonatomic) BOOL hasHighFrequencyDataSizeMB;
@property (nonatomic) BOOL hasLastMonthDatabaseSizeIncreaseMB;
@property (nonatomic) BOOL hasLastMonthRowsAdded;
@property (nonatomic) BOOL hasManuallyEnteredTypesCount;
@property (nonatomic) BOOL hasPercentageDeletedObjects;
@property (nonatomic) BOOL hasRowCountCDA;
@property (nonatomic) BOOL hasRowCountObjects;
@property (nonatomic) BOOL hasThirdPartyAppsCount;
@property (nonatomic) BOOL hasThirdPartyAppsWroteDataCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWatchSource; // @synthesize hasWatchSource=_hasWatchSource;
@property (nonatomic) long long highFrequencyDataSizeMB; // @synthesize highFrequencyDataSizeMB=_highFrequencyDataSizeMB;
@property (nonatomic) long long lastMonthDatabaseSizeIncreaseMB; // @synthesize lastMonthDatabaseSizeIncreaseMB=_lastMonthDatabaseSizeIncreaseMB;
@property (nonatomic) long long lastMonthRowsAdded; // @synthesize lastMonthRowsAdded=_lastMonthRowsAdded;
@property (nonatomic) long long manuallyEnteredTypesCount; // @synthesize manuallyEnteredTypesCount=_manuallyEnteredTypesCount;
@property (nonatomic) long long percentageDeletedObjects; // @synthesize percentageDeletedObjects=_percentageDeletedObjects;
@property (nonatomic) int rowCountCDA; // @synthesize rowCountCDA=_rowCountCDA;
@property (nonatomic) long long rowCountObjects; // @synthesize rowCountObjects=_rowCountObjects;
@property (nonatomic) long long thirdPartyAppsCount; // @synthesize thirdPartyAppsCount=_thirdPartyAppsCount;
@property (nonatomic) long long thirdPartyAppsWroteDataCount; // @synthesize thirdPartyAppsWroteDataCount=_thirdPartyAppsWroteDataCount;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (int)StringAsRowCountCDA:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)rowCountCDAAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

