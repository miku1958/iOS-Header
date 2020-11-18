//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRoutine/GEOMapItem-Protocol.h>

@class GEOFeatureStyleAttributes, GEOMapItemAdditionalPlaceInfo, GEOMapItemAttribution, GEOMapItemClientAttributes, GEOMapItemPhotosAttribution, GEOMapItemPlaceAttribution, GEOMapItemReviewsAttribution, GEOMapRegion, GEOPDBusinessClaim, GEOPDFlyover, GEOPDPlace, GEOPlace, NSArray, NSData, NSString, NSURL;
@protocol GEOMapItemPrivate, GEOMapItemTransitAttribution, GEOMapItemTransitInfo;

@protocol GEOMapItemPrivate <GEOMapItem>

@property (readonly, nonatomic, getter=_acceptsApplePay) BOOL acceptsApplePay;
@property (readonly, nonatomic, getter=_additionalPlaceInfos) NSArray *additionalPlaceInfos;
@property (readonly, nonatomic, getter=_addressGeocodeAccuracy) int addressGeocodeAccuracy;
@property (readonly, nonatomic, getter=_areaInMeters) double areaInMeters;
@property (readonly, nonatomic, getter=_attribution) GEOMapItemPlaceAttribution *attribution;
@property (readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property (readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property (readonly, nonatomic, getter=_clientAttributes) GEOMapItemClientAttributes *clientAttributes;
@property (readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property (readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property (readonly, nonatomic, getter=_encyclopedicAttribution) GEOMapItemAttribution *encyclopedicAttribution;
@property (readonly, nonatomic, getter=_factoids) NSArray *factoids;
@property (readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property (readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property (readonly, nonatomic, getter=_goodForKids) BOOL goodForKids;
@property (readonly, nonatomic, getter=_hasAcceptsApplePayAmenity) BOOL hasAcceptsApplePayAmenity;
@property (readonly, nonatomic, getter=_hasAnyAmenities) BOOL hasAnyAmenities;
@property (readonly, nonatomic, getter=_hasAreaInMeters) BOOL hasAreaInMeters;
@property (readonly, nonatomic, getter=_hasBusinessClaim) BOOL hasBusinessClaim;
@property (readonly, nonatomic, getter=_hasCurrentOperatingHours) BOOL hasCurrentOperatingHours;
@property (readonly, nonatomic, getter=_hasDelivery) BOOL hasDelivery;
@property (readonly, nonatomic, getter=_hasDeliveryAmenity) BOOL hasDeliveryAmenity;
@property (readonly, nonatomic, getter=_hasFlyover) BOOL hasFlyover;
@property (readonly, nonatomic, getter=_hasGoodForKidsAmenity) BOOL hasGoodForKidsAmenity;
@property (readonly, nonatomic, getter=_hasMUID) BOOL hasMUID;
@property (readonly, nonatomic, getter=_hasOperatingHours) BOOL hasOperatingHours;
@property (readonly, nonatomic, getter=_hasPairOfFactoids) BOOL hasPairOfFactoids;
@property (readonly, nonatomic, getter=_hasPriceRange) BOOL hasPriceRange;
@property (readonly, nonatomic, getter=_hasResolvablePartialInformation) BOOL hasResolvablePartialInformation;
@property (readonly, nonatomic, getter=_hasResultProviderID) BOOL hasResultProviderID;
@property (readonly, nonatomic, getter=_hasTakesReservationsAmenity) BOOL hasTakesReservationsAmenity;
@property (readonly, nonatomic, getter=_hasTelephone) BOOL hasTelephone;
@property (readonly, nonatomic, getter=_hasTextBlock) BOOL hasTextBlock;
@property (readonly, nonatomic, getter=_hasTransit) BOOL hasTransit;
@property (readonly, nonatomic, getter=_hasUserRatingScore) BOOL hasUserRatingScore;
@property (readonly, nonatomic, getter=_muid) unsigned long long muid;
@property (readonly, nonatomic, getter=_needsAttribution) BOOL needsAttribution;
@property (readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property (readonly, nonatomic, getter=_openingHoursOptions) unsigned long long openingHoursOptions;
@property (readonly, nonatomic, getter=_operatingHours) NSArray *operatingHours;
@property (readonly, nonatomic, getter=_photos) NSArray *photos;
@property (readonly, nonatomic, getter=_photosAttribution) GEOMapItemPhotosAttribution *photosAttribution;
@property (readonly, nonatomic, getter=_place) GEOPlace *place;
@property (readonly, nonatomic, getter=_placeData) GEOPDPlace *placeData;
@property (readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property (readonly, nonatomic, getter=_placeType) int placeType;
@property (readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property (readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property (readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property (readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property (readonly, nonatomic, getter=_resultSnippetDistanceDisplayThreshold) unsigned int resultSnippetDistanceDisplayThreshold;
@property (readonly, nonatomic, getter=_resultSnippetLocationString) NSString *resultSnippetLocationString;
@property (readonly, nonatomic, getter=_reviews) NSArray *reviews;
@property (readonly, nonatomic, getter=_reviewsAttribution) GEOMapItemReviewsAttribution *reviewsAttribution;
@property (readonly, nonatomic, getter=_roadAccessPoints) NSArray *roadAccessPoints;
@property (readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property (readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic, getter=_takesReservations) BOOL takesReservations;
@property (readonly, nonatomic, getter=_telephone) NSString *telephone;
@property (readonly, nonatomic, getter=_textBlockText) NSString *textBlockText;
@property (readonly, nonatomic, getter=_textBlockTitle) NSString *textBlockTitle;
@property (readonly, nonatomic, getter=_transitAttribution) id<GEOMapItemTransitAttribution> transitAttribution;
@property (readonly, nonatomic, getter=_transitInfo) id<GEOMapItemTransitInfo> transitInfo;
@property (readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property (readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;

- (GEOMapRegion *)_arrivalMapRegionForTransportType:(int)arg1;
- (GEOMapItemAdditionalPlaceInfo *)_asPlaceInfo;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (BOOL)_hasTravelTimeForTransportType:(int)arg1;
- (NSArray *)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id<GEOMapItemPrivate>)_mapItemByStrippingOptionalData;
- (int)_recommendedTransportType;
- (NSString *)_spokenAddressForLocale:(NSString *)arg1;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
@end

