//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MultipeerConnectivity/NSCopying-Protocol.h>

@class NSString;

@interface AWDMultipeerSessionMaxPeersInfo : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_bundleID;
    unsigned int _maxPeersCount;
    NSString *_sessionID;
    struct {
        unsigned int timestamp:1;
        unsigned int maxPeersCount:1;
    } _has;
}

@property (strong, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (nonatomic) BOOL hasMaxPeersCount;
@property (readonly, nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int maxPeersCount; // @synthesize maxPeersCount=_maxPeersCount;
@property (strong, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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
