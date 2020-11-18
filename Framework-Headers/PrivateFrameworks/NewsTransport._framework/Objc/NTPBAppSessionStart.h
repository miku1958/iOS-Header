//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, NTPBWidgetEngagement;

@interface NTPBAppSessionStart : PBCodable <NSCopying>
{
    long long _lastAppSessionTimestamp;
    int _appsAutoSubscribeFeedCount;
    NSMutableArray *_autoSubscribedFeedIds;
    NSString *_campaignId;
    NSString *_campaignType;
    int _channelSubscriptionCount;
    NSString *_creativeId;
    NSMutableArray *_groupableFeedIds;
    int _internalAutoSubscribeFeedCount;
    NSString *_notificationArticleId;
    NSMutableArray *_notificationChannelIds;
    int _notificationEnabledChannelsCount;
    NSString *_notificationId;
    NSString *_notificationSenderChannelId;
    NSString *_notificationSourceChannelId;
    int _notificationType;
    int _notitificationsEnabledChannelsCount;
    NSMutableArray *_paidSubscriptionChannelIds;
    int _portraitAutoSubscribeFeedCount;
    NSString *_referringSourceApplication;
    NSString *_referringUrl;
    int _safariAutoSubscribeFeedCount;
    int _sessionStartMethod;
    NSMutableArray *_subscribedFeedIds;
    int _topicSubscriptionCount;
    NSString *_userActivityType;
    int _viewabilityState;
    NSMutableArray *_visibleViews;
    int _widgetArticleRank;
    NTPBWidgetEngagement *_widgetEngagement;
    int _widgetSection;
    int _widgetSectionArticleRank;
    BOOL _isMarketingNotificationEnabled;
    BOOL _isNewIssuesNotificationEnabled;
    BOOL _startedFromNotification;
    struct {
        unsigned int lastAppSessionTimestamp:1;
        unsigned int appsAutoSubscribeFeedCount:1;
        unsigned int channelSubscriptionCount:1;
        unsigned int internalAutoSubscribeFeedCount:1;
        unsigned int notificationEnabledChannelsCount:1;
        unsigned int notificationType:1;
        unsigned int notitificationsEnabledChannelsCount:1;
        unsigned int portraitAutoSubscribeFeedCount:1;
        unsigned int safariAutoSubscribeFeedCount:1;
        unsigned int sessionStartMethod:1;
        unsigned int topicSubscriptionCount:1;
        unsigned int viewabilityState:1;
        unsigned int widgetArticleRank:1;
        unsigned int widgetSection:1;
        unsigned int widgetSectionArticleRank:1;
        unsigned int isMarketingNotificationEnabled:1;
        unsigned int isNewIssuesNotificationEnabled:1;
        unsigned int startedFromNotification:1;
    } _has;
}

@property (nonatomic) int appsAutoSubscribeFeedCount; // @synthesize appsAutoSubscribeFeedCount=_appsAutoSubscribeFeedCount;
@property (strong, nonatomic) NSMutableArray *autoSubscribedFeedIds; // @synthesize autoSubscribedFeedIds=_autoSubscribedFeedIds;
@property (strong, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property (strong, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property (nonatomic) int channelSubscriptionCount; // @synthesize channelSubscriptionCount=_channelSubscriptionCount;
@property (strong, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property (strong, nonatomic) NSMutableArray *groupableFeedIds; // @synthesize groupableFeedIds=_groupableFeedIds;
@property (nonatomic) BOOL hasAppsAutoSubscribeFeedCount;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (nonatomic) BOOL hasChannelSubscriptionCount;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasInternalAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasIsMarketingNotificationEnabled;
@property (nonatomic) BOOL hasIsNewIssuesNotificationEnabled;
@property (nonatomic) BOOL hasLastAppSessionTimestamp;
@property (readonly, nonatomic) BOOL hasNotificationArticleId;
@property (nonatomic) BOOL hasNotificationEnabledChannelsCount;
@property (readonly, nonatomic) BOOL hasNotificationId;
@property (readonly, nonatomic) BOOL hasNotificationSenderChannelId;
@property (readonly, nonatomic) BOOL hasNotificationSourceChannelId;
@property (nonatomic) BOOL hasNotificationType;
@property (nonatomic) BOOL hasNotitificationsEnabledChannelsCount;
@property (nonatomic) BOOL hasPortraitAutoSubscribeFeedCount;
@property (readonly, nonatomic) BOOL hasReferringSourceApplication;
@property (readonly, nonatomic) BOOL hasReferringUrl;
@property (nonatomic) BOOL hasSafariAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasSessionStartMethod;
@property (nonatomic) BOOL hasStartedFromNotification;
@property (nonatomic) BOOL hasTopicSubscriptionCount;
@property (readonly, nonatomic) BOOL hasUserActivityType;
@property (nonatomic) BOOL hasViewabilityState;
@property (nonatomic) BOOL hasWidgetArticleRank;
@property (readonly, nonatomic) BOOL hasWidgetEngagement;
@property (nonatomic) BOOL hasWidgetSection;
@property (nonatomic) BOOL hasWidgetSectionArticleRank;
@property (nonatomic) int internalAutoSubscribeFeedCount; // @synthesize internalAutoSubscribeFeedCount=_internalAutoSubscribeFeedCount;
@property (nonatomic) BOOL isMarketingNotificationEnabled; // @synthesize isMarketingNotificationEnabled=_isMarketingNotificationEnabled;
@property (nonatomic) BOOL isNewIssuesNotificationEnabled; // @synthesize isNewIssuesNotificationEnabled=_isNewIssuesNotificationEnabled;
@property (nonatomic) long long lastAppSessionTimestamp; // @synthesize lastAppSessionTimestamp=_lastAppSessionTimestamp;
@property (strong, nonatomic) NSString *notificationArticleId; // @synthesize notificationArticleId=_notificationArticleId;
@property (strong, nonatomic) NSMutableArray *notificationChannelIds; // @synthesize notificationChannelIds=_notificationChannelIds;
@property (nonatomic) int notificationEnabledChannelsCount; // @synthesize notificationEnabledChannelsCount=_notificationEnabledChannelsCount;
@property (strong, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
@property (strong, nonatomic) NSString *notificationSenderChannelId; // @synthesize notificationSenderChannelId=_notificationSenderChannelId;
@property (strong, nonatomic) NSString *notificationSourceChannelId; // @synthesize notificationSourceChannelId=_notificationSourceChannelId;
@property (nonatomic) int notificationType; // @synthesize notificationType=_notificationType;
@property (nonatomic) int notitificationsEnabledChannelsCount; // @synthesize notitificationsEnabledChannelsCount=_notitificationsEnabledChannelsCount;
@property (strong, nonatomic) NSMutableArray *paidSubscriptionChannelIds; // @synthesize paidSubscriptionChannelIds=_paidSubscriptionChannelIds;
@property (nonatomic) int portraitAutoSubscribeFeedCount; // @synthesize portraitAutoSubscribeFeedCount=_portraitAutoSubscribeFeedCount;
@property (strong, nonatomic) NSString *referringSourceApplication; // @synthesize referringSourceApplication=_referringSourceApplication;
@property (strong, nonatomic) NSString *referringUrl; // @synthesize referringUrl=_referringUrl;
@property (nonatomic) int safariAutoSubscribeFeedCount; // @synthesize safariAutoSubscribeFeedCount=_safariAutoSubscribeFeedCount;
@property (nonatomic) int sessionStartMethod; // @synthesize sessionStartMethod=_sessionStartMethod;
@property (nonatomic) BOOL startedFromNotification; // @synthesize startedFromNotification=_startedFromNotification;
@property (strong, nonatomic) NSMutableArray *subscribedFeedIds; // @synthesize subscribedFeedIds=_subscribedFeedIds;
@property (nonatomic) int topicSubscriptionCount; // @synthesize topicSubscriptionCount=_topicSubscriptionCount;
@property (strong, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;
@property (nonatomic) int viewabilityState; // @synthesize viewabilityState=_viewabilityState;
@property (strong, nonatomic) NSMutableArray *visibleViews; // @synthesize visibleViews=_visibleViews;
@property (nonatomic) int widgetArticleRank; // @synthesize widgetArticleRank=_widgetArticleRank;
@property (strong, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property (nonatomic) int widgetSection; // @synthesize widgetSection=_widgetSection;
@property (nonatomic) int widgetSectionArticleRank; // @synthesize widgetSectionArticleRank=_widgetSectionArticleRank;

+ (Class)autoSubscribedFeedIdsType;
+ (Class)groupableFeedIdsType;
+ (Class)notificationChannelIdsType;
+ (Class)paidSubscriptionChannelIdsType;
+ (Class)subscribedFeedIdsType;
+ (Class)visibleViewsType;
- (void).cxx_destruct;
- (int)StringAsWidgetSection:(id)arg1;
- (void)addAutoSubscribedFeedIds:(id)arg1;
- (void)addGroupableFeedIds:(id)arg1;
- (void)addNotificationChannelIds:(id)arg1;
- (void)addPaidSubscriptionChannelIds:(id)arg1;
- (void)addSubscribedFeedIds:(id)arg1;
- (void)addVisibleViews:(id)arg1;
- (id)autoSubscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)autoSubscribedFeedIdsCount;
- (void)clearAutoSubscribedFeedIds;
- (void)clearGroupableFeedIds;
- (void)clearNotificationChannelIds;
- (void)clearPaidSubscriptionChannelIds;
- (void)clearSubscribedFeedIds;
- (void)clearVisibleViews;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupableFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupableFeedIdsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notificationChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)notificationChannelIdsCount;
- (id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paidSubscriptionChannelIdsCount;
- (BOOL)readFrom:(id)arg1;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subscribedFeedIdsCount;
- (id)visibleViewsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleViewsCount;
- (id)widgetSectionAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

