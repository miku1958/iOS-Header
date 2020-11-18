//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitUserPresenceAuthorization : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _auth;
    struct {
        unsigned int timestamp:1;
        unsigned int auth:1;
    } _has;
}

@property (nonatomic) int auth; // @synthesize auth=_auth;
@property (nonatomic) BOOL hasAuth;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (int)StringAsAuth:(id)arg1;
- (id)authAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

