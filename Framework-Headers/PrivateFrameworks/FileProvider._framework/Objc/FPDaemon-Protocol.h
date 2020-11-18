//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL;

@protocol FPDaemon
- (void)bookmarkableStringFromDocumentURL:(NSURL *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)documentURLFromBookmarkableString:(NSString *)arg1 completion:(void (^)(NSURL *, NSData *, NSURL *, NSData *, NSError *))arg2;
- (void)extendBookmarkForFileURL:(NSURL *)arg1 toConsumerID:(NSString *)arg2 completionHandler:(void (^)(NSString *, NSError *))arg3;
- (void)extendSandboxForFileURL:(NSURL *)arg1 fromProviderID:(NSString *)arg2 toConsumerID:(NSString *)arg3 completionHandler:(void (^)(NSError *, NSData *, NSURL *, NSData *))arg4;
- (void)providePlaceholderForItemAtURL:(NSURL *)arg1 fromProviderID:(NSString *)arg2 forConsumerID:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)providersCompletionHandler:(void (^)(NSError *, NSDictionary *))arg1;
- (void)startProvidingItemAtURL:(NSURL *)arg1 fromProviderID:(NSString *)arg2 forConsumerID:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)stopProvidingItemAtURL:(NSURL *)arg1 fromProviderID:(NSString *)arg2 forConsumerID:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)wakeUpCompletion:(void (^)(void))arg1;
@end

