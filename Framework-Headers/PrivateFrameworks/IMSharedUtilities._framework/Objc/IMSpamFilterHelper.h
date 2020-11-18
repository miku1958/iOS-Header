//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMSpamFilterHelper : NSObject
{
}

+ (id)_cnRecordForAliases:(id)arg1;
+ (BOOL)accountCountryIsCandidateForHawking:(id)arg1;
+ (BOOL)accountCountryIsCandidateForSMSFilter:(id)arg1;
+ (BOOL)accountRegionIsCandidateForHawking:(id)arg1;
+ (BOOL)anyParticipantIsCandidateForBlackhole:(id)arg1;
+ (BOOL)anyParticipantIsKnownContact:(id)arg1;
+ (id)internationalSpamFilterLearnMoreURL;
+ (BOOL)isBlackholeEnabledForEligibleAccounts:(BOOL)arg1;
+ (BOOL)isChineseSpamFilteringEnabled;
+ (BOOL)isFilterUnknownSendersEnabled;
+ (BOOL)isInternationalSpamFilteringEnabled;
+ (BOOL)isKnownContact:(id)arg1;
+ (id)mapID:(id)arg1 usingKey:(id)arg2;
+ (void)participantsAreiMessagable:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (BOOL)receiverIsCandidateForHawking:(id)arg1;
+ (BOOL)receiverIsCandidateForSMSFilter:(id)arg1;
+ (BOOL)receivingID:(id)arg1 isCountryCode:(id)arg2;
+ (id)sanitizeParticipants:(id)arg1 excludingHandles:(id)arg2;
+ (BOOL)senderIsCandidateForBlackhole:(id)arg1;
+ (BOOL)senderIsCandidateForSMSDowngrade:(id)arg1;
+ (BOOL)senderIsChinaHandle:(id)arg1;
+ (BOOL)senderIsKnownContact:(id)arg1;
+ (BOOL)shouldBlackholeGroupMessageFromSender:(id)arg1 toRecipient:(id)arg2 ifRecipientIsCandidate:(BOOL)arg3 withOtherParticipants:(id)arg4 givenHistory:(BOOL)arg5 forEligibleAccounts:(BOOL)arg6;
+ (BOOL)shouldBlackholeMessageFromSender:(id)arg1 toRecipient:(id)arg2 ifRecipientIsCandidate:(BOOL)arg3 givenHistory:(BOOL)arg4 forEligibleAccounts:(BOOL)arg5;
+ (BOOL)shouldDowngradeToRecipient:(id)arg1 fromSender:(id)arg2 ifCapableOfSMS:(BOOL)arg3 withConversationDowngradeState:(BOOL)arg4 andConversationHistoryState:(BOOL)arg5;
+ (BOOL)shouldShowSMSWarningForSender:(id)arg1 forRecipient:(id)arg2 withConversationHistory:(BOOL)arg3;

@end
