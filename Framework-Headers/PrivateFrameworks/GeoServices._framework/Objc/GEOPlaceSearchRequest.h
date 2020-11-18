//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOAddress, GEOBusinessOptions, GEOClientCapabilities, GEOIndexQueryNode, GEOLatLng, GEOLocation, GEOMapRegion, GEOSuggestionsOptions, NSData, NSMutableArray, NSString;

@interface GEOPlaceSearchRequest : PBRequest <NSCopying>
{
    CDStruct_612aec5b _sessionGUID;
    CDStruct_95bda58d _additionalPlaceTypes;
    CDStruct_62a50c50 _businessIDs;
    CDStruct_95bda58d _optionalSuppressionReasons;
    CDStruct_0756942c _searchContextSubstring;
    CDStruct_0756942c *_searchSubstrings;
    unsigned long long _searchSubstringsCount;
    unsigned long long _searchSubstringsSpace;
    long long _geoId;
    unsigned long long _intersectingGeoId;
    double _timeSinceMapEnteredForeground;
    double _timeSinceMapViewportChanged;
    double _timestamp;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOAddress *_address;
    GEOBusinessOptions *_businessOptions;
    int _businessSortOrder;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_deviceCountryCode;
    GEOLatLng *_deviceLocation;
    NSString *_deviceTimeZone;
    NSMutableArray *_filterByBusinessCategorys;
    GEOIndexQueryNode *_indexFilter;
    NSString *_inputLanguage;
    int _knownAccuracy;
    GEOLatLng *_knownLocation;
    NSMutableArray *_limitToCountryCodeIso2s;
    int _localSearchProviderID;
    GEOLocation *_location;
    int _mapMode;
    GEOMapRegion *_mapRegion;
    int _maxBusinessReviews;
    int _maxResults;
    NSString *_phoneticLocaleIdentifier;
    int _placeTypeLimit;
    GEOAddress *_preserveFields;
    NSString *_search;
    NSString *_searchContext;
    GEOLatLng *_searchLocation;
    int _searchSource;
    int _sequenceNumber;
    NSMutableArray *_serviceTags;
    GEOSuggestionsOptions *_suggestionsOptions;
    NSString *_suggestionsPrefix;
    int _transportTypeForTravelTimes;
    NSData *_zilchPoints;
    BOOL _excludeAddressInResults;
    BOOL _includeBusinessCategories;
    BOOL _includeBusinessRating;
    BOOL _includeEntryPoints;
    BOOL _includeFeatureSets;
    BOOL _includeGeoId;
    BOOL _includeMatchedToken;
    BOOL _includeNameForForwardGeocodingResults;
    BOOL _includePhonetics;
    BOOL _includeQuads;
    BOOL _includeRevgeoRequestTemplate;
    BOOL _includeRoadAccessPoints;
    BOOL _includeSpokenNames;
    BOOL _includeStatusCodeInfo;
    BOOL _includeSuggestionsOnly;
    BOOL _includeTravelDistance;
    BOOL _includeTravelTime;
    BOOL _includeUnmatchedStrings;
    BOOL _isCanonicalLocationSearch;
    BOOL _isFromAPI;
    BOOL _isPopularNearbyRequest;
    BOOL _isStrictGeocoding;
    BOOL _isStrictMapRegion;
    BOOL _structuredSearch;
    BOOL _suppressResultsRequiringAttribution;
    struct {
        unsigned int sessionGUID:1;
        unsigned int searchContextSubstring:1;
        unsigned int geoId:1;
        unsigned int intersectingGeoId:1;
        unsigned int timeSinceMapEnteredForeground:1;
        unsigned int timeSinceMapViewportChanged:1;
        unsigned int timestamp:1;
        unsigned int businessSortOrder:1;
        unsigned int knownAccuracy:1;
        unsigned int localSearchProviderID:1;
        unsigned int mapMode:1;
        unsigned int maxBusinessReviews:1;
        unsigned int maxResults:1;
        unsigned int placeTypeLimit:1;
        unsigned int searchSource:1;
        unsigned int sequenceNumber:1;
        unsigned int transportTypeForTravelTimes:1;
        unsigned int excludeAddressInResults:1;
        unsigned int includeBusinessCategories:1;
        unsigned int includeBusinessRating:1;
        unsigned int includeEntryPoints:1;
        unsigned int includeFeatureSets:1;
        unsigned int includeGeoId:1;
        unsigned int includeMatchedToken:1;
        unsigned int includeNameForForwardGeocodingResults:1;
        unsigned int includePhonetics:1;
        unsigned int includeQuads:1;
        unsigned int includeRevgeoRequestTemplate:1;
        unsigned int includeRoadAccessPoints:1;
        unsigned int includeSpokenNames:1;
        unsigned int includeStatusCodeInfo:1;
        unsigned int includeSuggestionsOnly:1;
        unsigned int includeTravelDistance:1;
        unsigned int includeTravelTime:1;
        unsigned int includeUnmatchedStrings:1;
        unsigned int isCanonicalLocationSearch:1;
        unsigned int isFromAPI:1;
        unsigned int isPopularNearbyRequest:1;
        unsigned int isStrictGeocoding:1;
        unsigned int isStrictMapRegion:1;
        unsigned int structuredSearch:1;
        unsigned int suppressResultsRequiringAttribution:1;
    } _has;
}

@property (strong, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property (readonly, nonatomic) int *additionalPlaceTypes;
@property (readonly, nonatomic) unsigned long long additionalPlaceTypesCount;
@property (strong, nonatomic) GEOAddress *address; // @synthesize address=_address;
@property (readonly, nonatomic) unsigned long long *businessIDs;
@property (readonly, nonatomic) unsigned long long businessIDsCount;
@property (strong, nonatomic) GEOBusinessOptions *businessOptions; // @synthesize businessOptions=_businessOptions;
@property (nonatomic) int businessSortOrder; // @synthesize businessSortOrder=_businessSortOrder;
@property (strong, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property (strong, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
@property (strong, nonatomic) GEOLatLng *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property (strong, nonatomic) NSString *deviceTimeZone; // @synthesize deviceTimeZone=_deviceTimeZone;
@property (nonatomic) BOOL excludeAddressInResults; // @synthesize excludeAddressInResults=_excludeAddressInResults;
@property (strong, nonatomic) NSMutableArray *filterByBusinessCategorys; // @synthesize filterByBusinessCategorys=_filterByBusinessCategorys;
@property (nonatomic) long long geoId; // @synthesize geoId=_geoId;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (readonly, nonatomic) BOOL hasAddress;
@property (readonly, nonatomic) BOOL hasBusinessOptions;
@property (nonatomic) BOOL hasBusinessSortOrder;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceLocation;
@property (readonly, nonatomic) BOOL hasDeviceTimeZone;
@property (nonatomic) BOOL hasExcludeAddressInResults;
@property (nonatomic) BOOL hasGeoId;
@property (nonatomic) BOOL hasIncludeBusinessCategories;
@property (nonatomic) BOOL hasIncludeBusinessRating;
@property (nonatomic) BOOL hasIncludeEntryPoints;
@property (nonatomic) BOOL hasIncludeFeatureSets;
@property (nonatomic) BOOL hasIncludeGeoId;
@property (nonatomic) BOOL hasIncludeMatchedToken;
@property (nonatomic) BOOL hasIncludeNameForForwardGeocodingResults;
@property (nonatomic) BOOL hasIncludePhonetics;
@property (nonatomic) BOOL hasIncludeQuads;
@property (nonatomic) BOOL hasIncludeRevgeoRequestTemplate;
@property (nonatomic) BOOL hasIncludeRoadAccessPoints;
@property (nonatomic) BOOL hasIncludeSpokenNames;
@property (nonatomic) BOOL hasIncludeStatusCodeInfo;
@property (nonatomic) BOOL hasIncludeSuggestionsOnly;
@property (nonatomic) BOOL hasIncludeTravelDistance;
@property (nonatomic) BOOL hasIncludeTravelTime;
@property (nonatomic) BOOL hasIncludeUnmatchedStrings;
@property (readonly, nonatomic) BOOL hasIndexFilter;
@property (readonly, nonatomic) BOOL hasInputLanguage;
@property (nonatomic) BOOL hasIntersectingGeoId;
@property (nonatomic) BOOL hasIsCanonicalLocationSearch;
@property (nonatomic) BOOL hasIsFromAPI;
@property (nonatomic) BOOL hasIsPopularNearbyRequest;
@property (nonatomic) BOOL hasIsStrictGeocoding;
@property (nonatomic) BOOL hasIsStrictMapRegion;
@property (nonatomic) BOOL hasKnownAccuracy;
@property (readonly, nonatomic) BOOL hasKnownLocation;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasMapMode;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (nonatomic) BOOL hasMaxBusinessReviews;
@property (nonatomic) BOOL hasMaxResults;
@property (readonly, nonatomic) BOOL hasPhoneticLocaleIdentifier;
@property (nonatomic) BOOL hasPlaceTypeLimit;
@property (readonly, nonatomic) BOOL hasPreserveFields;
@property (readonly, nonatomic) BOOL hasSearch;
@property (readonly, nonatomic) BOOL hasSearchContext;
@property (nonatomic) BOOL hasSearchContextSubstring;
@property (readonly, nonatomic) BOOL hasSearchLocation;
@property (nonatomic) BOOL hasSearchSource;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSessionGUID;
@property (nonatomic) BOOL hasStructuredSearch;
@property (readonly, nonatomic) BOOL hasSuggestionsOptions;
@property (readonly, nonatomic) BOOL hasSuggestionsPrefix;
@property (nonatomic) BOOL hasSuppressResultsRequiringAttribution;
@property (nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property (nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransportTypeForTravelTimes;
@property (readonly, nonatomic) BOOL hasZilchPoints;
@property (nonatomic) BOOL includeBusinessCategories; // @synthesize includeBusinessCategories=_includeBusinessCategories;
@property (nonatomic) BOOL includeBusinessRating; // @synthesize includeBusinessRating=_includeBusinessRating;
@property (nonatomic) BOOL includeEntryPoints; // @synthesize includeEntryPoints=_includeEntryPoints;
@property (nonatomic) BOOL includeFeatureSets; // @synthesize includeFeatureSets=_includeFeatureSets;
@property (nonatomic) BOOL includeGeoId; // @synthesize includeGeoId=_includeGeoId;
@property (nonatomic) BOOL includeMatchedToken; // @synthesize includeMatchedToken=_includeMatchedToken;
@property (nonatomic) BOOL includeNameForForwardGeocodingResults; // @synthesize includeNameForForwardGeocodingResults=_includeNameForForwardGeocodingResults;
@property (nonatomic) BOOL includePhonetics; // @synthesize includePhonetics=_includePhonetics;
@property (nonatomic) BOOL includeQuads; // @synthesize includeQuads=_includeQuads;
@property (nonatomic) BOOL includeRevgeoRequestTemplate; // @synthesize includeRevgeoRequestTemplate=_includeRevgeoRequestTemplate;
@property (nonatomic) BOOL includeRoadAccessPoints; // @synthesize includeRoadAccessPoints=_includeRoadAccessPoints;
@property (nonatomic) BOOL includeSpokenNames; // @synthesize includeSpokenNames=_includeSpokenNames;
@property (nonatomic) BOOL includeStatusCodeInfo; // @synthesize includeStatusCodeInfo=_includeStatusCodeInfo;
@property (nonatomic) BOOL includeSuggestionsOnly; // @synthesize includeSuggestionsOnly=_includeSuggestionsOnly;
@property (nonatomic) BOOL includeTravelDistance; // @synthesize includeTravelDistance=_includeTravelDistance;
@property (nonatomic) BOOL includeTravelTime; // @synthesize includeTravelTime=_includeTravelTime;
@property (nonatomic) BOOL includeUnmatchedStrings; // @synthesize includeUnmatchedStrings=_includeUnmatchedStrings;
@property (strong, nonatomic) GEOIndexQueryNode *indexFilter; // @synthesize indexFilter=_indexFilter;
@property (strong, nonatomic) NSString *inputLanguage; // @synthesize inputLanguage=_inputLanguage;
@property (nonatomic) unsigned long long intersectingGeoId; // @synthesize intersectingGeoId=_intersectingGeoId;
@property (nonatomic) BOOL isCanonicalLocationSearch; // @synthesize isCanonicalLocationSearch=_isCanonicalLocationSearch;
@property (nonatomic) BOOL isFromAPI; // @synthesize isFromAPI=_isFromAPI;
@property (nonatomic) BOOL isPopularNearbyRequest; // @synthesize isPopularNearbyRequest=_isPopularNearbyRequest;
@property (nonatomic) BOOL isStrictGeocoding; // @synthesize isStrictGeocoding=_isStrictGeocoding;
@property (nonatomic) BOOL isStrictMapRegion; // @synthesize isStrictMapRegion=_isStrictMapRegion;
@property (nonatomic) int knownAccuracy; // @synthesize knownAccuracy=_knownAccuracy;
@property (strong, nonatomic) GEOLatLng *knownLocation; // @synthesize knownLocation=_knownLocation;
@property (strong, nonatomic) NSMutableArray *limitToCountryCodeIso2s; // @synthesize limitToCountryCodeIso2s=_limitToCountryCodeIso2s;
@property (nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;
@property (strong, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property (nonatomic) int mapMode; // @synthesize mapMode=_mapMode;
@property (strong, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property (nonatomic) int maxBusinessReviews; // @synthesize maxBusinessReviews=_maxBusinessReviews;
@property (nonatomic) int maxResults; // @synthesize maxResults=_maxResults;
@property (readonly, nonatomic) int *optionalSuppressionReasons;
@property (readonly, nonatomic) unsigned long long optionalSuppressionReasonsCount;
@property (strong, nonatomic) NSString *phoneticLocaleIdentifier; // @synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier;
@property (nonatomic) int placeTypeLimit; // @synthesize placeTypeLimit=_placeTypeLimit;
@property (strong, nonatomic) GEOAddress *preserveFields; // @synthesize preserveFields=_preserveFields;
@property (strong, nonatomic) NSString *search; // @synthesize search=_search;
@property (strong, nonatomic) NSString *searchContext; // @synthesize searchContext=_searchContext;
@property (nonatomic) CDStruct_0756942c searchContextSubstring; // @synthesize searchContextSubstring=_searchContextSubstring;
@property (strong, nonatomic) GEOLatLng *searchLocation; // @synthesize searchLocation=_searchLocation;
@property (nonatomic) int searchSource; // @synthesize searchSource=_searchSource;
@property (readonly, nonatomic) CDStruct_0756942c *searchSubstrings;
@property (readonly, nonatomic) unsigned long long searchSubstringsCount;
@property (nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (strong, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property (nonatomic) CDStruct_612aec5b sessionGUID; // @synthesize sessionGUID=_sessionGUID;
@property (nonatomic) BOOL structuredSearch; // @synthesize structuredSearch=_structuredSearch;
@property (strong, nonatomic) GEOSuggestionsOptions *suggestionsOptions; // @synthesize suggestionsOptions=_suggestionsOptions;
@property (strong, nonatomic) NSString *suggestionsPrefix; // @synthesize suggestionsPrefix=_suggestionsPrefix;
@property (nonatomic) BOOL suppressResultsRequiringAttribution; // @synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution;
@property (nonatomic) double timeSinceMapEnteredForeground; // @synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground;
@property (nonatomic) double timeSinceMapViewportChanged; // @synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) int transportTypeForTravelTimes; // @synthesize transportTypeForTravelTimes=_transportTypeForTravelTimes;
@property (strong, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;

- (void)addAdditionalPlaceType:(int)arg1;
- (void)addBusinessID:(unsigned long long)arg1;
- (void)addFilterByBusinessCategory:(id)arg1;
- (void)addLimitToCountryCodeIso2:(id)arg1;
- (void)addOptionalSuppressionReason:(int)arg1;
- (void)addSearchSubstring:(CDStruct_0756942c)arg1;
- (void)addServiceTag:(id)arg1;
- (int)additionalPlaceTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)businessIDAtIndex:(unsigned long long)arg1;
- (void)clearAdditionalPlaceTypes;
- (void)clearBusinessIDs;
- (void)clearFilterByBusinessCategorys;
- (void)clearLimitToCountryCodeIso2s;
- (void)clearOptionalSuppressionReasons;
- (void)clearSearchSubstrings;
- (void)clearServiceTags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)filterByBusinessCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterByBusinessCategorysCount;
- (unsigned long long)hash;
- (id)initWithTraits:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)limitToCountryCodeIso2AtIndex:(unsigned long long)arg1;
- (unsigned long long)limitToCountryCodeIso2sCount;
- (void)mergeFrom:(id)arg1;
- (int)optionalSuppressionReasonAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (CDStruct_0756942c)searchSubstringAtIndex:(unsigned long long)arg1;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)setAdditionalPlaceTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setBusinessIDs:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)setOptionalSuppressionReasons:(int *)arg1 count:(unsigned long long)arg2;
- (void)setSearchSubstrings:(CDStruct_0756942c *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

