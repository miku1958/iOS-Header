//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface LOGMSGEVENTBookedTable : PBCodable <NSCopying>
{
    unsigned long long _muid;
    NSString *_appId;
    BOOL _bookedUsingMaps;
    BOOL _called;
    BOOL _cancelled;
    BOOL _isAsync;
    BOOL _routed;
    BOOL _shared;
    BOOL _tappedCancelReservation;
    BOOL _tappedChangeReservation;
    BOOL _tappedProactiveTrayItem;
    BOOL _viewedDetailsFromPlacecard;
    BOOL _viewedInPlacecard;
    BOOL _viewedInProactiveTray;
    struct {
        unsigned int muid:1;
        unsigned int bookedUsingMaps:1;
        unsigned int called:1;
        unsigned int cancelled:1;
        unsigned int isAsync:1;
        unsigned int routed:1;
        unsigned int shared:1;
        unsigned int tappedCancelReservation:1;
        unsigned int tappedChangeReservation:1;
        unsigned int tappedProactiveTrayItem:1;
        unsigned int viewedDetailsFromPlacecard:1;
        unsigned int viewedInPlacecard:1;
        unsigned int viewedInProactiveTray:1;
    } _has;
}

@property (strong, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property (nonatomic) BOOL bookedUsingMaps; // @synthesize bookedUsingMaps=_bookedUsingMaps;
@property (nonatomic) BOOL called; // @synthesize called=_called;
@property (nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (readonly, nonatomic) BOOL hasAppId;
@property (nonatomic) BOOL hasBookedUsingMaps;
@property (nonatomic) BOOL hasCalled;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL hasIsAsync;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasRouted;
@property (nonatomic) BOOL hasShared;
@property (nonatomic) BOOL hasTappedCancelReservation;
@property (nonatomic) BOOL hasTappedChangeReservation;
@property (nonatomic) BOOL hasTappedProactiveTrayItem;
@property (nonatomic) BOOL hasViewedDetailsFromPlacecard;
@property (nonatomic) BOOL hasViewedInPlacecard;
@property (nonatomic) BOOL hasViewedInProactiveTray;
@property (nonatomic) BOOL isAsync; // @synthesize isAsync=_isAsync;
@property (nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property (nonatomic) BOOL routed; // @synthesize routed=_routed;
@property (nonatomic) BOOL shared; // @synthesize shared=_shared;
@property (nonatomic) BOOL tappedCancelReservation; // @synthesize tappedCancelReservation=_tappedCancelReservation;
@property (nonatomic) BOOL tappedChangeReservation; // @synthesize tappedChangeReservation=_tappedChangeReservation;
@property (nonatomic) BOOL tappedProactiveTrayItem; // @synthesize tappedProactiveTrayItem=_tappedProactiveTrayItem;
@property (nonatomic) BOOL viewedDetailsFromPlacecard; // @synthesize viewedDetailsFromPlacecard=_viewedDetailsFromPlacecard;
@property (nonatomic) BOOL viewedInPlacecard; // @synthesize viewedInPlacecard=_viewedInPlacecard;
@property (nonatomic) BOOL viewedInProactiveTray; // @synthesize viewedInProactiveTray=_viewedInProactiveTray;

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

