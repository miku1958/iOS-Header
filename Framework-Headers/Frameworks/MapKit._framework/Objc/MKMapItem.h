//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/GEOURLSerializable-Protocol.h>

@class GEOAddress, GEOFeatureStyleAttributes, GEOMapItemDetourInfo, GEOMapRegion, GEOPDBusinessClaim, GEOPDFlyover, GEOPlace, MKMapItemMetadata, MKPlacemark, NSArray, NSData, NSString, NSTimeZone, NSURL, _MKMapItemPhotosAttribution, _MKMapItemPlaceAttribution, _MKMapItemReviewsAttribution, _MKPlaceReservationInfo;
@protocol GEOEncyclopedicInfo, GEOMapItem, GEOMapItemPrivate, GEOMapItemTransitInfo, GEOTransitAttribution, NSObject;

@interface MKMapItem : NSObject <GEOURLSerializable>
{
    BOOL _isCurrentLocation;
    BOOL _isPlaceHolder;
    id<GEOMapItem> _geoMapItem;
    BOOL _isTransitInfoUpdated;
    id<GEOMapItemTransitInfo> _updatedTransitInfo;
    id<GEOMapItemTransitInfo> _defaultTransitInfo;
    id<GEOTransitAttribution> _updatedTransitAttribution;
    _MKMapItemPlaceAttribution *_attribution;
    _MKMapItemPhotosAttribution *_photosAttribution;
    _MKMapItemReviewsAttribution *_reviewsAttribution;
    NSString *_name;
    NSString *_phoneNumber;
    NSURL *_url;
    NSTimeZone *_timeZone;
    id<NSObject> _didResolveAttributionToken;
    NSString *_shortAddress;
    NSString *_firstLocalizedCategoryName;
    BOOL _isTransitItem;
    MKMapItemMetadata *_metadata;
    GEOPlace *_place;
    _MKPlaceReservationInfo *_reservationInfo;
}

@property (readonly, nonatomic, getter=_acceptsApplePay) BOOL acceptsApplePay;
@property (readonly, nonatomic, getter=_attribution) _MKMapItemPlaceAttribution *attribution; // @synthesize attribution=_attribution;
@property (readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property (readonly, nonatomic, getter=_coordinate) struct CLLocationCoordinate2D coordinate;
@property (readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_detourInfo) GEOMapItemDetourInfo *detourInfo;
@property (readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property (readonly, nonatomic, getter=_displayMapRegion) GEOMapRegion *displayMapRegion;
@property (readonly, nonatomic, getter=_encyclopedicInfo) id<GEOEncyclopedicInfo> encyclopedicInfo;
@property (readonly, nonatomic, getter=_externalTransitStationCode) NSData *externalTransitStationCode;
@property (readonly, nonatomic, getter=_firstLocalizedCategoryName) NSString *firstLocalizedCategoryName;
@property (readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property (readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property (readonly, nonatomic) NSString *formattedNumberOfReviews;
@property (readonly, nonatomic) NSString *formattedNumberOfReviewsIncludingProvider;
@property (readonly, nonatomic, getter=_geoAddress) GEOAddress *geoAddress;
@property (readonly, nonatomic, getter=_geoFenceMapRegion) GEOMapRegion *geoFenceMapRegion;
@property (readonly, nonatomic, getter=_geoMapItem) id<GEOMapItemPrivate> geoMapItem;
@property (readonly, nonatomic, getter=_goodForKids) BOOL goodForKids;
@property (readonly, nonatomic, getter=_handle) NSData *handle;
@property (readonly, nonatomic, getter=_hasAcceptsApplePayAmenity) BOOL hasAcceptsApplePayAmenity;
@property (readonly, nonatomic, getter=_hasAnyAmenities) BOOL hasAnyAmenities;
@property (readonly, nonatomic, getter=_hasBusinessClaim) BOOL hasBusinessClaim;
@property (readonly, nonatomic, getter=_hasCorrectedHomeWorkCoordinate) BOOL hasCorrectedHomeWorkCoordinate;
@property (readonly, nonatomic, getter=_hasDelivery) BOOL hasDelivery;
@property (readonly, nonatomic, getter=_hasDeliveryAmenity) BOOL hasDeliveryAmenity;
@property (readonly, getter=_hasDisplayableAmenities) BOOL hasDisplayableAmenities;
@property (readonly, nonatomic, getter=_hasEncyclopedicInfo) BOOL hasEncyclopedicInfo;
@property (readonly, nonatomic, getter=_hasFlyover) BOOL hasFlyover;
@property (readonly, nonatomic, getter=_hasGoodForKidsAmenity) BOOL hasGoodForKidsAmenity;
@property (readonly, nonatomic, getter=_hasLocalizedOperatingHours) BOOL hasLocalizedOperatingHours;
@property (readonly, nonatomic, getter=_hasMUID) BOOL hasMUID;
@property (readonly, nonatomic, getter=_hasOperatingHours) BOOL hasOperatingHours;
@property (readonly, nonatomic, getter=_hasPriceRange) BOOL hasPriceRange;
@property (readonly, nonatomic, getter=_hasResolvablePartialInformation) BOOL hasResolvablePartialInformation;
@property (readonly, nonatomic, getter=_hasResultProviderID) BOOL hasResultProviderID;
@property (readonly, nonatomic, getter=_hasTakesReservationsAmenity) BOOL hasTakesReservationsAmenity;
@property (readonly, nonatomic, getter=_hasTransit) BOOL hasTransit;
@property (readonly, nonatomic, getter=_hasTransitDisplayName) BOOL hasTransitDisplayName;
@property (readonly, nonatomic, getter=_hasTransitLabels) BOOL hasTransitLabels;
@property (readonly, nonatomic, getter=_hasUserRatingScore) BOOL hasUserRatingScore;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isCurrentLocation; // @synthesize isCurrentLocation=_isCurrentLocation;
@property (readonly, getter=_isEmptyContactMapItem) BOOL isEmptyContactMapItem;
@property (readonly, nonatomic) BOOL isPlaceHolder; // @synthesize isPlaceHolder=_isPlaceHolder;
@property (nonatomic, getter=_isTransitItem) BOOL isTransitItem; // @synthesize isTransitItem=_isTransitItem;
@property (readonly, nonatomic, getter=_localizedOperatingHours) NSString *localizedOperatingHours;
@property (readonly, nonatomic) MKMapItemMetadata *metadata; // @synthesize metadata=_metadata;
@property (readonly, nonatomic, getter=_muid) unsigned long long muid;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=_needsAttribution) BOOL needsAttribution;
@property (readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property (readonly, nonatomic, getter=_openingHoursOptions) unsigned long long openingHoursOptions;
@property (copy, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic, getter=_phoneNumberOptsOutOfAds) BOOL phoneNumberOptsOutOfAds;
@property (readonly, nonatomic, getter=_photosAttribution) _MKMapItemPhotosAttribution *photosAttribution; // @synthesize photosAttribution=_photosAttribution;
@property (readonly, nonatomic) GEOPlace *place; // @synthesize place=_place;
@property (readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property (readonly, nonatomic) MKPlacemark *placemark;
@property (readonly, nonatomic, getter=_poiPinpointURLString) NSString *poiPinpointURLString;
@property (readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property (readonly, nonatomic, getter=_priceRangeString) NSString *priceRangeString;
@property (readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property (strong, nonatomic) _MKPlaceReservationInfo *reservationInfo; // @synthesize reservationInfo=_reservationInfo;
@property (readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property (readonly, nonatomic, getter=_reviews) NSArray *reviews;
@property (readonly, nonatomic, getter=_reviewsAttribution) _MKMapItemReviewsAttribution *reviewsAttribution; // @synthesize reviewsAttribution=_reviewsAttribution;
@property (readonly, nonatomic, getter=_reviewsDisplayName) NSString *reviewsDisplayName;
@property (readonly, nonatomic) NSString *reviewsProviderDisplayName;
@property (readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property (readonly, nonatomic, getter=_shortAddress) NSString *shortAddress;
@property (readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_takesReservations) BOOL takesReservations;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic, getter=_tips) NSArray *tips;
@property (readonly, nonatomic, getter=_transitAttribution) id<GEOTransitAttribution> transitAttribution;
@property (readonly, nonatomic, getter=_transitDisplayName) NSString *transitDisplayName;
@property (readonly, nonatomic, getter=_transitInfo) id<GEOMapItemTransitInfo> transitInfo;
@property (strong, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property (readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property (readonly, nonatomic) NSString *yelpID;

+ (id)_deserializeResourceOptionsFromURL:(id)arg1 error:(out id *)arg2;
+ (void)_fillOutRequest:(id)arg1 withMapsDataString:(id)arg2;
+ (id)_itemWithAddressBookRef:(void *)arg1 geoMapItem:(id)arg2;
+ (id)_itemWithContact:(id)arg1 geoMapItem:(id)arg2;
+ (id)_itemWithGeoMapItem:(id)arg1;
+ (id)_launchOptionsFromResourceOptionsDictionary:(id)arg1;
+ (id)_launchOptionsWithOptions:(id)arg1;
+ (void)_mapItemFromHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_mapItemWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;
+ (void)_mapItemsFromHandleURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_mapItemsWithSerializedPlaceDataResponse:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (BOOL)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2;
+ (void)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)_sharedSessionURLForPunchoutURL:(id)arg1;
+ (id)_sharedSessionUserInfoForPunchoutUserInfo:(id)arg1;
+ (id)_sourceAppIdFromLaunchURL:(id)arg1;
+ (id)_sourceAppIdFromLaunchUserInfo:(id)arg1;
+ (id)_urlForMapItemHandles:(id)arg1 options:(id)arg2;
+ (id)contactsAddressDictionaryFromGeoAddressDictionary:(id)arg1;
+ (id)contactsAddressKeysForGeoAddressKeys;
+ (id)launchOptionsFromURL:(id)arg1;
+ (id)mapItemForCurrentLocation;
+ (id)mapItemWithDictionary:(id)arg1;
+ (id)mapItemWithSerializedPlaceData:(id)arg1;
+ (id)mapItemWithSerializedPlaceData:(id)arg1 serializedDetourInfo:(id)arg2 currentLocation:(BOOL)arg3;
+ (id)mapItemsFromURL:(id)arg1 options:(id *)arg2;
+ (BOOL)openMapsWithItems:(id)arg1 launchOptions:(id)arg2;
+ (void)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)plistCompatibleDictionaryFromStandardOptions:(id)arg1;
+ (id)standardOptionsFromPlistCompatibleDictionary:(id)arg1;
+ (id)urlForMapItem:(id)arg1 options:(id)arg2;
+ (id)urlForMapItems:(id)arg1 options:(id)arg2;
- (void).cxx_destruct;
- (id)_activityURL:(BOOL)arg1;
- (id)_addressFormattedAsAddressDictionary;
- (id)_addressFormattedAsCity;
- (id)_addressFormattedAsMultilineAddress;
- (id)_addressFormattedAsName;
- (id)_addressFormattedAsShortenedAddress;
- (id)_addressFormattedAsSinglelineAddress;
- (id)_addressFormattedAsTitlesForMapRect:(CDStruct_02837cd9)arg1;
- (id)_addressFormattedAsWeatherDisplayName;
- (id)_addressOrNil:(id)arg1;
- (id)_attributionFor:(id)arg1 sourceStringFormat:(id)arg2 moreSourceStringFormat:(id)arg3 imageTintColor:(id)arg4;
- (id)_attributionWithDisplayName:(id)arg1 attributionFormat:(id)arg2 logo:(id)arg3 isSnippetLogo:(BOOL)arg4;
- (BOOL)_canGetDirections;
- (id)_fullAddressWithMultiline:(BOOL)arg1;
- (id)_getBusiness;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (BOOL)_hasRestaurantExtensionInfo;
- (id)_initWithLabelMarker:(id)arg1;
- (BOOL)_isBusinessClosed;
- (BOOL)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)_localizedBusinessHoursWithCurrentOpeningHoursOptions;
- (id)_localizedBusinessHoursWithOptions:(unsigned long long)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_mapsDataString;
- (id)_placeCardContact;
- (id)_postalAddressFromMeCardUsingAddressIdentifier:(id)arg1;
- (int)_recommendedTransportType;
- (void)_refreshAttribution;
- (unsigned long long)_restaurantExtensionModeForFirstProvider;
- (id)_restaurantLink_firstProviderDisplayName;
- (id)_restaurantLink_firstProviderIdentifier;
- (id)_restaurantLink_firstProviderPlaceIdentifier;
- (id)_restaurantLink_firstVendorID;
- (BOOL)_restaurantLink_hasFeatureType:(unsigned long long)arg1;
- (id)_restaurantLink_overridenBundleIDsForVendorIDs;
- (id)_reviewForIdentifier:(id)arg1;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (id)_weatherDisplayName;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)formattedNumberOfReviewsIncludingProvider:(BOOL)arg1 formatter:(id)arg2;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithGeoMapItem:(id)arg1 isPlaceHolderPlace:(BOOL)arg2;
- (id)initWithGeoMapItemAsCurrentLocation:(id)arg1;
- (id)initWithPlace:(id)arg1;
- (id)initWithPlace:(id)arg1 isPlaceHolderPlace:(BOOL)arg2;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)openInMapsWithLaunchOptions:(id)arg1;
- (void)openInMapsWithLaunchOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)sharingURL;
- (id)thumbnailWithSize:(struct CGSize)arg1 annotationView:(id)arg2;
- (void)updateTransitInfoWithMapItem:(id)arg1;
- (id)urlRepresentation;

@end

