//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/SGSuggestionsServiceContactsProtocol-Protocol.h>
#import <CoreSuggestions/SGSuggestionsServiceEventsProtocol-Protocol.h>
#import <CoreSuggestions/SGSuggestionsServiceInternalProtocol-Protocol.h>
#import <CoreSuggestions/SGSuggestionsServiceMailProtocol-Protocol.h>
#import <CoreSuggestions/SGSuggestionsServiceSearchToShareProtocol-Protocol.h>

@class NSString, SGDaemonConnection;
@protocol SGDSuggestManagerAllProtocol;

@interface SGSuggestionsService : NSObject <SGSuggestionsServiceContactsProtocol, SGSuggestionsServiceEventsProtocol, SGSuggestionsServiceInternalProtocol, SGSuggestionsServiceMailProtocol, SGSuggestionsServiceSearchToShareProtocol>
{
    SGDaemonConnection *_daemonConnection;
    id<SGDSuggestManagerAllProtocol> _managerForTesting;
    BOOL _keepDirty;
    NSString *_machServiceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)filteredSearchableItemsFromItems:(id)arg1;
+ (void)initialize;
+ (BOOL)isHarvestingSupported;
+ (void)prepareForQuery;
+ (id)serviceForContacts;
+ (id)serviceForEvents;
+ (id)serviceForInternal;
+ (id)serviceForMail;
+ (id)serviceForMessages;
+ (id)serviceForSearchToShare;
+ (id)wantedSearchableItemsFromItems:(id)arg1;
- (void).cxx_destruct;
- (void)_addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_remoteSuggestionManager;
- (BOOL)addInteractions:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;
- (void)addInteractions:(id)arg1 bundleId:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)addSearchableItems:(id)arg1 error:(id *)arg2;
- (void)addSearchableItems:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)allContactsLimitedTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)allEventsLimitedTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)clearCachesFully:(BOOL)arg1 error:(id *)arg2;
- (void)clearCachesFully:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)cnContactMatchesForRecordId:(id)arg1 error:(id *)arg2;
- (void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)cnContactMatchesForRecordIds:(id)arg1 error:(id *)arg2;
- (void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)confirmContact:(id)arg1 error:(id *)arg2;
- (void)confirmContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)confirmContactDetailRecord:(id)arg1 error:(id *)arg2;
- (void)confirmContactDetailRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)confirmEvent:(id)arg1 error:(id *)arg2;
- (void)confirmEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)confirmEventByRecordId:(id)arg1 error:(id *)arg2;
- (void)confirmEventByRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)confirmRecord:(id)arg1 error:(id *)arg2;
- (void)confirmRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactFromRecordID:(id)arg1;
- (id)contactFromRecordID:(id)arg1 error:(id *)arg2;
- (void)contactFromRecordID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactMatchesByEmailAddress:(id)arg1;
- (id)contactMatchesByEmailAddress:(id)arg1 error:(id *)arg2;
- (void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactMatchesByPhoneNumber:(id)arg1;
- (id)contactMatchesByPhoneNumber:(id)arg1 error:(id *)arg2;
- (void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactMatchesOrLookupIdByEmailAddress:(id)arg1 error:(id *)arg2;
- (void)contactMatchesOrLookupIdByEmailAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 error:(id *)arg2;
- (void)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)daemonExit:(id *)arg1;
- (void)daemonExitWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)deregisterContactsChangeObserverWithToken:(id)arg1;
- (BOOL)deregisterEventsChangeObserverWithToken:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (BOOL)drainQueueCompletely:(id *)arg1;
- (void)drainQueueCompletelyWithCompletion:(CDUnknownBlockType)arg1;
- (id)emailAddressIsSignificant:(id)arg1 error:(id *)arg2;
- (void)emailAddressIsSignificant:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)eventFromRecordID:(id)arg1 error:(id *)arg2;
- (void)eventFromRecordID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)eventFromUniqueId:(id)arg1 error:(id *)arg2;
- (void)eventFromUniqueId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)eventsForSchemas:(id)arg1 usingStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fullDownloadRequestBatch:(unsigned long long)arg1 error:(id *)arg2;
- (void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithMachServiceName:(id)arg1 protocol:(id)arg2;
- (BOOL)isEnabledWithError:(id *)arg1;
- (void)keepDirty:(BOOL)arg1;
- (void)keysForSchemas:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)messagesToRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (id)messagesToRefreshWithError:(id *)arg1;
- (id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 error:(id *)arg4;
- (void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)originFromRecordId:(id)arg1 error:(id *)arg2;
- (void)originFromRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id *)arg6;
- (void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id *)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (BOOL)prepareForRealtimeExtraction:(id *)arg1;
- (void)prepareForRealtimeExtractionWithCompletion:(CDUnknownBlockType)arg1;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryPredictionsFeedbackReportForConversation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryPredictionsForConversation:(id)arg1 count:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)registerContactsChangeObserver:(CDUnknownBlockType)arg1;
- (id)registerEventsChangeObserver:(CDUnknownBlockType)arg1;
- (BOOL)rejectContact:(id)arg1 error:(id *)arg2;
- (void)rejectContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)rejectContactDetailRecord:(id)arg1 error:(id *)arg2;
- (void)rejectContactDetailRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)rejectEvent:(id)arg1 error:(id *)arg2;
- (void)rejectEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)rejectEventByRecordId:(id)arg1 error:(id *)arg2;
- (void)rejectEventByRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)rejectRecord:(id)arg1 error:(id *)arg2;
- (void)rejectRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)relevantABRecordIDsWithLimit:(long long)arg1 error:(id *)arg2;
- (void)relevantABRecordIDsWithLimit:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)removeAllStoredPseudoContacts:(id *)arg1;
- (void)removeAllStoredPseudoContactsWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)reportMessagesFound:(id)arg1 lost:(id)arg2 error:(id *)arg3;
- (void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)resetConfirmationAndRejectionHistory:(id *)arg1;
- (void)resetConfirmationAndRejectionHistoryWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)resolveFullDownloadRequests:(id)arg1 error:(id *)arg2;
- (void)resolveFullDownloadRequests:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (BOOL)sendRTCLogs:(id *)arg1;
- (void)setManagerForTesting:(id)arg1;
- (BOOL)sleep:(id *)arg1;
- (void)sleepWithCompletion:(CDUnknownBlockType)arg1;
- (id)spotlightObserver;
- (id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 error:(id *)arg2;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 error:(id *)arg4;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 error:(id *)arg5;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 error:(id *)arg5;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 error:(id *)arg6;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
- (void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)updateMessages:(id)arg1 state:(unsigned long long)arg2 error:(id *)arg3;
- (void)updateMessages:(id)arg1 state:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithCompletion:(CDUnknownBlockType)arg2;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithLastModificationDate:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

