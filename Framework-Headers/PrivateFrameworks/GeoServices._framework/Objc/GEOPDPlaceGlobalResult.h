//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteResult, GEOPDBatchPopularNearbySearchResult, GEOPDCanonicalLocationSearchResult, GEOPDCategorySearchResult, GEOPDGeocodingResult, GEOPDLocationDirectedSearchResult, GEOPDMerchantLookupResult, GEOPDNearbySearchResult, GEOPDPlaceLookupResult, GEOPDPlaceRefinementResult, GEOPDPopularNearbySearchResult, GEOPDReverseGeocodingResult, GEOPDSearchBrowseCategorySuggestionResult, GEOPDSearchFieldPlaceholderResult, GEOPDSearchResult, GEOPDSearchZeroKeywordCategorySuggestionResult, GEOPDSiriSearchResult, GEOPDVendorSpecificPlaceRefinementResult;

@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying>
{
    GEOPDAutocompleteResult *_autocompleteResult;
    GEOPDBatchPopularNearbySearchResult *_batchPopularNearbySearchResult;
    GEOPDSearchBrowseCategorySuggestionResult *_browseCategorySuggestionResult;
    GEOPDCanonicalLocationSearchResult *_canonicalSearchResult;
    GEOPDCategorySearchResult *_categorySearchResult;
    GEOPDGeocodingResult *_geocodingResult;
    GEOPDLocationDirectedSearchResult *_locationDirectedSearchResult;
    GEOPDMerchantLookupResult *_merchantLookupResult;
    GEOPDNearbySearchResult *_nearbySearchResult;
    GEOPDPlaceLookupResult *_placeLookupResult;
    GEOPDPlaceRefinementResult *_placeRefinementResult;
    GEOPDPopularNearbySearchResult *_popularNearbySearchResult;
    GEOPDReverseGeocodingResult *_reverseGeocodingResult;
    GEOPDSearchFieldPlaceholderResult *_searchFieldPlaceholderResult;
    GEOPDSearchResult *_searchResult;
    GEOPDSearchZeroKeywordCategorySuggestionResult *_searchZeroKeywordCategorySuggestionResult;
    GEOPDSiriSearchResult *_siriSearchResult;
    GEOPDVendorSpecificPlaceRefinementResult *_vendorSpecificPlaceRefinementResult;
}

@property (strong, nonatomic) GEOPDAutocompleteResult *autocompleteResult; // @synthesize autocompleteResult=_autocompleteResult;
@property (strong, nonatomic) GEOPDBatchPopularNearbySearchResult *batchPopularNearbySearchResult; // @synthesize batchPopularNearbySearchResult=_batchPopularNearbySearchResult;
@property (strong, nonatomic) GEOPDSearchBrowseCategorySuggestionResult *browseCategorySuggestionResult; // @synthesize browseCategorySuggestionResult=_browseCategorySuggestionResult;
@property (strong, nonatomic) GEOPDCanonicalLocationSearchResult *canonicalSearchResult; // @synthesize canonicalSearchResult=_canonicalSearchResult;
@property (strong, nonatomic) GEOPDCategorySearchResult *categorySearchResult; // @synthesize categorySearchResult=_categorySearchResult;
@property (strong, nonatomic) GEOPDGeocodingResult *geocodingResult; // @synthesize geocodingResult=_geocodingResult;
@property (readonly, nonatomic) BOOL hasAutocompleteResult;
@property (readonly, nonatomic) BOOL hasBatchPopularNearbySearchResult;
@property (readonly, nonatomic) BOOL hasBrowseCategorySuggestionResult;
@property (readonly, nonatomic) BOOL hasCanonicalSearchResult;
@property (readonly, nonatomic) BOOL hasCategorySearchResult;
@property (readonly, nonatomic) BOOL hasGeocodingResult;
@property (readonly, nonatomic) BOOL hasLocationDirectedSearchResult;
@property (readonly, nonatomic) BOOL hasMerchantLookupResult;
@property (readonly, nonatomic) BOOL hasNearbySearchResult;
@property (readonly, nonatomic) BOOL hasPlaceLookupResult;
@property (readonly, nonatomic) BOOL hasPlaceRefinementResult;
@property (readonly, nonatomic) BOOL hasPopularNearbySearchResult;
@property (readonly, nonatomic) BOOL hasReverseGeocodingResult;
@property (readonly, nonatomic) BOOL hasSearchFieldPlaceholderResult;
@property (readonly, nonatomic) BOOL hasSearchResult;
@property (readonly, nonatomic) BOOL hasSearchZeroKeywordCategorySuggestionResult;
@property (readonly, nonatomic) BOOL hasSiriSearchResult;
@property (readonly, nonatomic) BOOL hasVendorSpecificPlaceRefinementResult;
@property (strong, nonatomic) GEOPDLocationDirectedSearchResult *locationDirectedSearchResult; // @synthesize locationDirectedSearchResult=_locationDirectedSearchResult;
@property (strong, nonatomic) GEOPDMerchantLookupResult *merchantLookupResult; // @synthesize merchantLookupResult=_merchantLookupResult;
@property (strong, nonatomic) GEOPDNearbySearchResult *nearbySearchResult; // @synthesize nearbySearchResult=_nearbySearchResult;
@property (strong, nonatomic) GEOPDPlaceLookupResult *placeLookupResult; // @synthesize placeLookupResult=_placeLookupResult;
@property (strong, nonatomic) GEOPDPlaceRefinementResult *placeRefinementResult; // @synthesize placeRefinementResult=_placeRefinementResult;
@property (strong, nonatomic) GEOPDPopularNearbySearchResult *popularNearbySearchResult; // @synthesize popularNearbySearchResult=_popularNearbySearchResult;
@property (strong, nonatomic) GEOPDReverseGeocodingResult *reverseGeocodingResult; // @synthesize reverseGeocodingResult=_reverseGeocodingResult;
@property (strong, nonatomic) GEOPDSearchFieldPlaceholderResult *searchFieldPlaceholderResult; // @synthesize searchFieldPlaceholderResult=_searchFieldPlaceholderResult;
@property (strong, nonatomic) GEOPDSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property (strong, nonatomic) GEOPDSearchZeroKeywordCategorySuggestionResult *searchZeroKeywordCategorySuggestionResult; // @synthesize searchZeroKeywordCategorySuggestionResult=_searchZeroKeywordCategorySuggestionResult;
@property (strong, nonatomic) GEOPDSiriSearchResult *siriSearchResult; // @synthesize siriSearchResult=_siriSearchResult;
@property (strong, nonatomic) GEOPDVendorSpecificPlaceRefinementResult *vendorSpecificPlaceRefinementResult; // @synthesize vendorSpecificPlaceRefinementResult=_vendorSpecificPlaceRefinementResult;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

