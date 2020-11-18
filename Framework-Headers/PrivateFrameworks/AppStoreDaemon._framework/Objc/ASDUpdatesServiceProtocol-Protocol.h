//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol ASDUpdatesServiceProtocol
- (void)autoUpdateEnabled:(void (^)(BOOL))arg1;
- (void)compatibilityUpdateForBundleIDs:(NSArray *)arg1 userInitiated:(BOOL)arg2 withReplyHandler:(void (^)(NSError *))arg3;
- (void)confirmAgentRequestedUpdateAll:(void (^)(BOOL))arg1;
- (void)getUpdatesWithReplyHandler:(void (^)(NSArray *))arg1;
- (void)refreshUpdateCountWithReplyHandler:(void (^)(long long, NSError *))arg1;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)reloadFromServerWithReplyHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)setAutoUpdateEnabled:(BOOL)arg1 withReplyHandler:(void (^)(void))arg2;
- (void)updateAllWithOrder:(NSArray *)arg1 replyHandler:(void (^)(BOOL, NSArray *, NSError *))arg2;
@end
