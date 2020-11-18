//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDEntity : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_altFaxs;
    NSMutableArray *_altTelephones;
    NSMutableArray *_altUrls;
    int _displayStyle;
    NSString *_fax;
    NSMutableArray *_localizedCategorys;
    NSMutableArray *_names;
    int _placeDisplayType;
    int _searchSection;
    NSMutableArray *_spokenNames;
    NSString *_telephone;
    int _type;
    NSString *_url;
    BOOL _altTelephoneAdsOptOut;
    BOOL _isDisputed;
    BOOL _isPermanentlyClosed;
    BOOL _isStandaloneBrand;
    BOOL _telephoneAdsOptOut;
    struct {
        unsigned int displayStyle:1;
        unsigned int placeDisplayType:1;
        unsigned int searchSection:1;
        unsigned int type:1;
        unsigned int altTelephoneAdsOptOut:1;
        unsigned int isDisputed:1;
        unsigned int isPermanentlyClosed:1;
        unsigned int isStandaloneBrand:1;
        unsigned int telephoneAdsOptOut:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *altFaxs; // @synthesize altFaxs=_altFaxs;
@property (nonatomic) BOOL altTelephoneAdsOptOut; // @synthesize altTelephoneAdsOptOut=_altTelephoneAdsOptOut;
@property (strong, nonatomic) NSMutableArray *altTelephones; // @synthesize altTelephones=_altTelephones;
@property (strong, nonatomic) NSMutableArray *altUrls; // @synthesize altUrls=_altUrls;
@property (nonatomic) int displayStyle; // @synthesize displayStyle=_displayStyle;
@property (strong, nonatomic) NSString *fax; // @synthesize fax=_fax;
@property (nonatomic) BOOL hasAltTelephoneAdsOptOut;
@property (nonatomic) BOOL hasDisplayStyle;
@property (readonly, nonatomic) BOOL hasFax;
@property (nonatomic) BOOL hasIsDisputed;
@property (nonatomic) BOOL hasIsPermanentlyClosed;
@property (nonatomic) BOOL hasIsStandaloneBrand;
@property (nonatomic) BOOL hasPlaceDisplayType;
@property (nonatomic) BOOL hasSearchSection;
@property (readonly, nonatomic) BOOL hasTelephone;
@property (nonatomic) BOOL hasTelephoneAdsOptOut;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUrl;
@property (nonatomic) BOOL isDisputed; // @synthesize isDisputed=_isDisputed;
@property (nonatomic) BOOL isPermanentlyClosed; // @synthesize isPermanentlyClosed=_isPermanentlyClosed;
@property (nonatomic) BOOL isStandaloneBrand; // @synthesize isStandaloneBrand=_isStandaloneBrand;
@property (strong, nonatomic) NSMutableArray *localizedCategorys; // @synthesize localizedCategorys=_localizedCategorys;
@property (strong, nonatomic) NSMutableArray *names; // @synthesize names=_names;
@property (nonatomic) int placeDisplayType; // @synthesize placeDisplayType=_placeDisplayType;
@property (nonatomic) int searchSection; // @synthesize searchSection=_searchSection;
@property (strong, nonatomic) NSMutableArray *spokenNames; // @synthesize spokenNames=_spokenNames;
@property (strong, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property (nonatomic) BOOL telephoneAdsOptOut; // @synthesize telephoneAdsOptOut=_telephoneAdsOptOut;
@property (nonatomic) int type; // @synthesize type=_type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSString *url; // @synthesize url=_url;

+ (Class)altFaxType;
+ (Class)altTelephoneType;
+ (Class)altUrlType;
+ (id)entityForPlaceData:(id)arg1;
+ (Class)localizedCategoryType;
+ (Class)nameType;
+ (Class)spokenNameType;
- (void).cxx_destruct;
- (int)StringAsDisplayStyle:(id)arg1;
- (int)StringAsPlaceDisplayType:(id)arg1;
- (int)StringAsSearchSection:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addAltFax:(id)arg1;
- (void)addAltTelephone:(id)arg1;
- (void)addAltUrl:(id)arg1;
- (void)addLocalizedCategory:(id)arg1;
- (void)addName:(id)arg1;
- (void)addSpokenName:(id)arg1;
- (id)altFaxAtIndex:(unsigned long long)arg1;
- (unsigned long long)altFaxsCount;
- (id)altTelephoneAtIndex:(unsigned long long)arg1;
- (unsigned long long)altTelephonesCount;
- (id)altUrlAtIndex:(unsigned long long)arg1;
- (unsigned long long)altUrlsCount;
- (id)bestLocalizedName;
- (void)clearAltFaxs;
- (void)clearAltTelephones;
- (void)clearAltUrls;
- (void)clearLocalizedCategorys;
- (void)clearNames;
- (void)clearSpokenNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayStyleAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategorysCount;
- (void)mergeFrom:(id)arg1;
- (id)nameAtIndex:(unsigned long long)arg1;
- (unsigned long long)namesCount;
- (id)placeDisplayTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)searchSectionAsString:(int)arg1;
- (id)spokenNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenNamesCount;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
