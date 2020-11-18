//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, NSString, NSURL, NSUUID;

@protocol WBSHistoryConnectionProtocol
- (void)beginURLCompletionSession:(void (^)(id<WBSURLCompletionSessionProtocol>, NSError *))arg1;
- (void)clearHistoryVisitsAddedAfterDate:(NSDate *)arg1 endDate:(NSDate *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)clearHistoryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)debugGetDatabaseURLWithCompletionHandler:(void (^)(NSURL *, NSError *))arg1;
- (void)getVisitedLinksWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)groupVisitsIntoSessionsBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)makePermanentAllTestDriveHistoryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)recordRedirectFromVisitWithUUID:(NSUUID *)arg1 destinationURL:(NSURL *)arg2 origin:(long long)arg3 date:(NSDate *)arg4 completionHandler:(void (^)(NSUUID *, NSError *))arg5;
- (void)recordVisitToURL:(NSURL *)arg1 title:(NSString *)arg2 wasHTTPNonGet:(BOOL)arg3 visitWasFailure:(BOOL)arg4 increaseVisitCount:(BOOL)arg5 origin:(long long)arg6 completionHandler:(void (^)(NSUUID *, NSError *))arg7;
- (void)removeAllTestDriveHistoryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)removeItemsWithURLsInResponseToUserAction:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)updateTitle:(NSString *)arg1 forVisitWithUUID:(NSUUID *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

