//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOPlace, GEOPlaceSearchRequest, NSMutableArray, NSString;

@interface GEOPlaceResult : PBCodable <NSCopying>
{
    unsigned long long _flyoverTourMuid;
    NSMutableArray *_additionalPlaces;
    int _cacheControl;
    NSMutableArray *_disambiguationLabels;
    NSMutableArray *_matchedTokens;
    NSMutableArray *_namedFeatures;
    GEOPlace *_place;
    NSString *_quad;
    GEOPlaceSearchRequest *_revgeoRequestTemplate;
    NSString *_suggestedQuery;
    GEOAddress *_tokenEntity;
    unsigned int _travelDistance;
    unsigned int _travelTime;
    NSMutableArray *_unmatchedStrings;
    struct {
        unsigned int flyoverTourMuid:1;
        unsigned int cacheControl:1;
        unsigned int travelDistance:1;
        unsigned int travelTime:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *additionalPlaces; // @synthesize additionalPlaces=_additionalPlaces;
@property (nonatomic) int cacheControl; // @synthesize cacheControl=_cacheControl;
@property (strong, nonatomic) NSMutableArray *disambiguationLabels; // @synthesize disambiguationLabels=_disambiguationLabels;
@property (nonatomic) unsigned long long flyoverTourMuid; // @synthesize flyoverTourMuid=_flyoverTourMuid;
@property (nonatomic) BOOL hasCacheControl;
@property (nonatomic) BOOL hasFlyoverTourMuid;
@property (readonly, nonatomic) BOOL hasQuad;
@property (readonly, nonatomic) BOOL hasRevgeoRequestTemplate;
@property (readonly, nonatomic) BOOL hasSuggestedQuery;
@property (readonly, nonatomic) BOOL hasTokenEntity;
@property (nonatomic) BOOL hasTravelDistance;
@property (nonatomic) BOOL hasTravelTime;
@property (strong, nonatomic) NSMutableArray *matchedTokens; // @synthesize matchedTokens=_matchedTokens;
@property (strong, nonatomic) NSMutableArray *namedFeatures; // @synthesize namedFeatures=_namedFeatures;
@property (strong, nonatomic) GEOPlace *place; // @synthesize place=_place;
@property (strong, nonatomic) NSString *quad; // @synthesize quad=_quad;
@property (strong, nonatomic) GEOPlaceSearchRequest *revgeoRequestTemplate; // @synthesize revgeoRequestTemplate=_revgeoRequestTemplate;
@property (strong, nonatomic) NSString *suggestedQuery; // @synthesize suggestedQuery=_suggestedQuery;
@property (strong, nonatomic) GEOAddress *tokenEntity; // @synthesize tokenEntity=_tokenEntity;
@property (nonatomic) unsigned int travelDistance; // @synthesize travelDistance=_travelDistance;
@property (nonatomic) unsigned int travelTime; // @synthesize travelTime=_travelTime;
@property (strong, nonatomic) NSMutableArray *unmatchedStrings; // @synthesize unmatchedStrings=_unmatchedStrings;

+ (Class)additionalPlaceType;
+ (Class)disambiguationLabelType;
+ (Class)matchedTokenType;
+ (Class)namedFeatureType;
+ (Class)unmatchedStringType;
- (int)StringAsCacheControl:(id)arg1;
- (void)addAdditionalPlace:(id)arg1;
- (void)addDisambiguationLabel:(id)arg1;
- (void)addMatchedToken:(id)arg1;
- (void)addNamedFeature:(id)arg1;
- (void)addUnmatchedString:(id)arg1;
- (id)additionalPlaceAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalPlacesCount;
- (id)cacheControlAsString:(int)arg1;
- (void)clearAdditionalPlaces;
- (void)clearDisambiguationLabels;
- (void)clearMatchedTokens;
- (void)clearNamedFeatures;
- (void)clearUnmatchedStrings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (id)geoMapItem;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)matchedTokenAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedTokensCount;
- (void)mergeFrom:(id)arg1;
- (id)namedFeatureAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedFeaturesCount;
- (BOOL)readFrom:(id)arg1;
- (id)unmatchedStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)unmatchedStringsCount;
- (void)writeTo:(id)arg1;

@end

