//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeyboardServices/NSObject-Protocol.h>

@class NSArray, NSPredicate;

@protocol _KSTextReplacementServiceProtocol <NSObject>
- (void)addEntries:(NSArray *)arg1 removeEntries:(NSArray *)arg2 withReply:(void (^)(BOOL, NSError *))arg3;
- (void)cancelPendingUpdatesWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)queryTextReplacementEntriesWithReply:(void (^)(NSArray *, BOOL))arg1;
- (void)queryTextReplacementsWithPredicate:(NSPredicate *)arg1 reply:(void (^)(NSArray *, BOOL))arg2;
- (void)removeAllEntries;
- (void)requestSyncWithReply:(void (^)(BOOL))arg1;
@end

