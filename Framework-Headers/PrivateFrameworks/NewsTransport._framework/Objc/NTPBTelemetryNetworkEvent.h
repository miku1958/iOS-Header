//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBTelemetryNetworkEvent : PBCodable <NSCopying>
{
    long long _connectDuration;
    long long _dnsDuration;
    long long _errorCode;
    long long _httpStatusCode;
    long long _requestDuration;
    long long _responseDuration;
    long long _responseSize;
    long long _startTime;
    int _cacheState;
    struct {
        unsigned int connectDuration:1;
        unsigned int dnsDuration:1;
        unsigned int errorCode:1;
        unsigned int httpStatusCode:1;
        unsigned int requestDuration:1;
        unsigned int responseDuration:1;
        unsigned int responseSize:1;
        unsigned int startTime:1;
        unsigned int cacheState:1;
    } _has;
}

@property (nonatomic) int cacheState; // @synthesize cacheState=_cacheState;
@property (nonatomic) long long connectDuration; // @synthesize connectDuration=_connectDuration;
@property (nonatomic) long long dnsDuration; // @synthesize dnsDuration=_dnsDuration;
@property (nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property (nonatomic) BOOL hasCacheState;
@property (nonatomic) BOOL hasConnectDuration;
@property (nonatomic) BOOL hasDnsDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasHttpStatusCode;
@property (nonatomic) BOOL hasRequestDuration;
@property (nonatomic) BOOL hasResponseDuration;
@property (nonatomic) BOOL hasResponseSize;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) long long httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property (nonatomic) long long requestDuration; // @synthesize requestDuration=_requestDuration;
@property (nonatomic) long long responseDuration; // @synthesize responseDuration=_responseDuration;
@property (nonatomic) long long responseSize; // @synthesize responseSize=_responseSize;
@property (nonatomic) long long startTime; // @synthesize startTime=_startTime;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

