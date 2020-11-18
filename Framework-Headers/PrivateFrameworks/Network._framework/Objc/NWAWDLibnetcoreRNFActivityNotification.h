//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreRNFActivityNotification : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    BOOL _hasRnfActivity;
    struct {
        unsigned int timestamp:1;
        unsigned int hasRnfActivity:1;
    } _has;
}

@property (nonatomic) BOOL hasHasRnfActivity;
@property (nonatomic) BOOL hasRnfActivity; // @synthesize hasRnfActivity=_hasRnfActivity;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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

