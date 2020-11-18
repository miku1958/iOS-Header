//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PPLocalConnectionsStore, PPLocalContactStore, PPLocalEventStore, PPLocalLocationStore, PPLocalNamedEntityStore, PPLocalQuickTypeBroker, PPLocalTopicStore, PPSQLDatabase;

@interface PPFeedbackStorage : NSObject
{
    PPSQLDatabase *_db;
    PPLocalNamedEntityStore *_namedEntityStoreOverride;
    PPLocalTopicStore *_topicStoreOverride;
    PPLocalLocationStore *_locationStoreOverride;
    PPLocalQuickTypeBroker *_quickTypeBrokerOverride;
    PPLocalContactStore *_contactStoreOverride;
    PPLocalEventStore *_eventStoreOverride;
    PPLocalConnectionsStore *_connectionsStoreOverride;
}

+ (void)logFeedback:(id)arg1 domain:(unsigned char)arg2 domainStatus:(int)arg3;
+ (id)storeTypeDescription:(unsigned char)arg1;
+ (void)transformOfferedItemsIntoEngagementAndRejection:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_clearPendingFeedbackRecordsWithStoreType:(unsigned char)arg1 limit:(int)arg2;
- (void)_emitMaxRowCountEvent;
- (id)connectionsStore;
- (id)contactStore;
- (BOOL)deleteAllPendingFeedbackOlderThanDate:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (id)eventStore;
- (void)filterPendingFeedbackItems:(id)arg1 storeType:(unsigned char)arg2 timestamp:(double)arg3 clientIdentifier:(id)arg4 clientBundleId:(id)arg5 mappingId:(id)arg6;
- (id)init;
- (id)initWithDatabase:(id)arg1 namedEntityStoreOverride:(id)arg2 topicStoreOverride:(id)arg3 locationStoreOverride:(id)arg4 quickTypeBrokerOverride:(id)arg5 contactStoreOverride:(id)arg6 eventStoreOverride:(id)arg7 connectionsStoreOverride:(id)arg8;
- (id)locationStore;
- (id)namedEntityStore;
- (BOOL)processPendingFeedbackWithStoreType:(unsigned char)arg1 shouldContinueBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)quickTypeBroker;
- (BOOL)storePendingFeedback:(id)arg1 storeType:(unsigned char)arg2 error:(id *)arg3;
- (id)topicStore;

@end
