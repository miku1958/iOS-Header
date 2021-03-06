//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBChannelData, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBPDFPageView : PBCodable <NSCopying>
{
    CDStruct_95bda58d _pageIndices;
    NSString *_campaignId;
    NTPBChannelData *_channelData;
    int _groupType;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_language;
    NSString *_notificationId;
    int _pageCount;
    int _paidSubscriberToFeedType;
    int _paidSubscriptionConversionPointType;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_referringSourceApplication;
    NSString *_referringUrl;
    NSString *_sourceChannelId;
    BOOL _adSupportedChannel;
    BOOL _isFreeIssue;
    BOOL _isPaidSubscriberToSourceChannel;
    BOOL _viewFromNotificationDirectOpen;
    struct {
        unsigned int groupType:1;
        unsigned int pageCount:1;
        unsigned int paidSubscriberToFeedType:1;
        unsigned int paidSubscriptionConversionPointType:1;
        unsigned int parentFeedType:1;
        unsigned int adSupportedChannel:1;
        unsigned int isFreeIssue:1;
        unsigned int isPaidSubscriberToSourceChannel:1;
        unsigned int viewFromNotificationDirectOpen:1;
    } _has;
}

@property (nonatomic) BOOL adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property (strong, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property (strong, nonatomic) NTPBChannelData *channelData; // @synthesize channelData=_channelData;
@property (nonatomic) int groupType; // @synthesize groupType=_groupType;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) BOOL hasIsFreeIssue;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasNotificationId;
@property (nonatomic) BOOL hasPageCount;
@property (nonatomic) BOOL hasPaidSubscriberToFeedType;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (nonatomic) BOOL hasParentFeedType;
@property (readonly, nonatomic) BOOL hasReferringSourceApplication;
@property (readonly, nonatomic) BOOL hasReferringUrl;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasViewFromNotificationDirectOpen;
@property (nonatomic) BOOL isFreeIssue; // @synthesize isFreeIssue=_isFreeIssue;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel; // @synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel;
@property (strong, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property (strong, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property (strong, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property (strong, nonatomic) NSString *language; // @synthesize language=_language;
@property (strong, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
@property (nonatomic) int pageCount; // @synthesize pageCount=_pageCount;
@property (readonly, nonatomic) int *pageIndices;
@property (readonly, nonatomic) unsigned long long pageIndicesCount;
@property (nonatomic) int paidSubscriberToFeedType; // @synthesize paidSubscriberToFeedType=_paidSubscriberToFeedType;
@property (nonatomic) int paidSubscriptionConversionPointType; // @synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType;
@property (strong, nonatomic) NSString *parentFeedId; // @synthesize parentFeedId=_parentFeedId;
@property (nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property (strong, nonatomic) NSString *referringSourceApplication; // @synthesize referringSourceApplication=_referringSourceApplication;
@property (strong, nonatomic) NSString *referringUrl; // @synthesize referringUrl=_referringUrl;
@property (strong, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property (nonatomic) BOOL viewFromNotificationDirectOpen; // @synthesize viewFromNotificationDirectOpen=_viewFromNotificationDirectOpen;

- (void).cxx_destruct;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsPaidSubscriberToFeedType:(id)arg1;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;
- (int)StringAsParentFeedType:(id)arg1;
- (void)addPageIndices:(int)arg1;
- (void)clearPageIndices;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)pageIndicesAtIndex:(unsigned long long)arg1;
- (id)paidSubscriberToFeedTypeAsString:(int)arg1;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setPageIndices:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

