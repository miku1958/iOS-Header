//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, GEOPDPlaceRequestParameters, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDPlaceRequest : PBRequest <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEOPDClientMetadata *_clientMetadata;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    int _requestType;
    NSMutableArray *_requestedComponents;
    NSMutableArray *_spokenLanguages;
    BOOL _needLatency;
    BOOL _suppressResultsRequiringAttribution;
    struct {
        unsigned int requestType:1;
        unsigned int needLatency:1;
        unsigned int suppressResultsRequiringAttribution:1;
    } _has;
}

@property (strong, nonatomic) GEOPDAnalyticMetadata *analyticMetadata; // @synthesize analyticMetadata=_analyticMetadata;
@property (strong, nonatomic) GEOPDClientMetadata *clientMetadata; // @synthesize clientMetadata=_clientMetadata;
@property (strong, nonatomic) NSMutableArray *displayLanguages; // @synthesize displayLanguages=_displayLanguages;
@property (strong, nonatomic) NSString *displayRegion; // @synthesize displayRegion=_displayRegion;
@property (readonly, nonatomic) BOOL hasAnalyticMetadata;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (nonatomic) BOOL hasNeedLatency;
@property (readonly, nonatomic) BOOL hasPlaceRequestParameters;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) BOOL hasSuppressResultsRequiringAttribution;
@property (nonatomic) BOOL needLatency;
@property (strong, nonatomic) GEOPDPlaceRequestParameters *placeRequestParameters; // @synthesize placeRequestParameters=_placeRequestParameters;
@property (nonatomic) int requestType; // @synthesize requestType=_requestType;
@property (strong, nonatomic) NSMutableArray *requestedComponents; // @synthesize requestedComponents=_requestedComponents;
@property (strong, nonatomic) NSMutableArray *spokenLanguages; // @synthesize spokenLanguages=_spokenLanguages;
@property (nonatomic) BOOL suppressResultsRequiringAttribution; // @synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)displayLanguageType;
+ (Class)requestedComponentType;
+ (Class)spokenLanguageType;
- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (id)_initWithTraits:(id)arg1;
- (void)addDisplayLanguage:(id)arg1;
- (void)addRequestedComponent:(id)arg1;
- (void)addRequestedComponentIfNotNil:(id)arg1;
- (void)addSpokenLanguage:(id)arg1;
- (void)clearDisplayLanguages;
- (void)clearRequestedComponents;
- (void)clearSpokenLanguages;
- (id)componentInfoWithType:(int)arg1 count:(unsigned int)arg2 traits:(id)arg3;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (int)geoUserPreferredTransportType;
- (BOOL)hasResultProviderID;
- (unsigned long long)hash;
- (id)initForAutocompleteWithTraits:(id)arg1 count:(unsigned int)arg2;
- (id)initForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2;
- (id)initForCategoryListWithTraits:(id)arg1;
- (id)initForDFRCategoryListWithTraits:(id)arg1;
- (id)initForDatasetCheckWithTraits:(id)arg1;
- (id)initForGeoIpLookupWithIpAddress:(id)arg1 traits:(id)arg2;
- (id)initForNearestTransitStationWithLine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 traits:(id)arg3;
- (id)initForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)initForSpotlightCategoryListWithTraits:(id)arg1;
- (id)initForWifiFingerprintLookupWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned int)arg3 entryTime:(unsigned long long)arg4 exitTime:(unsigned long long)arg5 traits:(id)arg6;
- (id)initWithAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 categoryFilter:(id)arg4 retainedSearch:(id)arg5;
- (id)initWithBatchPopularNearbySearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithBrandMUID:(unsigned long long)arg1 traits:(id)arg2;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)initWithCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithCategory:(id)arg1 routeInfo:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3;
- (id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 traits:(id)arg8;
- (id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithPopularNearbySearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 floorOrdinal:(int)arg2 includeEntryPoints:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5;
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 includeEntryPoints:(BOOL)arg2 preserveOriginalLocation:(BOOL)arg3 traits:(id)arg4;
- (id)initWithSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned int)arg6 suppressResultsRequiringAttribution:(BOOL)arg7 traits:(id)arg8;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)initWithSpatialEventLookupParameters:(id)arg1 traits:(id)arg2;
- (id)initWithSpatialPlaceLookupParameters:(id)arg1 traits:(id)arg2;
- (id)initWithTraits:(id)arg1 count:(unsigned int)arg2 includeEntryPoints:(BOOL)arg3;
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (BOOL)isAlwaysCacheable;
- (BOOL)isBrandLookupRequest;
- (BOOL)isCanonicalLocationSearchRequest;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isForwardGeocoderRequest;
- (BOOL)isMerchantRequest;
- (BOOL)isPlaceRefinementRequest;
- (void)mergeFrom:(id)arg1;
- (id)pdSpatialEventLookupParametersArrayForParameters:(id)arg1;
- (id)pdSpatialEventLookupParametersForParameters:(id)arg1;
- (id)pdSpatialPlaceLookupParametersArrayForParameters:(id)arg1;
- (id)pdSpatialPlaceLookupParametersForParameters:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
- (unsigned int)requestTypeCode;
- (id)requestedComponentAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestedComponentsCount;
- (Class)responseClass;
- (int)resultProviderID;
- (BOOL)shouldConsiderCaching;
- (id)spokenLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenLanguagesCount;
- (void)writeTo:(id)arg1;

@end

