//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEODataSetURLOverride : PBCodable <NSCopying>
{
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSString *_announcementsURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_businessPortalBaseURL;
    unsigned int _dataSet;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSString *_logMessageUsageURL;
    NSString *_problemCategoriesURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSString *_simpleETAURL;
    NSString *_spatialLookupURL;
    CDStruct_2fe9a6d4 _has;
}

@property (strong, nonatomic) NSString *addressCorrectionInitURL; // @synthesize addressCorrectionInitURL=_addressCorrectionInitURL;
@property (strong, nonatomic) NSString *addressCorrectionUpdateURL; // @synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL;
@property (strong, nonatomic) NSString *announcementsURL; // @synthesize announcementsURL=_announcementsURL;
@property (strong, nonatomic) NSString *batchReverseGeocoderURL; // @synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL;
@property (strong, nonatomic) NSString *businessPortalBaseURL; // @synthesize businessPortalBaseURL=_businessPortalBaseURL;
@property (nonatomic) unsigned int dataSet; // @synthesize dataSet=_dataSet;
@property (strong, nonatomic) NSString *directionsURL; // @synthesize directionsURL=_directionsURL;
@property (strong, nonatomic) NSString *dispatcherURL; // @synthesize dispatcherURL=_dispatcherURL;
@property (strong, nonatomic) NSString *etaURL; // @synthesize etaURL=_etaURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionInitURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionUpdateURL;
@property (readonly, nonatomic) BOOL hasAnnouncementsURL;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocoderURL;
@property (readonly, nonatomic) BOOL hasBusinessPortalBaseURL;
@property (nonatomic) BOOL hasDataSet;
@property (readonly, nonatomic) BOOL hasDirectionsURL;
@property (readonly, nonatomic) BOOL hasDispatcherURL;
@property (readonly, nonatomic) BOOL hasEtaURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageURL;
@property (readonly, nonatomic) BOOL hasProblemCategoriesURL;
@property (readonly, nonatomic) BOOL hasProblemOptInURL;
@property (readonly, nonatomic) BOOL hasProblemStatusURL;
@property (readonly, nonatomic) BOOL hasProblemSubmissionURL;
@property (readonly, nonatomic) BOOL hasSimpleETAURL;
@property (readonly, nonatomic) BOOL hasSpatialLookupURL;
@property (strong, nonatomic) NSString *logMessageUsageURL; // @synthesize logMessageUsageURL=_logMessageUsageURL;
@property (strong, nonatomic) NSString *problemCategoriesURL; // @synthesize problemCategoriesURL=_problemCategoriesURL;
@property (strong, nonatomic) NSString *problemOptInURL; // @synthesize problemOptInURL=_problemOptInURL;
@property (strong, nonatomic) NSString *problemStatusURL; // @synthesize problemStatusURL=_problemStatusURL;
@property (strong, nonatomic) NSString *problemSubmissionURL; // @synthesize problemSubmissionURL=_problemSubmissionURL;
@property (strong, nonatomic) NSString *simpleETAURL; // @synthesize simpleETAURL=_simpleETAURL;
@property (strong, nonatomic) NSString *spatialLookupURL; // @synthesize spatialLookupURL=_spatialLookupURL;

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

