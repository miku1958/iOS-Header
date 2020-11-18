//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class AWDLibnetcoreMPTCPStatsReport, AWDLibnetcoreMbufStatsReport, AWDLibnetcoreNetworkdStatsReport, AWDLibnetcoreTCPECNStatsReport, AWDLibnetcoreTCPStatsReport, AWDLibnetcoreTCPTFOStatsReport, AWDNWAPIUsage, NSMutableArray;

@interface AWDLibnetcoreStatsReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    AWDLibnetcoreMbufStatsReport *_mbufStatisticsReport;
    AWDLibnetcoreMPTCPStatsReport *_mptcpStatisticsReport;
    AWDLibnetcoreNetworkdStatsReport *_networkdStatisticsReport;
    AWDNWAPIUsage *_nwAPIUsageReport;
    unsigned int _reportReason;
    NSMutableArray *_tcpECNInterfaceReports;
    AWDLibnetcoreTCPECNStatsReport *_tcpECNStatisticsReport;
    AWDLibnetcoreTCPStatsReport *_tcpStatisticsReport;
    AWDLibnetcoreTCPTFOStatsReport *_tcpTFOStatisticsReport;
    struct {
        unsigned int timestamp:1;
        unsigned int reportReason:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasMbufStatisticsReport;
@property (readonly, nonatomic) BOOL hasMptcpStatisticsReport;
@property (readonly, nonatomic) BOOL hasNetworkdStatisticsReport;
@property (readonly, nonatomic) BOOL hasNwAPIUsageReport;
@property (nonatomic) BOOL hasReportReason;
@property (readonly, nonatomic) BOOL hasTcpECNStatisticsReport;
@property (readonly, nonatomic) BOOL hasTcpStatisticsReport;
@property (readonly, nonatomic) BOOL hasTcpTFOStatisticsReport;
@property (nonatomic) BOOL hasTimestamp;
@property (strong, nonatomic) AWDLibnetcoreMbufStatsReport *mbufStatisticsReport; // @synthesize mbufStatisticsReport=_mbufStatisticsReport;
@property (strong, nonatomic) AWDLibnetcoreMPTCPStatsReport *mptcpStatisticsReport; // @synthesize mptcpStatisticsReport=_mptcpStatisticsReport;
@property (strong, nonatomic) AWDLibnetcoreNetworkdStatsReport *networkdStatisticsReport; // @synthesize networkdStatisticsReport=_networkdStatisticsReport;
@property (strong, nonatomic) AWDNWAPIUsage *nwAPIUsageReport; // @synthesize nwAPIUsageReport=_nwAPIUsageReport;
@property (nonatomic) unsigned int reportReason; // @synthesize reportReason=_reportReason;
@property (strong, nonatomic) NSMutableArray *tcpECNInterfaceReports; // @synthesize tcpECNInterfaceReports=_tcpECNInterfaceReports;
@property (strong, nonatomic) AWDLibnetcoreTCPECNStatsReport *tcpECNStatisticsReport; // @synthesize tcpECNStatisticsReport=_tcpECNStatisticsReport;
@property (strong, nonatomic) AWDLibnetcoreTCPStatsReport *tcpStatisticsReport; // @synthesize tcpStatisticsReport=_tcpStatisticsReport;
@property (strong, nonatomic) AWDLibnetcoreTCPTFOStatsReport *tcpTFOStatisticsReport; // @synthesize tcpTFOStatisticsReport=_tcpTFOStatisticsReport;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

+ (Class)tcpECNInterfaceReportType;
- (void)addTcpECNInterfaceReport:(id)arg1;
- (void)clearTcpECNInterfaceReports;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)tcpECNInterfaceReportAtIndex:(unsigned long long)arg1;
- (unsigned long long)tcpECNInterfaceReportsCount;
- (void)writeTo:(id)arg1;

@end

