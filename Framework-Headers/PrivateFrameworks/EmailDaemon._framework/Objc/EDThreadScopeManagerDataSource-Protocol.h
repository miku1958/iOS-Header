//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class EDThreadScopeManager, EMMailboxObjectID, EMMailboxScope, NSArray, NSDictionary;

@protocol EDThreadScopeManagerDataSource
- (BOOL)threadScopeManager:(EDThreadScopeManager *)arg1 evictThreadScopesWithDatabaseIDs:(NSArray *)arg2 completionBlock:(void (^)(BOOL))arg3;
- (void)threadScopeManager:(EDThreadScopeManager *)arg1 gatherStatisticsForThreadScopesWithDatabaseIDs:(NSDictionary *)arg2 block:(void (^)(long long, NSDate *, unsigned long long))arg3;
- (BOOL)threadScopeManager:(EDThreadScopeManager *)arg1 isValidMailboxObjectID:(EMMailboxObjectID *)arg2;
- (BOOL)threadScopeManager:(EDThreadScopeManager *)arg1 mailboxScopeExists:(EMMailboxScope *)arg2;
- (void)threadScopeManager:(EDThreadScopeManager *)arg1 populateThreadScopesWithBlock:(void (^)(long long, NSString *, NSNumber *, NSData *, BOOL, NSDate *))arg2;
@end

