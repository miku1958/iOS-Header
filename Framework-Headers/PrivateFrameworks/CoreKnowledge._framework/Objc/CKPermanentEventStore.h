//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKPermanentEventStorePrivate-Protocol.h>
#import <CoreKnowledge/CKPermanentReadableEventStore-Protocol.h>
#import <CoreKnowledge/CKPermanentWritableEventStore-Protocol.h>

@class CKKnowledgeStore, MISSING_TYPE;

@interface CKPermanentEventStore : NSObject <CKPermanentWritableEventStore, CKPermanentReadableEventStore, CKPermanentEventStorePrivate>
{
    MISSING_TYPE *knowledgeStore;
}

@property (nonatomic, readonly) CKKnowledgeStore *backingStore;

+ (id)createEventWithIdentifier:(id)arg1 dateInterval:(id)arg2 metadata:(id)arg3 fromEvent:(id)arg4;
+ (id)defaultStore;
- (void).cxx_destruct;
- (void)deleteEventWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)deleteEventWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)deleteInteractionsWithBundleId:(id)arg1 error:(id *)arg2;
- (void)historicEventWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)historicEventsAndReturnError:(id *)arg1;
- (void)historicEventsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)historicEventsWithSourceBundleIdentifier:(id)arg1 andIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithKnowledgeStore:(id)arg1;
- (void)recordEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)recordEvent:(id)arg1 error:(id *)arg2;
- (void)recordInteraction:(id)arg1 bundleId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)recordInteraction:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;
- (void)recordInteraction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)recordInteraction:(id)arg1 error:(id *)arg2;
- (void)setFirstSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setFrequency:(long long)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLastDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLastSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setTotalDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
