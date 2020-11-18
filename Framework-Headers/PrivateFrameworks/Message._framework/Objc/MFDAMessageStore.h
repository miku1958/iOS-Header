//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFLibraryStore.h>

@class DAFolder;

@interface MFDAMessageStore : MFLibraryStore
{
    DAFolder *_DAFolder;
}

- (id)_additionalHeadersForAction:(int)arg1 ofMessage:(id)arg2;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL *)arg4;
- (id)_fetchBodyDataForNormalMessage:(id)arg1 format:(int)arg2 part:(id)arg3 streamConsumer:(id)arg4;
- (id)_fetchBodyDataForSearchResult:(id)arg1 format:(int)arg2 streamConsumer:(id)arg3;
- (BOOL)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange)arg2 isComplete:(BOOL *)arg3 consumer:(id)arg4;
- (id)_folderIDForFetching;
- (void)_remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 filterByDate:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (id)additionalHeadersForForwardOfMessage:(id)arg1;
- (id)additionalHeadersForReplyOfMessage:(id)arg1;
- (BOOL)allowsAppend;
- (id)bestAlternativeForPart:(id)arg1;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (BOOL)canDeleteMessage:(id)arg1;
- (BOOL)canFetchSearchResults;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)defaultAlternativeForPart:(id)arg1;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2;
- (long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)fetchWindow;
- (unsigned long long)growFetchWindow;
- (BOOL)hasMoreFetchableMessages;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (void)issueFlagUpdates:(id)arg1 forMessages:(id)arg2;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (id)messageForRemoteID:(id)arg1;
- (void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2;
- (id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 error:(id *)arg3;
- (id)remoteIDsMatchingSearchText:(id)arg1 limit:(unsigned int)arg2 error:(id *)arg3;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setServerFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (BOOL)shouldDownloadBodyDataForMessage:(id)arg1;
- (BOOL)shouldGrowFetchWindow;
- (BOOL)shouldSetSummaryForMessage:(id)arg1;
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;

@end
