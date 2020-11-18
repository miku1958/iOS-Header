//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapsDestinationsWidget, GEOMapsNearbyWidget, GEOMapsTransitWidget;

@interface GEOLogMsgEventMapsWidgetsInteractionSession : PBCodable <NSCopying>
{
    int _duration;
    int _endState;
    int _localDayOfWeek;
    int _localHour;
    GEOMapsDestinationsWidget *_mapsDestinationsWidget;
    GEOMapsNearbyWidget *_mapsNearbyWidget;
    GEOMapsTransitWidget *_mapsTransitWidget;
    int _mapsWidgetType;
    BOOL _lockedMode;
    struct {
        unsigned int duration:1;
        unsigned int endState:1;
        unsigned int localDayOfWeek:1;
        unsigned int localHour:1;
        unsigned int mapsWidgetType:1;
        unsigned int lockedMode:1;
    } _has;
}

@property (nonatomic) int duration; // @synthesize duration=_duration;
@property (nonatomic) int endState; // @synthesize endState=_endState;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEndState;
@property (nonatomic) BOOL hasLocalDayOfWeek;
@property (nonatomic) BOOL hasLocalHour;
@property (nonatomic) BOOL hasLockedMode;
@property (readonly, nonatomic) BOOL hasMapsDestinationsWidget;
@property (readonly, nonatomic) BOOL hasMapsNearbyWidget;
@property (readonly, nonatomic) BOOL hasMapsTransitWidget;
@property (nonatomic) BOOL hasMapsWidgetType;
@property (nonatomic) int localDayOfWeek; // @synthesize localDayOfWeek=_localDayOfWeek;
@property (nonatomic) int localHour; // @synthesize localHour=_localHour;
@property (nonatomic) BOOL lockedMode; // @synthesize lockedMode=_lockedMode;
@property (strong, nonatomic) GEOMapsDestinationsWidget *mapsDestinationsWidget; // @synthesize mapsDestinationsWidget=_mapsDestinationsWidget;
@property (strong, nonatomic) GEOMapsNearbyWidget *mapsNearbyWidget; // @synthesize mapsNearbyWidget=_mapsNearbyWidget;
@property (strong, nonatomic) GEOMapsTransitWidget *mapsTransitWidget; // @synthesize mapsTransitWidget=_mapsTransitWidget;
@property (nonatomic) int mapsWidgetType; // @synthesize mapsWidgetType=_mapsWidgetType;

- (int)StringAsEndState:(id)arg1;
- (int)StringAsMapsWidgetType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endStateAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mapsWidgetTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

