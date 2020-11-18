//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCacheHitLogMessage, GEOLogFrameworkMetricLogMessage, GEONetworkUsageLogMessage, NSString;

@interface GEOLongSessionUsageLogMessage : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionId;
    double _timestamp;
    GEOCacheHitLogMessage *_cacheHitLogMessage;
    GEOLogFrameworkMetricLogMessage *_logFrameworkMetricLogMessage;
    GEONetworkUsageLogMessage *_networkUsageLogMessage;
    NSString *_requestingAppIdentifier;
    struct {
        unsigned int sessionId:1;
        unsigned int timestamp:1;
    } _has;
}

@property (strong, nonatomic) GEOCacheHitLogMessage *cacheHitLogMessage; // @synthesize cacheHitLogMessage=_cacheHitLogMessage;
@property (readonly, nonatomic) BOOL hasCacheHitLogMessage;
@property (readonly, nonatomic) BOOL hasLogFrameworkMetricLogMessage;
@property (readonly, nonatomic) BOOL hasNetworkUsageLogMessage;
@property (readonly, nonatomic) BOOL hasRequestingAppIdentifier;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) BOOL hasTimestamp;
@property (strong, nonatomic) GEOLogFrameworkMetricLogMessage *logFrameworkMetricLogMessage; // @synthesize logFrameworkMetricLogMessage=_logFrameworkMetricLogMessage;
@property (strong, nonatomic) GEONetworkUsageLogMessage *networkUsageLogMessage; // @synthesize networkUsageLogMessage=_networkUsageLogMessage;
@property (strong, nonatomic) NSString *requestingAppIdentifier; // @synthesize requestingAppIdentifier=_requestingAppIdentifier;
@property (nonatomic) CDStruct_612aec5b sessionId; // @synthesize sessionId=_sessionId;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

