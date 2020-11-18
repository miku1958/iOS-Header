//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLogMsgStateApplicationIdentifier, GEOLogMsgStateCarPlay, GEOLogMsgStateDeviceBase, GEOLogMsgStateDeviceConnection, GEOLogMsgStateDeviceIdentifier, GEOLogMsgStateDeviceLocale, GEOLogMsgStateExperiments, GEOLogMsgStateExtension, GEOLogMsgStateFlyover, GEOLogMsgStateMapRestore, GEOLogMsgStateMapSettings, GEOLogMsgStateMapUI, GEOLogMsgStateMapUIShown, GEOLogMsgStateMapView, GEOLogMsgStateMapViewLocation, GEOLogMsgStateMapsServer, GEOLogMsgStateNavigation, GEOLogMsgStatePairedDevice, GEOLogMsgStatePlaceCard, GEOLogMsgStatePlaceRequest, GEOLogMsgStateReportAnIssue, GEOLogMsgStateRoute, GEOLogMsgStateSuggestions, GEOLogMsgStateTileSet, GEOLogMsgStateTransit, GEOLogMsgStateUserSession, NSString;

@interface GEOLogMsgState : PBCodable <NSCopying>
{
    GEOLogMsgStateApplicationIdentifier *_applicationIdentifier;
    GEOLogMsgStateCarPlay *_carPlay;
    GEOLogMsgStateDeviceBase *_deviceBase;
    GEOLogMsgStateDeviceConnection *_deviceConnection;
    GEOLogMsgStateDeviceIdentifier *_deviceIdentifier;
    GEOLogMsgStateDeviceLocale *_deviceLocale;
    GEOLogMsgStateExperiments *_experiments;
    GEOLogMsgStateExtension *_extension;
    GEOLogMsgStateFlyover *_flyover;
    GEOLogMsgStateMapRestore *_mapRestore;
    GEOLogMsgStateMapSettings *_mapSettings;
    GEOLogMsgStateMapUI *_mapUi;
    GEOLogMsgStateMapUIShown *_mapUiShown;
    GEOLogMsgStateMapView *_mapView;
    GEOLogMsgStateMapViewLocation *_mapViewLocation;
    GEOLogMsgStateMapsServer *_mapsServer;
    GEOLogMsgStateNavigation *_navigation;
    GEOLogMsgStatePairedDevice *_pairedDevice;
    GEOLogMsgStatePlaceCard *_placeCard;
    GEOLogMsgStatePlaceRequest *_placeRequest;
    GEOLogMsgStateReportAnIssue *_reportAnIssue;
    GEOLogMsgStateRoute *_route;
    NSString *_stateOrigin;
    int _stateType;
    GEOLogMsgStateSuggestions *_suggestions;
    GEOLogMsgStateTileSet *_tileSet;
    GEOLogMsgStateTransit *_transit;
    GEOLogMsgStateUserSession *_userSession;
    struct {
        unsigned int stateType:1;
    } _has;
}

@property (strong, nonatomic) GEOLogMsgStateApplicationIdentifier *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property (strong, nonatomic) GEOLogMsgStateCarPlay *carPlay; // @synthesize carPlay=_carPlay;
@property (strong, nonatomic) GEOLogMsgStateDeviceBase *deviceBase; // @synthesize deviceBase=_deviceBase;
@property (strong, nonatomic) GEOLogMsgStateDeviceConnection *deviceConnection; // @synthesize deviceConnection=_deviceConnection;
@property (strong, nonatomic) GEOLogMsgStateDeviceIdentifier *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (strong, nonatomic) GEOLogMsgStateDeviceLocale *deviceLocale; // @synthesize deviceLocale=_deviceLocale;
@property (strong, nonatomic) GEOLogMsgStateExperiments *experiments; // @synthesize experiments=_experiments;
@property (strong, nonatomic) GEOLogMsgStateExtension *extension; // @synthesize extension=_extension;
@property (strong, nonatomic) GEOLogMsgStateFlyover *flyover; // @synthesize flyover=_flyover;
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (readonly, nonatomic) BOOL hasCarPlay;
@property (readonly, nonatomic) BOOL hasDeviceBase;
@property (readonly, nonatomic) BOOL hasDeviceConnection;
@property (readonly, nonatomic) BOOL hasDeviceIdentifier;
@property (readonly, nonatomic) BOOL hasDeviceLocale;
@property (readonly, nonatomic) BOOL hasExperiments;
@property (readonly, nonatomic) BOOL hasExtension;
@property (readonly, nonatomic) BOOL hasFlyover;
@property (readonly, nonatomic) BOOL hasMapRestore;
@property (readonly, nonatomic) BOOL hasMapSettings;
@property (readonly, nonatomic) BOOL hasMapUi;
@property (readonly, nonatomic) BOOL hasMapUiShown;
@property (readonly, nonatomic) BOOL hasMapView;
@property (readonly, nonatomic) BOOL hasMapViewLocation;
@property (readonly, nonatomic) BOOL hasMapsServer;
@property (readonly, nonatomic) BOOL hasNavigation;
@property (readonly, nonatomic) BOOL hasPairedDevice;
@property (readonly, nonatomic) BOOL hasPlaceCard;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (readonly, nonatomic) BOOL hasReportAnIssue;
@property (readonly, nonatomic) BOOL hasRoute;
@property (readonly, nonatomic) BOOL hasStateOrigin;
@property (nonatomic) BOOL hasStateType;
@property (readonly, nonatomic) BOOL hasSuggestions;
@property (readonly, nonatomic) BOOL hasTileSet;
@property (readonly, nonatomic) BOOL hasTransit;
@property (readonly, nonatomic) BOOL hasUserSession;
@property (strong, nonatomic) GEOLogMsgStateMapRestore *mapRestore; // @synthesize mapRestore=_mapRestore;
@property (strong, nonatomic) GEOLogMsgStateMapSettings *mapSettings; // @synthesize mapSettings=_mapSettings;
@property (strong, nonatomic) GEOLogMsgStateMapUI *mapUi; // @synthesize mapUi=_mapUi;
@property (strong, nonatomic) GEOLogMsgStateMapUIShown *mapUiShown; // @synthesize mapUiShown=_mapUiShown;
@property (strong, nonatomic) GEOLogMsgStateMapView *mapView; // @synthesize mapView=_mapView;
@property (strong, nonatomic) GEOLogMsgStateMapViewLocation *mapViewLocation; // @synthesize mapViewLocation=_mapViewLocation;
@property (strong, nonatomic) GEOLogMsgStateMapsServer *mapsServer; // @synthesize mapsServer=_mapsServer;
@property (strong, nonatomic) GEOLogMsgStateNavigation *navigation; // @synthesize navigation=_navigation;
@property (strong, nonatomic) GEOLogMsgStatePairedDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property (strong, nonatomic) GEOLogMsgStatePlaceCard *placeCard; // @synthesize placeCard=_placeCard;
@property (strong, nonatomic) GEOLogMsgStatePlaceRequest *placeRequest; // @synthesize placeRequest=_placeRequest;
@property (strong, nonatomic) GEOLogMsgStateReportAnIssue *reportAnIssue; // @synthesize reportAnIssue=_reportAnIssue;
@property (strong, nonatomic) GEOLogMsgStateRoute *route; // @synthesize route=_route;
@property (strong, nonatomic) NSString *stateOrigin; // @synthesize stateOrigin=_stateOrigin;
@property (nonatomic) int stateType; // @synthesize stateType=_stateType;
@property (strong, nonatomic) GEOLogMsgStateSuggestions *suggestions; // @synthesize suggestions=_suggestions;
@property (strong, nonatomic) GEOLogMsgStateTileSet *tileSet; // @synthesize tileSet=_tileSet;
@property (strong, nonatomic) GEOLogMsgStateTransit *transit; // @synthesize transit=_transit;
@property (strong, nonatomic) GEOLogMsgStateUserSession *userSession; // @synthesize userSession=_userSession;

- (int)StringAsStateType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)stateTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

