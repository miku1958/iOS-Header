//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBUnknownFields;

@interface GEOBusiness : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _uID;
    NSMutableArray *_attributeKeyValues;
    NSMutableArray *_attributions;
    NSMutableArray *_categorys;
    GEOLatLng *_center;
    NSMutableArray *_localizedCategories;
    NSString *_mapsURL;
    NSString *_name;
    NSMutableArray *_openHours;
    NSString *_phoneticName;
    NSMutableArray *_photos;
    NSMutableArray *_placeDataAmendments;
    NSMutableArray *_ratings;
    NSMutableArray *_sources;
    NSMutableArray *_starRatings;
    NSString *_telephone;
    NSString *_uRL;
    BOOL _isClosed;
    struct {
        unsigned int uID:1;
        unsigned int isClosed:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *attributeKeyValues; // @synthesize attributeKeyValues=_attributeKeyValues;
@property (strong, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property (strong, nonatomic) NSMutableArray *categorys; // @synthesize categorys=_categorys;
@property (strong, nonatomic) GEOLatLng *center; // @synthesize center=_center;
@property (readonly, nonatomic) BOOL hasCenter;
@property (nonatomic) BOOL hasIsClosed;
@property (readonly, nonatomic) BOOL hasMapsURL;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPhoneticName;
@property (readonly, nonatomic) BOOL hasTelephone;
@property (nonatomic) BOOL hasUID;
@property (readonly, nonatomic) BOOL hasURL;
@property (nonatomic) BOOL isClosed; // @synthesize isClosed=_isClosed;
@property (strong, nonatomic) NSMutableArray *localizedCategories; // @synthesize localizedCategories=_localizedCategories;
@property (strong, nonatomic) NSString *mapsURL; // @synthesize mapsURL=_mapsURL;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSMutableArray *openHours; // @synthesize openHours=_openHours;
@property (strong, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property (strong, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property (strong, nonatomic) NSMutableArray *placeDataAmendments; // @synthesize placeDataAmendments=_placeDataAmendments;
@property (strong, nonatomic) NSMutableArray *ratings; // @synthesize ratings=_ratings;
@property (strong, nonatomic) NSMutableArray *sources; // @synthesize sources=_sources;
@property (strong, nonatomic) NSMutableArray *starRatings; // @synthesize starRatings=_starRatings;
@property (strong, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property (nonatomic) unsigned long long uID; // @synthesize uID=_uID;
@property (strong, nonatomic) NSString *uRL; // @synthesize uRL=_uRL;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)attributeKeyValueType;
+ (Class)attributionType;
+ (Class)categoryType;
+ (Class)localizedCategoriesType;
+ (Class)openHoursType;
+ (Class)photoType;
+ (Class)placeDataAmendmentType;
+ (Class)ratingType;
+ (Class)sourceType;
+ (Class)starRatingType;
- (void).cxx_destruct;
- (void)addAttributeKeyValue:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)addCategory:(id)arg1;
- (void)addLocalizedCategories:(id)arg1;
- (void)addOpenHours:(id)arg1;
- (void)addPhoto:(id)arg1;
- (void)addPlaceDataAmendment:(id)arg1;
- (void)addRating:(id)arg1;
- (void)addSource:(id)arg1;
- (void)addStarRating:(id)arg1;
- (id)attributeKeyValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributeKeyValuesCount;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)categorysCount;
- (void)clearAttributeKeyValues;
- (void)clearAttributions;
- (void)clearCategorys;
- (void)clearLocalizedCategories;
- (void)clearOpenHours;
- (void)clearPhotos;
- (void)clearPlaceDataAmendments;
- (void)clearRatings;
- (void)clearSources;
- (void)clearStarRatings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned int)arg5 normalizedUserRatingScore:(float)arg6;
- (id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5 entityAttribution:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (id)localizedCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategoriesCount;
- (void)mergeFrom:(id)arg1;
- (id)openHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)openHoursCount;
- (id)photoAtIndex:(unsigned long long)arg1;
- (unsigned long long)photosCount;
- (id)placeDataAmendmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeDataAmendmentsCount;
- (id)ratingAtIndex:(unsigned long long)arg1;
- (unsigned long long)ratingsCount;
- (BOOL)readFrom:(id)arg1;
- (id)sourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)sourcesCount;
- (id)starRatingAtIndex:(unsigned long long)arg1;
- (unsigned long long)starRatingsCount;
- (void)writeTo:(id)arg1;

@end

