//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOURLInfo, NSArray, NSMutableArray, NSURL, PBDataReader, PBUnknownFields;

@interface GEOURLInfoSet : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOURLInfo *_abExperimentURL;
    GEOURLInfo *_addressCorrectionInitURL;
    GEOURLInfo *_addressCorrectionTaggedLocationURL;
    GEOURLInfo *_addressCorrectionUpdateURL;
    NSMutableArray *_alternateResourcesURLs;
    GEOURLInfo *_analyticsCohortSessionURL;
    GEOURLInfo *_analyticsLongSessionURL;
    GEOURLInfo *_analyticsSessionlessURL;
    GEOURLInfo *_analyticsShortSessionURL;
    GEOURLInfo *_announcementsURL;
    GEOURLInfo *_authProxyURL;
    GEOURLInfo *_authenticatedClientFeatureFlagURL;
    GEOURLInfo *_backgroundDispatcherURL;
    GEOURLInfo *_backgroundRevGeoURL;
    GEOURLInfo *_batchReverseGeocoderPlaceRequestURL;
    GEOURLInfo *_batchReverseGeocoderURL;
    GEOURLInfo *_batchTrafficProbeURL;
    GEOURLInfo *_bluePOIDispatcherURL;
    GEOURLInfo *_businessPortalBaseURL;
    GEOURLInfo *_directionsURL;
    GEOURLInfo *_dispatcherURL;
    GEOURLInfo *_enrichmentSubmissionURL;
    GEOURLInfo *_etaURL;
    GEOURLInfo *_feedbackLookupURL;
    GEOURLInfo *_feedbackSubmissionURL;
    GEOURLInfo *_junctionImageServiceURL;
    GEOURLInfo *_logMessageUsageURL;
    GEOURLInfo *_logMessageUsageV3URL;
    GEOURLInfo *_muninBaseURL;
    GEOURLInfo *_polyLocationShiftURL;
    GEOURLInfo *_pressureProbeDataURL;
    GEOURLInfo *_proactiveAppClipURL;
    GEOURLInfo *_proactiveRoutingURL;
    GEOURLInfo *_problemCategoriesURL;
    GEOURLInfo *_problemOptInURL;
    GEOURLInfo *_problemStatusURL;
    GEOURLInfo *_problemSubmissionURL;
    GEOURLInfo *_realtimeTrafficProbeURL;
    GEOURLInfo *_resourcesURL;
    GEOURLInfo *_reverseGeocoderVersionsURL;
    GEOURLInfo *_searchAttributionManifestURL;
    GEOURLInfo *_simpleETAURL;
    GEOURLInfo *_spatialLookupURL;
    GEOURLInfo *_tokenAuthenticationURL;
    GEOURLInfo *_ugcLogDiscardURL;
    GEOURLInfo *_webModuleBaseURL;
    GEOURLInfo *_wifiConnectionQualityProbeURL;
    GEOURLInfo *_wifiQualityTileURL;
    GEOURLInfo *_wifiQualityURL;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _dataSet;
    struct {
        unsigned int has_dataSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abExperimentURL:1;
        unsigned int read_addressCorrectionInitURL:1;
        unsigned int read_addressCorrectionTaggedLocationURL:1;
        unsigned int read_addressCorrectionUpdateURL:1;
        unsigned int read_alternateResourcesURLs:1;
        unsigned int read_analyticsCohortSessionURL:1;
        unsigned int read_analyticsLongSessionURL:1;
        unsigned int read_analyticsSessionlessURL:1;
        unsigned int read_analyticsShortSessionURL:1;
        unsigned int read_announcementsURL:1;
        unsigned int read_authProxyURL:1;
        unsigned int read_authenticatedClientFeatureFlagURL:1;
        unsigned int read_backgroundDispatcherURL:1;
        unsigned int read_backgroundRevGeoURL:1;
        unsigned int read_batchReverseGeocoderPlaceRequestURL:1;
        unsigned int read_batchReverseGeocoderURL:1;
        unsigned int read_batchTrafficProbeURL:1;
        unsigned int read_bluePOIDispatcherURL:1;
        unsigned int read_businessPortalBaseURL:1;
        unsigned int read_directionsURL:1;
        unsigned int read_dispatcherURL:1;
        unsigned int read_enrichmentSubmissionURL:1;
        unsigned int read_etaURL:1;
        unsigned int read_feedbackLookupURL:1;
        unsigned int read_feedbackSubmissionURL:1;
        unsigned int read_junctionImageServiceURL:1;
        unsigned int read_logMessageUsageURL:1;
        unsigned int read_logMessageUsageV3URL:1;
        unsigned int read_muninBaseURL:1;
        unsigned int read_polyLocationShiftURL:1;
        unsigned int read_pressureProbeDataURL:1;
        unsigned int read_proactiveAppClipURL:1;
        unsigned int read_proactiveRoutingURL:1;
        unsigned int read_problemCategoriesURL:1;
        unsigned int read_problemOptInURL:1;
        unsigned int read_problemStatusURL:1;
        unsigned int read_problemSubmissionURL:1;
        unsigned int read_realtimeTrafficProbeURL:1;
        unsigned int read_resourcesURL:1;
        unsigned int read_reverseGeocoderVersionsURL:1;
        unsigned int read_searchAttributionManifestURL:1;
        unsigned int read_simpleETAURL:1;
        unsigned int read_spatialLookupURL:1;
        unsigned int read_tokenAuthenticationURL:1;
        unsigned int read_ugcLogDiscardURL:1;
        unsigned int read_webModuleBaseURL:1;
        unsigned int read_wifiConnectionQualityProbeURL:1;
        unsigned int read_wifiQualityTileURL:1;
        unsigned int read_wifiQualityURL:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) GEOURLInfo *abExperimentURL;
@property (strong, nonatomic) GEOURLInfo *addressCorrectionInitURL;
@property (strong, nonatomic) GEOURLInfo *addressCorrectionTaggedLocationURL;
@property (strong, nonatomic) GEOURLInfo *addressCorrectionUpdateURL;
@property (readonly, nonatomic) NSArray *alternateResourcesNSURLs;
@property (strong, nonatomic) NSMutableArray *alternateResourcesURLs;
@property (strong, nonatomic) GEOURLInfo *analyticsCohortSessionURL;
@property (strong, nonatomic) GEOURLInfo *analyticsLongSessionURL;
@property (strong, nonatomic) GEOURLInfo *analyticsSessionlessURL;
@property (strong, nonatomic) GEOURLInfo *analyticsShortSessionURL;
@property (strong, nonatomic) GEOURLInfo *announcementsURL;
@property (strong, nonatomic) GEOURLInfo *authProxyURL;
@property (strong, nonatomic) GEOURLInfo *authenticatedClientFeatureFlagURL;
@property (strong, nonatomic) GEOURLInfo *backgroundDispatcherURL;
@property (strong, nonatomic) GEOURLInfo *backgroundRevGeoURL;
@property (strong, nonatomic) GEOURLInfo *batchReverseGeocoderPlaceRequestURL;
@property (strong, nonatomic) GEOURLInfo *batchReverseGeocoderURL;
@property (strong, nonatomic) GEOURLInfo *batchTrafficProbeURL;
@property (strong, nonatomic) GEOURLInfo *bluePOIDispatcherURL;
@property (strong, nonatomic) GEOURLInfo *businessPortalBaseURL;
@property (nonatomic) unsigned int dataSet;
@property (strong, nonatomic) GEOURLInfo *directionsURL;
@property (strong, nonatomic) GEOURLInfo *dispatcherURL;
@property (strong, nonatomic) GEOURLInfo *enrichmentSubmissionURL;
@property (strong, nonatomic) GEOURLInfo *etaURL;
@property (strong, nonatomic) GEOURLInfo *feedbackLookupURL;
@property (strong, nonatomic) GEOURLInfo *feedbackSubmissionURL;
@property (readonly, nonatomic) BOOL hasAbExperimentURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionInitURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionTaggedLocationURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionUpdateURL;
@property (readonly, nonatomic) BOOL hasAnalyticsCohortSessionURL;
@property (readonly, nonatomic) BOOL hasAnalyticsLongSessionURL;
@property (readonly, nonatomic) BOOL hasAnalyticsSessionlessURL;
@property (readonly, nonatomic) BOOL hasAnalyticsShortSessionURL;
@property (readonly, nonatomic) BOOL hasAnnouncementsURL;
@property (readonly, nonatomic) BOOL hasAuthProxyURL;
@property (readonly, nonatomic) BOOL hasAuthenticatedClientFeatureFlagURL;
@property (readonly, nonatomic) BOOL hasBackgroundDispatcherURL;
@property (readonly, nonatomic) BOOL hasBackgroundRevGeoURL;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocoderPlaceRequestURL;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocoderURL;
@property (readonly, nonatomic) BOOL hasBatchTrafficProbeURL;
@property (readonly, nonatomic) BOOL hasBluePOIDispatcherURL;
@property (readonly, nonatomic) BOOL hasBusinessPortalBaseURL;
@property (nonatomic) BOOL hasDataSet;
@property (readonly, nonatomic) BOOL hasDirectionsURL;
@property (readonly, nonatomic) BOOL hasDispatcherURL;
@property (readonly, nonatomic) BOOL hasEnrichmentSubmissionURL;
@property (readonly, nonatomic) BOOL hasEtaURL;
@property (readonly, nonatomic) BOOL hasFeedbackLookupURL;
@property (readonly, nonatomic) BOOL hasFeedbackSubmissionURL;
@property (readonly, nonatomic) BOOL hasJunctionImageServiceURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageV3URL;
@property (readonly, nonatomic) BOOL hasMuninBaseURL;
@property (readonly, nonatomic) BOOL hasPolyLocationShiftURL;
@property (readonly, nonatomic) BOOL hasPressureProbeDataURL;
@property (readonly, nonatomic) BOOL hasProactiveAppClipURL;
@property (readonly, nonatomic) BOOL hasProactiveRoutingURL;
@property (readonly, nonatomic) BOOL hasProblemCategoriesURL;
@property (readonly, nonatomic) BOOL hasProblemOptInURL;
@property (readonly, nonatomic) BOOL hasProblemStatusURL;
@property (readonly, nonatomic) BOOL hasProblemSubmissionURL;
@property (readonly, nonatomic) BOOL hasRealtimeTrafficProbeURL;
@property (readonly, nonatomic) BOOL hasResourcesURL;
@property (readonly, nonatomic) BOOL hasReverseGeocoderVersionsURL;
@property (readonly, nonatomic) BOOL hasSearchAttributionManifestURL;
@property (readonly, nonatomic) BOOL hasSimpleETAURL;
@property (readonly, nonatomic) BOOL hasSpatialLookupURL;
@property (readonly, nonatomic) BOOL hasTokenAuthenticationURL;
@property (readonly, nonatomic) BOOL hasUgcLogDiscardURL;
@property (readonly, nonatomic) BOOL hasWebModuleBaseURL;
@property (readonly, nonatomic) BOOL hasWifiConnectionQualityProbeURL;
@property (readonly, nonatomic) BOOL hasWifiQualityTileURL;
@property (readonly, nonatomic) BOOL hasWifiQualityURL;
@property (strong, nonatomic) GEOURLInfo *junctionImageServiceURL;
@property (strong, nonatomic) GEOURLInfo *logMessageUsageURL;
@property (strong, nonatomic) GEOURLInfo *logMessageUsageV3URL;
@property (strong, nonatomic) GEOURLInfo *muninBaseURL;
@property (strong, nonatomic) GEOURLInfo *polyLocationShiftURL;
@property (strong, nonatomic) GEOURLInfo *pressureProbeDataURL;
@property (strong, nonatomic) GEOURLInfo *proactiveAppClipURL;
@property (strong, nonatomic) GEOURLInfo *proactiveRoutingURL;
@property (strong, nonatomic) GEOURLInfo *problemCategoriesURL;
@property (strong, nonatomic) GEOURLInfo *problemOptInURL;
@property (strong, nonatomic) GEOURLInfo *problemStatusURL;
@property (strong, nonatomic) GEOURLInfo *problemSubmissionURL;
@property (strong, nonatomic) GEOURLInfo *realtimeTrafficProbeURL;
@property (readonly, nonatomic) NSURL *resourcesProxyURL;
@property (strong, nonatomic) GEOURLInfo *resourcesURL;
@property (strong, nonatomic) GEOURLInfo *reverseGeocoderVersionsURL;
@property (strong, nonatomic) GEOURLInfo *searchAttributionManifestURL;
@property (strong, nonatomic) GEOURLInfo *simpleETAURL;
@property (strong, nonatomic) GEOURLInfo *spatialLookupURL;
@property (strong, nonatomic) GEOURLInfo *tokenAuthenticationURL;
@property (strong, nonatomic) GEOURLInfo *ugcLogDiscardURL;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) GEOURLInfo *webModuleBaseURL;
@property (strong, nonatomic) GEOURLInfo *wifiConnectionQualityProbeURL;
@property (strong, nonatomic) GEOURLInfo *wifiQualityTileURL;
@property (strong, nonatomic) GEOURLInfo *wifiQualityURL;

+ (Class)alternateResourcesURLType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)addAlternateResourcesURL:(id)arg1;
- (id)alternateResourcesURLAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternateResourcesURLsCount;
- (void)clearAlternateResourcesURLs;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

