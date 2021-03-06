//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitVideoResolutionCount : PBCodable <NSCopying>
{
    unsigned int _count;
    int _resolution;
    struct {
        unsigned int count:1;
        unsigned int resolution:1;
    } _has;
}

@property (nonatomic) unsigned int count; // @synthesize count=_count;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasResolution;
@property (nonatomic) int resolution; // @synthesize resolution=_resolution;

- (int)StringAsResolution:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)resolutionAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

