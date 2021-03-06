//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDSiriSession : PBCodable <NSCopying>
{
    unsigned long long _sessionEndTimestamp;
    unsigned long long _sessionStartTimestamp;
    unsigned long long _timestamp;
    NSString *_companionModel;
    NSString *_companionOS;
    NSMutableArray *_siriRequests;
    struct {
        unsigned int sessionEndTimestamp:1;
        unsigned int sessionStartTimestamp:1;
        unsigned int timestamp:1;
    } _has;
}

@property (strong, nonatomic) NSString *companionModel; // @synthesize companionModel=_companionModel;
@property (strong, nonatomic) NSString *companionOS; // @synthesize companionOS=_companionOS;
@property (readonly, nonatomic) BOOL hasCompanionModel;
@property (readonly, nonatomic) BOOL hasCompanionOS;
@property (nonatomic) BOOL hasSessionEndTimestamp;
@property (nonatomic) BOOL hasSessionStartTimestamp;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long sessionEndTimestamp; // @synthesize sessionEndTimestamp=_sessionEndTimestamp;
@property (nonatomic) unsigned long long sessionStartTimestamp; // @synthesize sessionStartTimestamp=_sessionStartTimestamp;
@property (strong, nonatomic) NSMutableArray *siriRequests; // @synthesize siriRequests=_siriRequests;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

+ (Class)siriRequestType;
- (void)addSiriRequest:(id)arg1;
- (void)clearSiriRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)siriRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)siriRequestsCount;
- (void)writeTo:(id)arg1;

@end

