//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DigitalTouchShared/NSCopying-Protocol.h>

@class NSData;

@interface ETPTap : PBCodable <NSCopying>
{
    NSData *_colors;
    NSData *_points;
    NSData *_timeDeltas;
}

@property (strong, nonatomic) NSData *colors; // @synthesize colors=_colors;
@property (readonly, nonatomic) BOOL hasColors;
@property (readonly, nonatomic) BOOL hasPoints;
@property (readonly, nonatomic) BOOL hasTimeDeltas;
@property (strong, nonatomic) NSData *points; // @synthesize points=_points;
@property (strong, nonatomic) NSData *timeDeltas; // @synthesize timeDeltas=_timeDeltas;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
