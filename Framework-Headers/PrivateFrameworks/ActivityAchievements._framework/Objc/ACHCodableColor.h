//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivityAchievements/NSCopying-Protocol.h>

@interface ACHCodableColor : PBCodable <NSCopying>
{
    double _blue;
    double _green;
    double _red;
    struct {
        unsigned int blue:1;
        unsigned int green:1;
        unsigned int red:1;
    } _has;
}

@property (nonatomic) double blue; // @synthesize blue=_blue;
@property (nonatomic) double green; // @synthesize green=_green;
@property (nonatomic) BOOL hasBlue;
@property (nonatomic) BOOL hasGreen;
@property (nonatomic) BOOL hasRed;
@property (nonatomic) double red; // @synthesize red=_red;

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

