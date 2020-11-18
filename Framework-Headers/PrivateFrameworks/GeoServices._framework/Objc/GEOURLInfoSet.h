//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOURLInfo, NSURL, PBUnknownFields;

@interface GEOURLInfoSet : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOURLInfo *_abExperimentURL;
    GEOURLInfo *_addressCorrectionInitURL;
    GEOURLInfo *_addressCorrectionUpdateURL;
    GEOURLInfo *_analyticsCohortSessionURL;
    GEOURLInfo *_analyticsLongSessionURL;
    GEOURLInfo *_analyticsSessionlessURL;
    GEOURLInfo *_analyticsShortSessionURL;
    GEOURLInfo *_announcementsURL;
    GEOURLInfo *_authProxyURL;
    GEOURLInfo *_backgroundDispatcherURL;
    GEOURLInfo *_backgroundRevGeoURL;
    GEOURLInfo *_batchReverseGeocoderURL;
    GEOURLInfo *_batchTrafficProbeURL;
    GEOURLInfo *_bluePOIDispatcherURL;
    GEOURLInfo *_businessPortalBaseURL;
    unsigned int _dataSet;
    GEOURLInfo *_directionsURL;
    GEOURLInfo *_dispatcherURL;
    GEOURLInfo *_etaURL;
    GEOURLInfo *_logMessageUsageURL;
    GEOURLInfo *_logMessageUsageV3URL;
    GEOURLInfo *_polyLocationShiftURL;
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
    GEOURLInfo *_wifiConnectionQualityProbeURL;
    CDStruct_2fe9a6d4 _has;
}

@property (strong, nonatomic) GEOURLInfo *abExperimentURL; // @synthesize abExperimentURL=_abExperimentURL;
@property (strong, nonatomic) GEOURLInfo *addressCorrectionInitURL; // @synthesize addressCorrectionInitURL=_addressCorrectionInitURL;
@property (strong, nonatomic) GEOURLInfo *addressCorrectionUpdateURL; // @synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL;
@property (strong, nonatomic) GEOURLInfo *analyticsCohortSessionURL; // @synthesize analyticsCohortSessionURL=_analyticsCohortSessionURL;
@property (strong, nonatomic) GEOURLInfo *analyticsLongSessionURL; // @synthesize analyticsLongSessionURL=_analyticsLongSessionURL;
@property (strong, nonatomic) GEOURLInfo *analyticsSessionlessURL; // @synthesize analyticsSessionlessURL=_analyticsSessionlessURL;
@property (strong, nonatomic) GEOURLInfo *analyticsShortSessionURL; // @synthesize analyticsShortSessionURL=_analyticsShortSessionURL;
@property (strong, nonatomic) GEOURLInfo *announcementsURL; // @synthesize announcementsURL=_announcementsURL;
@property (strong, nonatomic) GEOURLInfo *authProxyURL; // @synthesize authProxyURL=_authProxyURL;
@property (strong, nonatomic) GEOURLInfo *backgroundDispatcherURL; // @synthesize backgroundDispatcherURL=_backgroundDispatcherURL;
@property (strong, nonatomic) GEOURLInfo *backgroundRevGeoURL; // @synthesize backgroundRevGeoURL=_backgroundRevGeoURL;
@property (strong, nonatomic) GEOURLInfo *batchReverseGeocoderURL; // @synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL;
@property (strong, nonatomic) GEOURLInfo *batchTrafficProbeURL; // @synthesize batchTrafficProbeURL=_batchTrafficProbeURL;
@property (strong, nonatomic) GEOURLInfo *bluePOIDispatcherURL; // @synthesize bluePOIDispatcherURL=_bluePOIDispatcherURL;
@property (strong, nonatomic) GEOURLInfo *businessPortalBaseURL; // @synthesize businessPortalBaseURL=_businessPortalBaseURL;
@property (nonatomic) unsigned int dataSet; // @synthesize dataSet=_dataSet;
@property (strong, nonatomic) GEOURLInfo *directionsURL; // @synthesize directionsURL=_directionsURL;
@property (strong, nonatomic) GEOURLInfo *dispatcherURL; // @synthesize dispatcherURL=_dispatcherURL;
@property (strong, nonatomic) GEOURLInfo *etaURL; // @synthesize etaURL=_etaURL;
@property (readonly, nonatomic) BOOL hasAbExperimentURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionInitURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionUpdateURL;
@property (readonly, nonatomic) BOOL hasAnalyticsCohortSessionURL;
@property (readonly, nonatomic) BOOL hasAnalyticsLongSessionURL;
@property (readonly, nonatomic) BOOL hasAnalyticsSessionlessURL;
@property (readonly, nonatomic) BOOL hasAnalyticsShortSessionURL;
@property (readonly, nonatomic) BOOL hasAnnouncementsURL;
@property (readonly, nonatomic) BOOL hasAuthProxyURL;
@property (readonly, nonatomic) BOOL hasBackgroundDispatcherURL;
@property (readonly, nonatomic) BOOL hasBackgroundRevGeoURL;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocoderURL;
@property (readonly, nonatomic) BOOL hasBatchTrafficProbeURL;
@property (readonly, nonatomic) BOOL hasBluePOIDispatcherURL;
@property (readonly, nonatomic) BOOL hasBusinessPortalBaseURL;
@property (nonatomic) BOOL hasDataSet;
@property (readonly, nonatomic) BOOL hasDirectionsURL;
@property (readonly, nonatomic) BOOL hasDispatcherURL;
@property (readonly, nonatomic) BOOL hasEtaURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageV3URL;
@property (readonly, nonatomic) BOOL hasPolyLocationShiftURL;
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
@property (readonly, nonatomic) BOOL hasWifiConnectionQualityProbeURL;
@property (strong, nonatomic) GEOURLInfo *logMessageUsageURL; // @synthesize logMessageUsageURL=_logMessageUsageURL;
@property (strong, nonatomic) GEOURLInfo *logMessageUsageV3URL; // @synthesize logMessageUsageV3URL=_logMessageUsageV3URL;
@property (strong, nonatomic) GEOURLInfo *polyLocationShiftURL; // @synthesize polyLocationShiftURL=_polyLocationShiftURL;
@property (strong, nonatomic) GEOURLInfo *proactiveRoutingURL; // @synthesize proactiveRoutingURL=_proactiveRoutingURL;
@property (strong, nonatomic) GEOURLInfo *problemCategoriesURL; // @synthesize problemCategoriesURL=_problemCategoriesURL;
@property (strong, nonatomic) GEOURLInfo *problemOptInURL; // @synthesize problemOptInURL=_problemOptInURL;
@property (strong, nonatomic) GEOURLInfo *problemStatusURL; // @synthesize problemStatusURL=_problemStatusURL;
@property (strong, nonatomic) GEOURLInfo *problemSubmissionURL; // @synthesize problemSubmissionURL=_problemSubmissionURL;
@property (strong, nonatomic) GEOURLInfo *realtimeTrafficProbeURL; // @synthesize realtimeTrafficProbeURL=_realtimeTrafficProbeURL;
@property (readonly, nonatomic) NSURL *resourcesProxyURL;
@property (strong, nonatomic) GEOURLInfo *resourcesURL; // @synthesize resourcesURL=_resourcesURL;
@property (strong, nonatomic) GEOURLInfo *reverseGeocoderVersionsURL; // @synthesize reverseGeocoderVersionsURL=_reverseGeocoderVersionsURL;
@property (strong, nonatomic) GEOURLInfo *searchAttributionManifestURL; // @synthesize searchAttributionManifestURL=_searchAttributionManifestURL;
@property (strong, nonatomic) GEOURLInfo *simpleETAURL; // @synthesize simpleETAURL=_simpleETAURL;
@property (strong, nonatomic) GEOURLInfo *spatialLookupURL; // @synthesize spatialLookupURL=_spatialLookupURL;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) GEOURLInfo *wifiConnectionQualityProbeURL; // @synthesize wifiConnectionQualityProbeURL=_wifiConnectionQualityProbeURL;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

