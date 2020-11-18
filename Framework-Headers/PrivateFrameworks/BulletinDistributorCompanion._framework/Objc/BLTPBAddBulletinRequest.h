//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class BLTPBBulletin;

@interface BLTPBAddBulletinRequest : PBRequest <NSCopying>
{
    double _date;
    BLTPBBulletin *_bulletin;
    unsigned int _updateType;
    BOOL _shouldPlayLightsAndSirens;
    struct {
        unsigned int date:1;
        unsigned int updateType:1;
        unsigned int shouldPlayLightsAndSirens:1;
    } _has;
}

@property (strong, nonatomic) BLTPBBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property (nonatomic) double date; // @synthesize date=_date;
@property (readonly, nonatomic) BOOL hasBulletin;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasShouldPlayLightsAndSirens;
@property (nonatomic) BOOL hasUpdateType;
@property (nonatomic) BOOL shouldPlayLightsAndSirens; // @synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens;
@property (nonatomic) unsigned int updateType; // @synthesize updateType=_updateType;

- (void).cxx_destruct;
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

