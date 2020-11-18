//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString, NTPBIssueData;

@interface NTPBPaidSubscriptionConversionPointExposure : PBCodable <NSCopying>
{
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    NSData *_feedViewExposureId;
    NSString *_groupFeedId;
    int _groupType;
    NSString *_iadQtoken;
    NTPBIssueData *_issueData;
    int _paidSubscriptionConversionPointExposureLocation;
    int _paidSubscriptionConversionPointExposurePresentationReason;
    int _paidSubscriptionConversionPointType;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_purchaseId;
    NSString *_sectionId;
    NSString *_sourceChannelId;
    NSData *_subscriptionPurchaseSessionId;
    int _userAction;
    BOOL _arrivedFromAd;
    BOOL _subscriptionOnlyArticlePreview;
    struct {
        unsigned int groupType:1;
        unsigned int paidSubscriptionConversionPointExposureLocation:1;
        unsigned int paidSubscriptionConversionPointExposurePresentationReason:1;
        unsigned int paidSubscriptionConversionPointType:1;
        unsigned int parentFeedType:1;
        unsigned int userAction:1;
        unsigned int arrivedFromAd:1;
        unsigned int subscriptionOnlyArticlePreview:1;
    } _has;
}

@property (nonatomic) BOOL arrivedFromAd; // @synthesize arrivedFromAd=_arrivedFromAd;
@property (strong, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property (strong, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property (strong, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property (strong, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property (nonatomic) int groupType; // @synthesize groupType=_groupType;
@property (nonatomic) BOOL hasArrivedFromAd;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasIadQtoken;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointExposureLocation;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointExposurePresentationReason;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (nonatomic) BOOL hasParentFeedType;
@property (readonly, nonatomic) BOOL hasPurchaseId;
@property (readonly, nonatomic) BOOL hasSectionId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasSubscriptionOnlyArticlePreview;
@property (readonly, nonatomic) BOOL hasSubscriptionPurchaseSessionId;
@property (nonatomic) BOOL hasUserAction;
@property (strong, nonatomic) NSString *iadQtoken; // @synthesize iadQtoken=_iadQtoken;
@property (strong, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property (nonatomic) int paidSubscriptionConversionPointExposureLocation; // @synthesize paidSubscriptionConversionPointExposureLocation=_paidSubscriptionConversionPointExposureLocation;
@property (nonatomic) int paidSubscriptionConversionPointExposurePresentationReason; // @synthesize paidSubscriptionConversionPointExposurePresentationReason=_paidSubscriptionConversionPointExposurePresentationReason;
@property (nonatomic) int paidSubscriptionConversionPointType; // @synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType;
@property (strong, nonatomic) NSString *parentFeedId; // @synthesize parentFeedId=_parentFeedId;
@property (nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property (strong, nonatomic) NSString *purchaseId; // @synthesize purchaseId=_purchaseId;
@property (strong, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property (strong, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property (nonatomic) BOOL subscriptionOnlyArticlePreview; // @synthesize subscriptionOnlyArticlePreview=_subscriptionOnlyArticlePreview;
@property (strong, nonatomic) NSData *subscriptionPurchaseSessionId; // @synthesize subscriptionPurchaseSessionId=_subscriptionPurchaseSessionId;
@property (nonatomic) int userAction; // @synthesize userAction=_userAction;

- (void).cxx_destruct;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)arg1;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;
- (int)StringAsParentFeedType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paidSubscriptionConversionPointExposureLocationAsString:(int)arg1;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
