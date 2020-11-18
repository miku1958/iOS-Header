//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapItemInitialRequestData, GEOPDMapsIdentifier, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDPlace : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_components;
    unsigned long long _createdTime;
    GEOPDMapsIdentifier *_mapsId;
    unsigned long long _muid;
    NSString *_placeCacheKey;
    unsigned long long _preferredMuid;
    GEOMapItemInitialRequestData *_requestData;
    unsigned long long _updateVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _referenceFrame;
    int _resultProviderId;
    int _status;
    struct {
        unsigned int has_createdTime:1;
        unsigned int has_muid:1;
        unsigned int has_preferredMuid:1;
        unsigned int has_updateVersion:1;
        unsigned int has_referenceFrame:1;
        unsigned int has_resultProviderId:1;
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_components:1;
        unsigned int read_mapsId:1;
        unsigned int read_placeCacheKey:1;
        unsigned int read_requestData:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *components;
@property (nonatomic) unsigned long long createdTime;
@property (nonatomic) BOOL hasCreatedTime;
@property (readonly, nonatomic) BOOL hasMapsId;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasPlaceCacheKey;
@property (nonatomic) BOOL hasPreferredMuid;
@property (nonatomic) BOOL hasReferenceFrame;
@property (readonly, nonatomic) BOOL hasRequestData;
@property (nonatomic) BOOL hasResultProviderId;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasUpdateVersion;
@property (strong, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) unsigned long long muid;
@property (strong, nonatomic) NSString *placeCacheKey;
@property (nonatomic) unsigned long long preferredMuid;
@property (nonatomic) int referenceFrame;
@property (strong, nonatomic) GEOMapItemInitialRequestData *requestData;
@property (nonatomic) int resultProviderId;
@property (nonatomic) int status;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned long long updateVersion;

+ (id)attributionForPlaceData:(id)arg1 type:(int)arg2;
+ (Class)componentType;
+ (id)componentTypesFromComponentInfos:(id)arg1;
+ (id)failedPlaceData;
+ (id)failedPlaceDataForMuid:(unsigned long long)arg1;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsReferenceFrame:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg1;
- (id)_entityName;
- (BOOL)_isKey:(id)arg1 subsetOf:(id)arg2;
- (void)_removeETAComponents;
- (void)addComponent:(id)arg1;
- (id)bestName;
- (unsigned long long)brandMUID;
- (id)businessURL;
- (id)cacheKey;
- (void)clearComponents;
- (void)clearSensitiveFields;
- (void)clearUnknownFields:(BOOL)arg1;
- (id)compactDebugDescription;
- (id)componentAtIndex:(unsigned long long)arg1;
- (id)componentOfType:(int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)componentsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithStrippedOptionalData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithoutETAComponents;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityComponent;
- (void)enumerateComponentOfType:(int)arg1 enumerationOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateComponentValuesOfType:(int)arg1 enumerationOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateComponentsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateValidComponentValuesOfType:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateValidComponentWithValuesOfType:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateValidComponentsWithValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)geoMapItem;
- (id)geoMapItemWithDetourInfo:(id)arg1;
- (BOOL)hasBrandMUID;
- (BOOL)hasExpectedComponentTypes:(id)arg1;
- (BOOL)hasExpiredComponentsAsOf:(double)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isCacheable;
- (BOOL)isDisputed;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isStandAloneBrand;
- (id)jsonRepresentation;
- (BOOL)meetsManifestVersioningForServiceVersion:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minTTL;
- (id)pdPlaceCacheKeyForRequest:(id)arg1;
- (BOOL)phoneNumberOptsOutOfAds:(id)arg1;
- (id)phoneNumbers;
- (int)placeDisplayType;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)referenceFrameAsString:(int)arg1;
- (id)secondaryName;
- (id)secondarySpokenName;
- (void)setFirstSeenTimestamp:(double)arg1;
- (BOOL)shouldCacheByIDForRequest:(id)arg1;
- (id)spokenNameForLocale:(id)arg1;
- (id)statusAsString:(int)arg1;
- (BOOL)statusCodeIsValid;
- (id)successfulComponentWithValuesOfType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
