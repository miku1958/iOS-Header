//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONavCameraState;

@interface GEOLogMsgStateNavigation : PBCodable <NSCopying>
{
    double _distanceToDestination;
    int _lineType;
    GEONavCameraState *_navCameraState;
    int _navState;
    struct {
        unsigned int distanceToDestination:1;
        unsigned int lineType:1;
        unsigned int navState:1;
    } _has;
}

@property (nonatomic) double distanceToDestination; // @synthesize distanceToDestination=_distanceToDestination;
@property (nonatomic) BOOL hasDistanceToDestination;
@property (nonatomic) BOOL hasLineType;
@property (readonly, nonatomic) BOOL hasNavCameraState;
@property (nonatomic) BOOL hasNavState;
@property (nonatomic) int lineType; // @synthesize lineType=_lineType;
@property (strong, nonatomic) GEONavCameraState *navCameraState; // @synthesize navCameraState=_navCameraState;
@property (nonatomic) int navState; // @synthesize navState=_navState;

- (void).cxx_destruct;
- (int)StringAsLineType:(id)arg1;
- (int)StringAsNavState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)lineTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)navStateAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

