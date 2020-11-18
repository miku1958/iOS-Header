//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBChannelData, NTPBIssueData, NTPBIssueViewData;

@interface NTPBAudioEngage : PBCodable <NSCopying>
{
    double _agedPersonalizationScore;
    double _agedUserFeedbackScore;
    long long _audioDeltaTimePlayed;
    long long _audioTimePlayed;
    double _autoSubscribeCtr;
    double _computedGlobalScoreCoefficient;
    double _diversifiedPersonalizationScore;
    double _featureCtr;
    double _globalScore;
    double _paidNonpaidSubscriptionCtr;
    double _personalizationScore;
    double _subscribedChannelCtr;
    long long _trackDuration;
    double _userFeedbackScore;
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    int _audioEngagementOriginationData;
    NTPBChannelData *_channelData;
    NSString *_engagementId;
    NSString *_feedId;
    int _feedType;
    NSMutableArray *_fractionalCohortMemberships;
    NSString *_groupFeedId;
    int _groupType;
    NSData *_groupViewExposureId;
    NTPBIssueData *_issueData;
    NTPBIssueViewData *_issueViewData;
    NSString *_language;
    int _listeningSource;
    int _playMethod;
    float _playbackSpeed;
    int _position;
    NSString *_sourceChannelId;
    int _trackVariant;
    int _userAction;
    BOOL _adSupportedChannel;
    BOOL _isPaidSubscriberToSourceChannel;
    struct {
        unsigned int agedPersonalizationScore:1;
        unsigned int agedUserFeedbackScore:1;
        unsigned int audioDeltaTimePlayed:1;
        unsigned int audioTimePlayed:1;
        unsigned int autoSubscribeCtr:1;
        unsigned int computedGlobalScoreCoefficient:1;
        unsigned int diversifiedPersonalizationScore:1;
        unsigned int featureCtr:1;
        unsigned int globalScore:1;
        unsigned int paidNonpaidSubscriptionCtr:1;
        unsigned int personalizationScore:1;
        unsigned int subscribedChannelCtr:1;
        unsigned int trackDuration:1;
        unsigned int userFeedbackScore:1;
        unsigned int audioEngagementOriginationData:1;
        unsigned int feedType:1;
        unsigned int groupType:1;
        unsigned int listeningSource:1;
        unsigned int playMethod:1;
        unsigned int playbackSpeed:1;
        unsigned int position:1;
        unsigned int trackVariant:1;
        unsigned int userAction:1;
        unsigned int adSupportedChannel:1;
        unsigned int isPaidSubscriberToSourceChannel:1;
    } _has;
}

@property (nonatomic) BOOL adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property (nonatomic) double agedPersonalizationScore; // @synthesize agedPersonalizationScore=_agedPersonalizationScore;
@property (nonatomic) double agedUserFeedbackScore; // @synthesize agedUserFeedbackScore=_agedUserFeedbackScore;
@property (strong, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property (strong, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property (nonatomic) long long audioDeltaTimePlayed; // @synthesize audioDeltaTimePlayed=_audioDeltaTimePlayed;
@property (nonatomic) int audioEngagementOriginationData; // @synthesize audioEngagementOriginationData=_audioEngagementOriginationData;
@property (nonatomic) long long audioTimePlayed; // @synthesize audioTimePlayed=_audioTimePlayed;
@property (nonatomic) double autoSubscribeCtr; // @synthesize autoSubscribeCtr=_autoSubscribeCtr;
@property (strong, nonatomic) NTPBChannelData *channelData; // @synthesize channelData=_channelData;
@property (nonatomic) double computedGlobalScoreCoefficient; // @synthesize computedGlobalScoreCoefficient=_computedGlobalScoreCoefficient;
@property (nonatomic) double diversifiedPersonalizationScore; // @synthesize diversifiedPersonalizationScore=_diversifiedPersonalizationScore;
@property (strong, nonatomic) NSString *engagementId; // @synthesize engagementId=_engagementId;
@property (nonatomic) double featureCtr; // @synthesize featureCtr=_featureCtr;
@property (strong, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property (nonatomic) int feedType; // @synthesize feedType=_feedType;
@property (strong, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property (nonatomic) double globalScore; // @synthesize globalScore=_globalScore;
@property (strong, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property (nonatomic) int groupType; // @synthesize groupType=_groupType;
@property (strong, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL hasAgedPersonalizationScore;
@property (nonatomic) BOOL hasAgedUserFeedbackScore;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasAudioDeltaTimePlayed;
@property (nonatomic) BOOL hasAudioEngagementOriginationData;
@property (nonatomic) BOOL hasAudioTimePlayed;
@property (nonatomic) BOOL hasAutoSubscribeCtr;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (nonatomic) BOOL hasComputedGlobalScoreCoefficient;
@property (nonatomic) BOOL hasDiversifiedPersonalizationScore;
@property (readonly, nonatomic) BOOL hasEngagementId;
@property (nonatomic) BOOL hasFeatureCtr;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) BOOL hasGlobalScore;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (nonatomic) BOOL hasListeningSource;
@property (nonatomic) BOOL hasPaidNonpaidSubscriptionCtr;
@property (nonatomic) BOOL hasPersonalizationScore;
@property (nonatomic) BOOL hasPlayMethod;
@property (nonatomic) BOOL hasPlaybackSpeed;
@property (nonatomic) BOOL hasPosition;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasSubscribedChannelCtr;
@property (nonatomic) BOOL hasTrackDuration;
@property (nonatomic) BOOL hasTrackVariant;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL hasUserFeedbackScore;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel; // @synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel;
@property (strong, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property (strong, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property (strong, nonatomic) NSString *language; // @synthesize language=_language;
@property (nonatomic) int listeningSource; // @synthesize listeningSource=_listeningSource;
@property (nonatomic) double paidNonpaidSubscriptionCtr; // @synthesize paidNonpaidSubscriptionCtr=_paidNonpaidSubscriptionCtr;
@property (nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property (nonatomic) int playMethod; // @synthesize playMethod=_playMethod;
@property (nonatomic) float playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
@property (nonatomic) int position; // @synthesize position=_position;
@property (strong, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property (nonatomic) double subscribedChannelCtr; // @synthesize subscribedChannelCtr=_subscribedChannelCtr;
@property (nonatomic) long long trackDuration; // @synthesize trackDuration=_trackDuration;
@property (nonatomic) int trackVariant; // @synthesize trackVariant=_trackVariant;
@property (nonatomic) int userAction; // @synthesize userAction=_userAction;
@property (nonatomic) double userFeedbackScore; // @synthesize userFeedbackScore=_userFeedbackScore;

+ (Class)fractionalCohortMembershipType;
- (void).cxx_destruct;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsTrackVariant:(id)arg1;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedTypeAsString:(int)arg1;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)groupTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)trackVariantAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
