//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSMutableArray, NSString, NWAWDLibnetcoreCellularFallbackReport, NWAWDLibnetcoreConnectionStatisticsReport;

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreTCPConnectionReport : PBCodable <NSCopying>
{
    unsigned long long _iPAddressAttemptCount;
    unsigned long long _timestamp;
    NWAWDLibnetcoreCellularFallbackReport *_cellularFallbackReport;
    NSString *_clientIdentifier;
    NSMutableArray *_connectionAttemptStatisticsReports;
    NWAWDLibnetcoreConnectionStatisticsReport *_connectionStatisticsReport;
    int _reportReason;
    NSString *_sourceAppIdentifier;
    BOOL _delegated;
    struct {
        unsigned int iPAddressAttemptCount:1;
        unsigned int timestamp:1;
        unsigned int reportReason:1;
        unsigned int delegated:1;
    } _has;
}

@property (strong, nonatomic) NWAWDLibnetcoreCellularFallbackReport *cellularFallbackReport; // @synthesize cellularFallbackReport=_cellularFallbackReport;
@property (strong, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (strong, nonatomic) NSMutableArray *connectionAttemptStatisticsReports; // @synthesize connectionAttemptStatisticsReports=_connectionAttemptStatisticsReports;
@property (strong, nonatomic) NWAWDLibnetcoreConnectionStatisticsReport *connectionStatisticsReport; // @synthesize connectionStatisticsReport=_connectionStatisticsReport;
@property (nonatomic) BOOL delegated; // @synthesize delegated=_delegated;
@property (readonly, nonatomic) BOOL hasCellularFallbackReport;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (readonly, nonatomic) BOOL hasConnectionStatisticsReport;
@property (nonatomic) BOOL hasDelegated;
@property (nonatomic) BOOL hasIPAddressAttemptCount;
@property (nonatomic) BOOL hasReportReason;
@property (readonly, nonatomic) BOOL hasSourceAppIdentifier;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long iPAddressAttemptCount; // @synthesize iPAddressAttemptCount=_iPAddressAttemptCount;
@property (nonatomic) int reportReason; // @synthesize reportReason=_reportReason;
@property (strong, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

+ (Class)connectionAttemptStatisticsReportsType;
- (void).cxx_destruct;
- (int)StringAsReportReason:(id)arg1;
- (void)addConnectionAttemptStatisticsReports:(id)arg1;
- (void)clearConnectionAttemptStatisticsReports;
- (id)connectionAttemptStatisticsReportsAtIndex:(unsigned long long)arg1;
- (unsigned long long)connectionAttemptStatisticsReportsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)reportReasonAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

