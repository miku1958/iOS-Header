//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCompetition, ASContact, NSArray, NSDate, NSDateComponents, NSDictionary, NSNumber, NSString, NSTimeZone, NSUUID, _HKFitnessFriendActivitySnapshot;

@interface ASFriend : NSObject <NSCopying>
{
    NSNumber *_currentCacheIndex;
    ASContact *_contact;
    NSArray *_competitions;
    NSDictionary *_snapshots;
    NSDictionary *_friendAchievements;
    NSDictionary *_friendWorkouts;
}

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) BOOL canSeeMyActivityData;
@property (readonly, nonatomic) ASCompetition *competitionPendingAcceptance;
@property (strong, nonatomic) NSArray *competitions; // @synthesize competitions=_competitions;
@property (readonly, nonatomic) NSArray *completedCompetitions;
@property (strong, nonatomic) ASContact *contact; // @synthesize contact=_contact;
@property (readonly, nonatomic) NSNumber *currentCacheIndex; // @synthesize currentCacheIndex=_currentCacheIndex;
@property (readonly, nonatomic) ASCompetition *currentCompetition;
@property (readonly, nonatomic) NSDateComponents *currentDateComponents;
@property (readonly, nonatomic) ASCompetition *currentOrMostRecentCompetition;
@property (readonly, nonatomic) _HKFitnessFriendActivitySnapshot *currentSnapshot;
@property (readonly, nonatomic) _HKFitnessFriendActivitySnapshot *currentSnapshotWithGoalsCarriedForward;
@property (readonly, nonatomic) NSDate *dateActivityDataInitiallyBecameVisibleToMe;
@property (readonly, nonatomic) NSDate *dateForLatestDataHidden;
@property (readonly, nonatomic) NSDate *dateForLatestDataHiddenFromMe;
@property (readonly, nonatomic) NSDate *dateForLatestIncomingCompetitionRequest;
@property (readonly, nonatomic) NSDate *dateForLatestOutgoingCompetitionRequest;
@property (readonly, nonatomic) NSDate *dateForLatestOutgoingInviteRequest;
@property (readonly, nonatomic) NSDate *dateForLatestRelationshipStart;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDate *earliestCompetitionVictoryOrPotentialVictoryDate;
@property (strong, nonatomic) NSDictionary *friendAchievements; // @synthesize friendAchievements=_friendAchievements;
@property (strong, nonatomic) NSDictionary *friendWorkouts; // @synthesize friendWorkouts=_friendWorkouts;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL hasCompetitionHistory;
@property (readonly, nonatomic) BOOL hasCompetitionRequestFromMe;
@property (readonly, nonatomic) BOOL hasCompletedCompetition;
@property (readonly, nonatomic) BOOL hasCompletedFirstDayOfCurrentCompetition;
@property (readonly, nonatomic) BOOL hasInviteRequestFromMe;
@property (readonly, nonatomic) BOOL hasPendingCompetitionRequestFromMe;
@property (readonly, nonatomic) BOOL ignoredCompetitionRequestFromMe;
@property (readonly, nonatomic) BOOL inviteRequestToMeWasAccepted;
@property (readonly, nonatomic) BOOL isActivityDataCurrentlyVisibleToMe;
@property (readonly, nonatomic) BOOL isAwaitingCompetitionResponseFromMe;
@property (readonly, nonatomic) BOOL isAwaitingInviteResponseFromMe;
@property (readonly, nonatomic) BOOL isCompetitionActive;
@property (readonly, nonatomic) BOOL isCurrentlyHidingActivityDataFromMe;
@property (readonly, nonatomic) BOOL isEligibleToReceiveCompetitionRequest;
@property (readonly, nonatomic) BOOL isFriendshipCurrentlyActive;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) BOOL isMyActivityDataCurrentlyHidden;
@property (readonly, nonatomic, getter=isMe) BOOL me;
@property (readonly, nonatomic) _HKFitnessFriendActivitySnapshot *mostRecentSnapshot;
@property (readonly, nonatomic) ASCompetition *mostRecentlyCompletedCompetition;
@property (readonly, nonatomic) unsigned long long numberOfCompetitionWinsAgainstMe;
@property (readonly, nonatomic) unsigned long long numberOfCompetitionWinsByMe;
@property (readonly, nonatomic) BOOL sentInviteRequestToMe;
@property (strong, nonatomic) NSDictionary *snapshots; // @synthesize snapshots=_snapshots;
@property (readonly, nonatomic) BOOL supportsCompetitions;
@property (readonly, nonatomic) NSTimeZone *timeZone;

+ (id)friendWithCodableFriend:(id)arg1;
- (void).cxx_destruct;
- (id)_competitionStartMessage:(id)arg1 replacingNameAndDatePlaceholdersForCompetitionStartDate:(id)arg2;
- (struct _HKFitnessFriendActivitySnapshot *)_emptySnapshotWithGoalsCarriedForwardForSnapshotIndex:(long long)arg1;
- (id)as_competitionAcceptConfirmationMessageForCompetition:(id)arg1;
- (id)as_competitionAcceptConfirmationTitle;
- (id)as_competitionAcceptErrorMessage;
- (id)as_competitionAcceptedNotificationMessageForCompetition:(id)arg1;
- (id)as_competitionAcceptedNotificationTitle;
- (id)as_competitionLearnMoreDetailAction;
- (id)as_competitionLearnMoreDetailMessage;
- (id)as_competitionLearnMoreFullDescription;
- (id)as_competitionLearnMoreIntroduction;
- (id)as_competitionLearnMorePopupAction;
- (id)as_competitionLearnMoreReceivedNotificationMessageWithWheelchairUse:(long long)arg1;
- (id)as_competitionLearnMoreSendConfirmationMessageWithWheelchairUse:(long long)arg1;
- (id)as_competitionLearnMoreTitle;
- (id)as_competitionReceivedHidingAcceptAction;
- (id)as_competitionReceivedHidingWarningMessage;
- (id)as_competitionReceivedNotificationAcceptAction;
- (id)as_competitionReceivedNotificationMessage;
- (id)as_competitionReceivedNotificationTitle;
- (id)as_competitionRequestDurationRemainingString;
- (id)as_competitionSendConfirmationMessage;
- (id)as_competitionSendConfirmationSendAction;
- (id)as_competitionSendConfirmationTitle;
- (id)as_competitionSendErrorMessage;
- (id)as_competitionStageString;
- (id)as_competitionStatusBreadcrumbString;
- (id)as_detailedSharingDurationString;
- (id)as_friendListNameStringWithDotPrefix:(id)arg1 keyColor:(id)arg2;
- (id)as_invitedDurationString;
- (id)as_myCompetitionScoreStringWithContext:(id)arg1 color:(id)arg2;
- (id)as_opponentCompetitionScoreStringWithContext:(id)arg1 color:(id)arg2;
- (id)as_simpleHiddenFromString;
- (id)as_simpleSharingDurationString;
- (id)codableFriendIncludingCloudKitFields:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithActivitySnapshots:(id)arg1 friendAchievements:(id)arg2 friendWorkouts:(id)arg3 contact:(id)arg4 competitions:(id)arg5;
- (BOOL)isActivityDataVisibleToMeForDate:(id)arg1;
- (BOOL)isHidingActivityDataFromMeForDate:(id)arg1;
- (struct _HKFitnessFriendActivitySnapshot *)snapshotWithGoalsCarriedForwardForSnapshotIndex:(id)arg1;

@end

