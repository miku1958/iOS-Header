//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOMapItemPrivate-Protocol.h>

@class GEOAddress, GEOFeatureStyleAttributes, GEOMapItemAttribution, GEOMapItemClientAttributes, GEOMapItemPhotosAttribution, GEOMapItemPlaceAttribution, GEOMapItemReviewsAttribution, GEOMapRegion, GEOPDBusinessClaim, GEOPDFlyover, GEOPDMultiLocalizedString, GEOPDPlace, GEOPlace, NSArray, NSData, NSDate, NSDictionary, NSMapTable, NSString, NSTimeZone, NSURL;
@protocol GEOMapItemTransitAttribution, GEOMapItemTransitInfo;

__attribute__((visibility("hidden")))
@interface _GEOPlaceDataItem : NSObject <GEOMapItemPrivate>
{
    GEOPDPlace *_placeData;
    GEOPlace *_place;
    NSMapTable *_attributionMap;
    GEOPDMultiLocalizedString *_disambiguationLabel;
}

@property (readonly, nonatomic, getter=_acceptsApplePay) BOOL acceptsApplePay;
@property (readonly, nonatomic, getter=_additionalPlaceInfos) NSArray *additionalPlaceInfos;
@property (readonly, nonatomic) NSDictionary *addressDictionary;
@property (readonly, nonatomic, getter=_addressGeocodeAccuracy) int addressGeocodeAccuracy;
@property (readonly, nonatomic, getter=_areaInMeters) double areaInMeters;
@property (readonly, nonatomic) NSArray *areasOfInterest;
@property (readonly, nonatomic, getter=_attribution) GEOMapItemPlaceAttribution *attribution;
@property (readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property (readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property (readonly, nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property (readonly, nonatomic, getter=_clientAttributes) GEOMapItemClientAttributes *clientAttributes;
@property (readonly, nonatomic) int contactAddressType;
@property (readonly, nonatomic) BOOL contactIsMe;
@property (readonly, nonatomic) NSString *contactName;
@property (readonly, nonatomic) NSString *contactSpokenName;
@property (readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property (readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property (readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property (readonly, nonatomic) GEOMapRegion *displayMapRegionOrNil;
@property (readonly, nonatomic, getter=isDisputed) BOOL disputed;
@property (readonly, nonatomic) NSData *encodedData;
@property (readonly, nonatomic, getter=_encyclopedicAttribution) GEOMapItemAttribution *encyclopedicAttribution;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic, getter=_factoids) NSArray *factoids;
@property (readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property (readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property (readonly, nonatomic) GEOAddress *geoAddress;
@property (readonly, nonatomic) GEOMapRegion *geoFenceMapRegion;
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
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isEventAllDay;
@property (readonly, nonatomic, getter=_muid) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
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
@property (readonly, nonatomic, getter=_poiPinpointURLString) NSString *poiPinpointURLString;
@property (readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property (readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property (readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property (readonly, nonatomic) int referenceFrame;
@property (readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property (readonly, nonatomic, getter=_resultSnippetDistanceDisplayThreshold) unsigned int resultSnippetDistanceDisplayThreshold;
@property (readonly, nonatomic, getter=_resultSnippetLocationString) NSString *resultSnippetLocationString;
@property (readonly, nonatomic, getter=_reviews) NSArray *reviews;
@property (readonly, nonatomic, getter=_reviewsAttribution) GEOMapItemReviewsAttribution *reviewsAttribution;
@property (readonly, nonatomic, getter=_roadAccessPoints) NSArray *roadAccessPoints;
@property (readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property (readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_takesReservations) BOOL takesReservations;
@property (readonly, nonatomic, getter=_telephone) NSString *telephone;
@property (readonly, nonatomic, getter=_textBlockText) NSString *textBlockText;
@property (readonly, nonatomic, getter=_textBlockTitle) NSString *textBlockTitle;
@property (readonly, nonatomic) NSTimeZone *timezone;
@property (readonly, nonatomic, getter=_transitAttribution) id<GEOMapItemTransitAttribution> transitAttribution;
@property (readonly, nonatomic, getter=_transitInfo) id<GEOMapItemTransitInfo> transitInfo;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property (readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;

- (id)_arrivalMapRegionForTransportType:(int)arg1;
- (id)_asPlaceInfo;
- (id)_attributionInfoForAttribution:(id)arg1 requirement:(int)arg2;
- (id)_displayNameForAttribution:(id)arg1 requirement:(int)arg2;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (BOOL)_hasMoreForAttribution:(id)arg1 requirement:(int)arg2;
- (BOOL)_hasTravelTimeForTransportType:(int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_logoPathForAttribution:(id)arg1 requirement:(int)arg2 scale:(double)arg3;
- (id)_mapItemByStrippingOptionalData;
- (id)_placeDataStyleAttributes;
- (int)_recommendedTransportType;
- (BOOL)_showAddForAttribution:(id)arg1 requirement:(int)arg2;
- (BOOL)_showAttributionForAttribution:(id)arg1 requirement:(int)arg2;
- (id)_spokenAddressForLocale:(id)arg1;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (void)dealloc;
- (id)initWithPlaceData:(id)arg1;
- (id)initWithPlaceData:(id)arg1 attributionMap:(id)arg2 disambiguationLabel:(id)arg3;
- (id)spokenNameForLocale:(id)arg1;

@end

