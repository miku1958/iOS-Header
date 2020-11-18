//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitLineItem-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class GEOMapRegion, MSPTransitStorageAttribution, MSPTransitStorageLine, NSArray, NSString, PBUnknownFields;
@protocol GEOEncyclopedicInfo, GEOTransitArtworkDataSource, GEOTransitAttribution, GEOTransitSystem;

@interface MSPTransitStorageLineItem : PBCodable <GEOTransitLineItem, NSCopying>
{
    PBUnknownFields *_unknownFields;
    MSPTransitStorageLine *_line;
    GEOMapRegion *_storedMapRegion;
    MSPTransitStorageAttribution *_transitAttribution;
}

@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork;
@property (readonly, nonatomic) id<GEOTransitAttribution> attribution;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property (readonly, nonatomic) BOOL departuresAreVehicleSpecific;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<GEOEncyclopedicInfo> encyclopedicInfo;
@property (readonly, nonatomic) BOOL hasEncyclopedicInfo;
@property (readonly, nonatomic) BOOL hasIncidentComponent;
@property (readonly, nonatomic) BOOL hasLine;
@property (readonly, nonatomic) BOOL hasLineColorString;
@property (readonly, nonatomic) BOOL hasStoredMapRegion;
@property (readonly, nonatomic) BOOL hasTransitAttribution;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *incidents;
@property (readonly, nonatomic) BOOL isIncidentsTTLExpired;
@property (readonly, nonatomic) NSArray *labelItems;
@property (strong, nonatomic) MSPTransitStorageLine *line; // @synthesize line=_line;
@property (readonly, nonatomic) NSString *lineColorString;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> modeArtwork;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *operatingHours;
@property (readonly, nonatomic) BOOL showVehicleNumber;
@property (strong, nonatomic) GEOMapRegion *storedMapRegion; // @synthesize storedMapRegion=_storedMapRegion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<GEOTransitSystem> system;
@property (strong, nonatomic) MSPTransitStorageAttribution *transitAttribution; // @synthesize transitAttribution=_transitAttribution;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithLineItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
