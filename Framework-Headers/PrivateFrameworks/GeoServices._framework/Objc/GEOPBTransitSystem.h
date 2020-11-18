//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitNamedItem-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitArtwork, GEOStyleAttributes, NSString;

@interface GEOPBTransitSystem : PBCodable <GEOTransitNamedItem, NSCopying>
{
    unsigned long long _muid;
    GEOPBTransitArtwork *_artwork;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _systemIndex;
    NSString *_website;
    struct {
        unsigned int muid:1;
        unsigned int systemIndex:1;
    } _has;
}

@property (strong, nonatomic) GEOPBTransitArtwork *artwork; // @synthesize artwork=_artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasNameDisplayString;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (nonatomic) BOOL hasSystemIndex;
@property (readonly, nonatomic) BOOL hasWebsite;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property (strong, nonatomic) NSString *nameDisplayString; // @synthesize nameDisplayString=_nameDisplayString;
@property (strong, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemIndex; // @synthesize systemIndex=_systemIndex;
@property (strong, nonatomic) NSString *website; // @synthesize website=_website;

- (id)bestName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)geoTransitSystem;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

