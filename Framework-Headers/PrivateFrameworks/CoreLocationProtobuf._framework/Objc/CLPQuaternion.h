//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPQuaternion : PBCodable <NSCopying>
{
    float _w;
    float _x;
    float _y;
    float _z;
    struct {
        unsigned int w:1;
    } _has;
}

@property (nonatomic) BOOL hasW;
@property (nonatomic) float w; // @synthesize w=_w;
@property (nonatomic) float x; // @synthesize x=_x;
@property (nonatomic) float y; // @synthesize y=_y;
@property (nonatomic) float z; // @synthesize z=_z;

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

