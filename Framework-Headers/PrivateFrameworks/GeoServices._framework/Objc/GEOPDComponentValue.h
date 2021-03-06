//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitVehiclePosition, GEOPDAddress, GEOPDAddressObject, GEOPDAmenities, GEOPDAnnotatedItemList, GEOPDAssociatedApp, GEOPDBounds, GEOPDBrowseCategories, GEOPDBusinessClaim, GEOPDBusinessHours, GEOPDCaptionedPhoto, GEOPDCollectionIds, GEOPDContainedPlace, GEOPDETA, GEOPDEntity, GEOPDExternalAction, GEOPDFactoid, GEOPDFlyover, GEOPDGroundViewLabel, GEOPDHours, GEOPDISO3166Code, GEOPDIcon, GEOPDLinkedService, GEOPDLocationEvent, GEOPDMessageLink, GEOPDMiniBrowseCategories, GEOPDPhoto, GEOPDPlaceCollection, GEOPDPlaceCollectionItem, GEOPDPlaceInfo, GEOPDPlaceQuestionnaireResult, GEOPDPlacecardLayoutConfiguration, GEOPDPlacecardURL, GEOPDPoiEvent, GEOPDPriceDescription, GEOPDPrototypeContainer, GEOPDPublisher, GEOPDQuickLink, GEOPDRap, GEOPDRating, GEOPDRawAttribute, GEOPDRelatedPlace, GEOPDRestaurantReservationLink, GEOPDResultSnippet, GEOPDReview, GEOPDRoadAccessInfo, GEOPDSimpleRestaurantMenuText, GEOPDSpatialLookupResult, GEOPDStorefront, GEOPDStorefrontPresentation, GEOPDTextBlock, GEOPDTip, GEOPDTransitAttribution, GEOPDTransitIncident, GEOPDTransitInfo, GEOPDTransitInfoSnippet, GEOPDTransitSchedule, GEOPDTransitTripGeometry, GEOPDTransitTripStop, GEOPDTransitTripStopTime, GEOPDVenueInfo, GEOPDWifiFingerprint, GEOStyleAttributes, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDComponentValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDRoadAccessInfo *_accessInfo;
    GEOPDAddressObject *_addressObject;
    GEOPDAddress *_address;
    GEOPDAmenities *_amenities;
    GEOPDAnnotatedItemList *_annotatedItemList;
    GEOPDAssociatedApp *_associatedApp;
    GEOPDBounds *_bounds;
    GEOPDBrowseCategories *_browseCategories;
    GEOPDBusinessClaim *_businessClaim;
    GEOPDBusinessHours *_businessHours;
    GEOPDCaptionedPhoto *_captionedPhoto;
    GEOPDCollectionIds *_collectionIds;
    GEOPDContainedPlace *_containedPlace;
    GEOPDEntity *_entity;
    GEOPDETA *_eta;
    GEOPDExternalAction *_externalAction;
    GEOPDFactoid *_factoid;
    GEOPDFlyover *_flyover;
    GEOPDGroundViewLabel *_groundViewLabel;
    GEOPDHours *_hours;
    GEOPDIcon *_icon;
    GEOPDISO3166Code *_iso3166Code;
    GEOPDLinkedService *_linkedService;
    GEOPDLocationEvent *_locationEvent;
    GEOPDMessageLink *_messageLink;
    GEOPDMiniBrowseCategories *_miniPlaceBrowseCategories;
    GEOPDPhoto *_photo;
    GEOPDBrowseCategories *_placeBrowseCategories;
    GEOPDPlaceCollectionItem *_placeCollectionItem;
    GEOPDPlaceCollection *_placeCollection;
    GEOPDPlaceInfo *_placeInfo;
    GEOPDPlaceQuestionnaireResult *_placeQuestionnaire;
    GEOPDPlacecardLayoutConfiguration *_placecardLayoutConfiguration;
    GEOPDPlacecardURL *_placecardUrl;
    GEOPDPoiEvent *_poiEvent;
    GEOPDPriceDescription *_priceDescription;
    GEOPDPrototypeContainer *_prototypeContainer;
    GEOPDPublisher *_publisher;
    GEOPDQuickLink *_quickLink;
    GEOPDRap *_rap;
    GEOPDRating *_rating;
    GEOPDRawAttribute *_rawAttribute;
    GEOPDRelatedPlace *_relatedPlace;
    GEOPDRestaurantReservationLink *_restaurantReservationLink;
    GEOPDResultSnippet *_resultSnippet;
    GEOPDReview *_review;
    GEOPDSimpleRestaurantMenuText *_simpleRestaurantMenuText;
    GEOPDSpatialLookupResult *_spatialLookupResult;
    GEOPDStorefrontPresentation *_storefrontPresentation;
    GEOPDStorefront *_storefront;
    GEOStyleAttributes *_styleAttributes;
    GEOPDTextBlock *_textBlock;
    GEOPDTip *_tip;
    GEOPDTransitAttribution *_transitAttribution;
    GEOPDTransitIncident *_transitIncident;
    GEOPDTransitInfoSnippet *_transitInfoSnippet;
    GEOPDTransitInfo *_transitInfo;
    GEOPDTransitSchedule *_transitSchedule;
    GEOPDTransitTripGeometry *_transitTripGeometry;
    GEOPDTransitTripStopTime *_transitTripStopTime;
    GEOPDTransitTripStop *_transitTripStop;
    GEOPBTransitVehiclePosition *_transitVehiclePosition;
    GEOPDAmenities *_vendorAmenities;
    GEOPDVenueInfo *_venueInfo;
    GEOPDWifiFingerprint *_wifiFingerprint;
}

@property (strong, nonatomic) GEOPDRoadAccessInfo *accessInfo;
@property (strong, nonatomic) GEOPDAddress *address;
@property (strong, nonatomic) GEOPDAddressObject *addressObject;
@property (strong, nonatomic) GEOPDAmenities *amenities;
@property (strong, nonatomic) GEOPDAnnotatedItemList *annotatedItemList;
@property (strong, nonatomic) GEOPDAssociatedApp *associatedApp;
@property (strong, nonatomic) GEOPDBounds *bounds;
@property (strong, nonatomic) GEOPDBrowseCategories *browseCategories;
@property (strong, nonatomic) GEOPDBusinessClaim *businessClaim;
@property (strong, nonatomic) GEOPDBusinessHours *businessHours;
@property (strong, nonatomic) GEOPDCaptionedPhoto *captionedPhoto;
@property (strong, nonatomic) GEOPDCollectionIds *collectionIds;
@property (strong, nonatomic) GEOPDContainedPlace *containedPlace;
@property (strong, nonatomic) GEOPDEntity *entity;
@property (strong, nonatomic) GEOPDETA *eta;
@property (strong, nonatomic) GEOPDExternalAction *externalAction;
@property (strong, nonatomic) GEOPDFactoid *factoid;
@property (strong, nonatomic) GEOPDFlyover *flyover;
@property (strong, nonatomic) GEOPDGroundViewLabel *groundViewLabel;
@property (readonly, nonatomic) BOOL hasAccessInfo;
@property (readonly, nonatomic) BOOL hasAddress;
@property (readonly, nonatomic) BOOL hasAddressObject;
@property (readonly, nonatomic) BOOL hasAmenities;
@property (readonly, nonatomic) BOOL hasAnnotatedItemList;
@property (readonly, nonatomic) BOOL hasAssociatedApp;
@property (readonly, nonatomic) BOOL hasBounds;
@property (readonly, nonatomic) BOOL hasBrowseCategories;
@property (readonly, nonatomic) BOOL hasBusinessClaim;
@property (readonly, nonatomic) BOOL hasBusinessHours;
@property (readonly, nonatomic) BOOL hasCaptionedPhoto;
@property (readonly, nonatomic) BOOL hasCollectionIds;
@property (readonly, nonatomic) BOOL hasContainedPlace;
@property (readonly, nonatomic) BOOL hasEntity;
@property (readonly, nonatomic) BOOL hasEta;
@property (readonly, nonatomic) BOOL hasExternalAction;
@property (readonly, nonatomic) BOOL hasFactoid;
@property (readonly, nonatomic) BOOL hasFlyover;
@property (readonly, nonatomic) BOOL hasGroundViewLabel;
@property (readonly, nonatomic) BOOL hasHours;
@property (readonly, nonatomic) BOOL hasIcon;
@property (readonly, nonatomic) BOOL hasIso3166Code;
@property (readonly, nonatomic) BOOL hasLinkedService;
@property (readonly, nonatomic) BOOL hasLocationEvent;
@property (readonly, nonatomic) BOOL hasMessageLink;
@property (readonly, nonatomic) BOOL hasMiniPlaceBrowseCategories;
@property (readonly, nonatomic) BOOL hasPhoto;
@property (readonly, nonatomic) BOOL hasPlaceBrowseCategories;
@property (readonly, nonatomic) BOOL hasPlaceCollection;
@property (readonly, nonatomic) BOOL hasPlaceCollectionItem;
@property (readonly, nonatomic) BOOL hasPlaceInfo;
@property (readonly, nonatomic) BOOL hasPlaceQuestionnaire;
@property (readonly, nonatomic) BOOL hasPlacecardLayoutConfiguration;
@property (readonly, nonatomic) BOOL hasPlacecardUrl;
@property (readonly, nonatomic) BOOL hasPoiEvent;
@property (readonly, nonatomic) BOOL hasPriceDescription;
@property (readonly, nonatomic) BOOL hasPrototypeContainer;
@property (readonly, nonatomic) BOOL hasPublisher;
@property (readonly, nonatomic) BOOL hasQuickLink;
@property (readonly, nonatomic) BOOL hasRap;
@property (readonly, nonatomic) BOOL hasRating;
@property (readonly, nonatomic) BOOL hasRawAttribute;
@property (readonly, nonatomic) BOOL hasRelatedPlace;
@property (readonly, nonatomic) BOOL hasRestaurantReservationLink;
@property (readonly, nonatomic) BOOL hasResultSnippet;
@property (readonly, nonatomic) BOOL hasReview;
@property (readonly, nonatomic) BOOL hasSimpleRestaurantMenuText;
@property (readonly, nonatomic) BOOL hasSpatialLookupResult;
@property (readonly, nonatomic) BOOL hasStorefront;
@property (readonly, nonatomic) BOOL hasStorefrontPresentation;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (readonly, nonatomic) BOOL hasTextBlock;
@property (readonly, nonatomic) BOOL hasTip;
@property (readonly, nonatomic) BOOL hasTransitAttribution;
@property (readonly, nonatomic) BOOL hasTransitIncident;
@property (readonly, nonatomic) BOOL hasTransitInfo;
@property (readonly, nonatomic) BOOL hasTransitInfoSnippet;
@property (readonly, nonatomic) BOOL hasTransitSchedule;
@property (readonly, nonatomic) BOOL hasTransitTripGeometry;
@property (readonly, nonatomic) BOOL hasTransitTripStop;
@property (readonly, nonatomic) BOOL hasTransitTripStopTime;
@property (readonly, nonatomic) BOOL hasTransitVehiclePosition;
@property (readonly, nonatomic) BOOL hasVendorAmenities;
@property (readonly, nonatomic) BOOL hasVenueInfo;
@property (readonly, nonatomic) BOOL hasWifiFingerprint;
@property (strong, nonatomic) GEOPDHours *hours;
@property (strong, nonatomic) GEOPDIcon *icon;
@property (strong, nonatomic) GEOPDISO3166Code *iso3166Code;
@property (strong, nonatomic) GEOPDLinkedService *linkedService;
@property (strong, nonatomic) GEOPDLocationEvent *locationEvent;
@property (strong, nonatomic) GEOPDMessageLink *messageLink;
@property (strong, nonatomic) GEOPDMiniBrowseCategories *miniPlaceBrowseCategories;
@property (strong, nonatomic) GEOPDPhoto *photo;
@property (strong, nonatomic) GEOPDBrowseCategories *placeBrowseCategories;
@property (strong, nonatomic) GEOPDPlaceCollection *placeCollection;
@property (strong, nonatomic) GEOPDPlaceCollectionItem *placeCollectionItem;
@property (strong, nonatomic) GEOPDPlaceInfo *placeInfo;
@property (strong, nonatomic) GEOPDPlaceQuestionnaireResult *placeQuestionnaire;
@property (strong, nonatomic) GEOPDPlacecardLayoutConfiguration *placecardLayoutConfiguration;
@property (strong, nonatomic) GEOPDPlacecardURL *placecardUrl;
@property (strong, nonatomic) GEOPDPoiEvent *poiEvent;
@property (strong, nonatomic) GEOPDPriceDescription *priceDescription;
@property (strong, nonatomic) GEOPDPrototypeContainer *prototypeContainer;
@property (strong, nonatomic) GEOPDPublisher *publisher;
@property (strong, nonatomic) GEOPDQuickLink *quickLink;
@property (strong, nonatomic) GEOPDRap *rap;
@property (strong, nonatomic) GEOPDRating *rating;
@property (strong, nonatomic) GEOPDRawAttribute *rawAttribute;
@property (strong, nonatomic) GEOPDRelatedPlace *relatedPlace;
@property (strong, nonatomic) GEOPDRestaurantReservationLink *restaurantReservationLink;
@property (strong, nonatomic) GEOPDResultSnippet *resultSnippet;
@property (strong, nonatomic) GEOPDReview *review;
@property (strong, nonatomic) GEOPDSimpleRestaurantMenuText *simpleRestaurantMenuText;
@property (strong, nonatomic) GEOPDSpatialLookupResult *spatialLookupResult;
@property (strong, nonatomic) GEOPDStorefront *storefront;
@property (strong, nonatomic) GEOPDStorefrontPresentation *storefrontPresentation;
@property (strong, nonatomic) GEOStyleAttributes *styleAttributes;
@property (strong, nonatomic) GEOPDTextBlock *textBlock;
@property (strong, nonatomic) GEOPDTip *tip;
@property (strong, nonatomic) GEOPDTransitAttribution *transitAttribution;
@property (strong, nonatomic) GEOPDTransitIncident *transitIncident;
@property (strong, nonatomic) GEOPDTransitInfo *transitInfo;
@property (strong, nonatomic) GEOPDTransitInfoSnippet *transitInfoSnippet;
@property (strong, nonatomic) GEOPDTransitSchedule *transitSchedule;
@property (strong, nonatomic) GEOPDTransitTripGeometry *transitTripGeometry;
@property (strong, nonatomic) GEOPDTransitTripStop *transitTripStop;
@property (strong, nonatomic) GEOPDTransitTripStopTime *transitTripStopTime;
@property (strong, nonatomic) GEOPBTransitVehiclePosition *transitVehiclePosition;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) GEOPDAmenities *vendorAmenities;
@property (strong, nonatomic) GEOPDVenueInfo *venueInfo;
@property (strong, nonatomic) GEOPDWifiFingerprint *wifiFingerprint;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

