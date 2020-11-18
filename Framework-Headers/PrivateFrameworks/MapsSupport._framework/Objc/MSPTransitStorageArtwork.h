//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitArtworkDataSource-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class MSPTransitStorageIcon, MSPTransitStorageShield, NSString, PBUnknownFields;
@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

@interface MSPTransitStorageArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_accessibilityText;
    int _artworkSourceType;
    int _artworkUseType;
    MSPTransitStorageIcon *_icon;
    MSPTransitStorageShield *_iconFallbackShield;
    MSPTransitStorageShield *_shield;
    BOOL _hasRoutingIncidentBadge;
    struct {
        unsigned int artworkSourceType:1;
        unsigned int artworkUseType:1;
        unsigned int hasRoutingIncidentBadge:1;
    } _has;
}

@property (readonly, nonatomic) NSString *accessibilityText;
@property (strong, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property (readonly, nonatomic) int artworkSourceType;
@property (nonatomic) int artworkSourceType; // @synthesize artworkSourceType=_artworkSourceType;
@property (readonly, nonatomic) int artworkUseType;
@property (nonatomic) int artworkUseType; // @synthesize artworkUseType=_artworkUseType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAccessibilityText;
@property (nonatomic) BOOL hasArtworkSourceType;
@property (nonatomic) BOOL hasArtworkUseType;
@property (nonatomic) BOOL hasHasRoutingIncidentBadge;
@property (readonly, nonatomic) BOOL hasIcon;
@property (readonly, nonatomic) BOOL hasIconFallbackShield;
@property (readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property (nonatomic) BOOL hasRoutingIncidentBadge; // @synthesize hasRoutingIncidentBadge=_hasRoutingIncidentBadge;
@property (readonly, nonatomic) BOOL hasShield;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MSPTransitStorageIcon *icon; // @synthesize icon=_icon;
@property (readonly, nonatomic) id<GEOTransitIconDataSource> iconDataSource;
@property (strong, nonatomic) MSPTransitStorageShield *iconFallbackShield; // @synthesize iconFallbackShield=_iconFallbackShield;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property (strong, nonatomic) MSPTransitStorageShield *shield; // @synthesize shield=_shield;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> shieldDataSource;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<GEOTransitTextDataSource> textDataSource;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsArtworkSourceType:(id)arg1;
- (int)StringAsArtworkUseType:(id)arg1;
- (id)artworkSourceTypeAsString:(int)arg1;
- (id)artworkUseTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithArtwork:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
