//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CKKnowledgeStore, NSDate, NSDictionary, NSString;

@protocol CKPermanentEventStorePrivate

@property (nonatomic, readonly) CKKnowledgeStore *backingStore;

- (void)deleteEventWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (BOOL)deleteEventWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSDictionary *)historicEventsAndReturnError:(id *)arg1;
- (void)historicEventsWithCompletionHandler:(void (^)(NSError *, NSDictionary *))arg1;
- (void)setFirstSeen:(NSDate *)arg1 forEventWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setFrequency:(long long)arg1 forEventWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setLastDuration:(double)arg1 forEventWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setLastSeen:(NSDate *)arg1 forEventWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setTotalDuration:(double)arg1 forEventWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

