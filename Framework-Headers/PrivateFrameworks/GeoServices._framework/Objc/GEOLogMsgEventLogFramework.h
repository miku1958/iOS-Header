//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventLogFramework : PBCodable <NSCopying>
{
    unsigned long long _messageSize;
    NSMutableArray *_logFrameworkItems;
    unsigned int _messageCount;
    int _messageType;
    int _metricState;
    int _metricType;
    int _purgeReason;
    struct {
        unsigned int messageSize:1;
        unsigned int messageCount:1;
        unsigned int messageType:1;
        unsigned int metricState:1;
        unsigned int metricType:1;
        unsigned int purgeReason:1;
    } _has;
}

@property (nonatomic) BOOL hasMessageCount;
@property (nonatomic) BOOL hasMessageSize;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) BOOL hasMetricState;
@property (nonatomic) BOOL hasMetricType;
@property (nonatomic) BOOL hasPurgeReason;
@property (strong, nonatomic) NSMutableArray *logFrameworkItems; // @synthesize logFrameworkItems=_logFrameworkItems;
@property (nonatomic) unsigned int messageCount; // @synthesize messageCount=_messageCount;
@property (nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property (nonatomic) int messageType; // @synthesize messageType=_messageType;
@property (nonatomic) int metricState; // @synthesize metricState=_metricState;
@property (nonatomic) int metricType; // @synthesize metricType=_metricType;
@property (nonatomic) int purgeReason; // @synthesize purgeReason=_purgeReason;

+ (Class)logFrameworkItemType;
- (void).cxx_destruct;
- (int)StringAsMessageType:(id)arg1;
- (int)StringAsMetricState:(id)arg1;
- (int)StringAsMetricType:(id)arg1;
- (int)StringAsPurgeReason:(id)arg1;
- (void)addLogFrameworkItem:(id)arg1;
- (void)clearLogFrameworkItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)logFrameworkItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)logFrameworkItemsCount;
- (void)mergeFrom:(id)arg1;
- (id)messageTypeAsString:(int)arg1;
- (id)metricStateAsString:(int)arg1;
- (id)metricTypeAsString:(int)arg1;
- (id)purgeReasonAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

