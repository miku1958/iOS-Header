//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitNamedItem-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitArtwork, GEOPBTransitLineDisplayHints, GEOStyleAttributes, NSString, PBUnknownFields;

@interface GEOPBTransitLine : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    struct GEOPBTransitTimeRange *_operatingHours;
    unsigned long long _operatingHoursCount;
    unsigned long long _operatingHoursSpace;
    GEOPBTransitArtwork *_alternateArtwork;
    GEOPBTransitArtwork *_artwork;
    GEOPBTransitLineDisplayHints *_displayHints;
    int _guidanceSnappingType;
    NSString *_lineColor;
    unsigned int _lineIndex;
    GEOPBTransitArtwork *_modeArtwork;
    NSString *_nameDisplayString;
    int _placeDisplayStyle;
    int _preferredDepartureTimeStyle;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _systemIndex;
    int _transitType;
    struct {
        unsigned int muid:1;
        unsigned int guidanceSnappingType:1;
        unsigned int lineIndex:1;
        unsigned int placeDisplayStyle:1;
        unsigned int preferredDepartureTimeStyle:1;
        unsigned int systemIndex:1;
        unsigned int transitType:1;
    } _has;
}

@property (strong, nonatomic) GEOPBTransitArtwork *alternateArtwork; // @synthesize alternateArtwork=_alternateArtwork;
@property (strong, nonatomic) GEOPBTransitArtwork *artwork; // @synthesize artwork=_artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) GEOPBTransitLineDisplayHints *displayHints; // @synthesize displayHints=_displayHints;
@property (nonatomic) int guidanceSnappingType; // @synthesize guidanceSnappingType=_guidanceSnappingType;
@property (readonly, nonatomic) BOOL hasAlternateArtwork;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (readonly, nonatomic) BOOL hasDisplayHints;
@property (nonatomic) BOOL hasGuidanceSnappingType;
@property (readonly, nonatomic) BOOL hasLineColor;
@property (nonatomic) BOOL hasLineIndex;
@property (readonly, nonatomic) BOOL hasModeArtwork;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasNameDisplayString;
@property (nonatomic) BOOL hasPlaceDisplayStyle;
@property (nonatomic) BOOL hasPreferredDepartureTimeStyle;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (nonatomic) BOOL hasSystemIndex;
@property (nonatomic) BOOL hasTransitType;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *lineColor; // @synthesize lineColor=_lineColor;
@property (nonatomic) unsigned int lineIndex; // @synthesize lineIndex=_lineIndex;
@property (strong, nonatomic) GEOPBTransitArtwork *modeArtwork; // @synthesize modeArtwork=_modeArtwork;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property (strong, nonatomic) NSString *nameDisplayString; // @synthesize nameDisplayString=_nameDisplayString;
@property (readonly, nonatomic) struct GEOPBTransitTimeRange *operatingHours;
@property (readonly, nonatomic) unsigned long long operatingHoursCount;
@property (nonatomic) int placeDisplayStyle; // @synthesize placeDisplayStyle=_placeDisplayStyle;
@property (nonatomic) int preferredDepartureTimeStyle; // @synthesize preferredDepartureTimeStyle=_preferredDepartureTimeStyle;
@property (strong, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemIndex; // @synthesize systemIndex=_systemIndex;
@property (nonatomic) int transitType; // @synthesize transitType=_transitType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsGuidanceSnappingType:(id)arg1;
- (int)StringAsPlaceDisplayStyle:(id)arg1;
- (int)StringAsPreferredDepartureTimeStyle:(id)arg1;
- (void)addOperatingHours:(struct GEOPBTransitTimeRange)arg1;
- (id)bestName;
- (void)clearOperatingHours;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)geoTransitLineWithSystem:(id)arg1;
- (id)guidanceSnappingTypeAsString:(int)arg1;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (struct GEOPBTransitTimeRange)operatingHoursAtIndex:(unsigned long long)arg1;
- (id)placeDisplayStyleAsString:(int)arg1;
- (id)preferredDepartureTimeStyleAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setOperatingHours:(struct GEOPBTransitTimeRange *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
