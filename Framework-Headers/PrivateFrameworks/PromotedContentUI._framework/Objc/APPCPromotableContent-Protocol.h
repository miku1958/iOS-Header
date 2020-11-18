//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, NSDictionary, NSError, NSString, NSURL, NSUUID;
@protocol APPCDiagnosticMetricsHelping, APPCJourneyMetricsHelping, APPCMediaMetricsHelping, APPCPromotableContentRepresentation, APPCPromotableContext;

@protocol APPCPromotableContent

@property (nonatomic, readonly) long long adType;
@property (nonatomic) BOOL attachedToView;
@property (nonatomic, readonly) BOOL available;
@property (nonatomic, strong) id<APPCPromotableContentRepresentation> bestRepresentation;
@property (nonatomic, readonly) NSString *brandName;
@property (nonatomic, readonly) NSString *campaignText;
@property (nonatomic) BOOL consumed;
@property (nonatomic, readonly) id<APPCPromotableContext> context;
@property (nonatomic, readonly) NSUUID *contextIdentifier;
@property (nonatomic, readonly) id<APPCDiagnosticMetricsHelping> diagnosticMetricHelper;
@property (nonatomic, readonly) BOOL discarded;
@property (nonatomic, readonly) NSString *disclosureRendererPayload;
@property (nonatomic, readonly) NSURL *disclosureURL;
@property (nonatomic, strong) NSError *error;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BOOL isMRAID;
@property (nonatomic, readonly) BOOL isOutstreamVideoAd;
@property (nonatomic, readonly) NSString *journeyIdentifier;
@property (nonatomic, readonly) id<APPCMediaMetricsHelping> mediaMetricHelper;
@property (nonatomic, readonly) NSDictionary *metaData;
@property (nonatomic, readonly) id<APPCJourneyMetricsHelping> metricsHelper;
@property (nonatomic, readonly) unsigned long long minimumTimeBetweenPresentation;
@property (nonatomic, readonly) BOOL placeholder;
@property (nonatomic, readonly) NSArray *representations;
@property (nonatomic, readonly) long long serverUnfilledReason;
@property (nonatomic, readonly) NSDictionary *transparencyDetailsDictionary;

@end
