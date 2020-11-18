//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBNetworkEvent : PBCodable <NSCopying>
{
    unsigned long long _cacheState;
    unsigned long long _connectDuration;
    unsigned long long _dnsDuration;
    unsigned long long _errorCode;
    unsigned long long _httpStatusCode;
    unsigned long long _requestDuration;
    unsigned long long _responseDuration;
    unsigned long long _responseSize;
    unsigned long long _sessionID;
    unsigned long long _startTime;
    unsigned long long _type;
    NSString *_requestUUID;
    NSString *_respondingPOP;
    NSString *_url;
    struct {
        unsigned int cacheState:1;
        unsigned int connectDuration:1;
        unsigned int dnsDuration:1;
        unsigned int errorCode:1;
        unsigned int httpStatusCode:1;
        unsigned int requestDuration:1;
        unsigned int responseDuration:1;
        unsigned int responseSize:1;
        unsigned int sessionID:1;
        unsigned int startTime:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) unsigned long long cacheState; // @synthesize cacheState=_cacheState;
@property (nonatomic) unsigned long long connectDuration; // @synthesize connectDuration=_connectDuration;
@property (nonatomic) unsigned long long dnsDuration; // @synthesize dnsDuration=_dnsDuration;
@property (nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;
@property (nonatomic) BOOL hasCacheState;
@property (nonatomic) BOOL hasConnectDuration;
@property (nonatomic) BOOL hasDnsDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasHttpStatusCode;
@property (nonatomic) BOOL hasRequestDuration;
@property (readonly, nonatomic) BOOL hasRequestUUID;
@property (readonly, nonatomic) BOOL hasRespondingPOP;
@property (nonatomic) BOOL hasResponseDuration;
@property (nonatomic) BOOL hasResponseSize;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUrl;
@property (nonatomic) unsigned long long httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property (nonatomic) unsigned long long requestDuration; // @synthesize requestDuration=_requestDuration;
@property (strong, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property (strong, nonatomic) NSString *respondingPOP; // @synthesize respondingPOP=_respondingPOP;
@property (nonatomic) unsigned long long responseDuration; // @synthesize responseDuration=_responseDuration;
@property (nonatomic) unsigned long long responseSize; // @synthesize responseSize=_responseSize;
@property (nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property (nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (strong, nonatomic) NSString *url; // @synthesize url=_url;

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

