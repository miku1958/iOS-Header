//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <JITAppKit/NSURLSessionDataDelegate-Protocol.h>
#import <JITAppKit/NSURLSessionDownloadDelegate-Protocol.h>

@class NSArray, NSHTTPCookieStorage, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSOperationQueue, NSRecursiveLock, NSSet, NSString, NSURLCache, NSURLSession;

@interface MCLURLDataLoader : NSObject <NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>
{
    NSString *_cachePath;
    NSURLCache *_cache;
    NSString *_downloadCacheDirectory;
    NSURLSession *_session;
    NSHTTPCookieStorage *_cookieStorage;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_priorities;
    NSMutableArray *_taskQueue;
    NSRecursiveLock *_taskQueueLock;
    NSMutableDictionary *_activeTasks;
    NSMutableArray *_sessionTasks;
    NSMutableOrderedSet *_duplicateTasks;
    NSMutableOrderedSet *_rewriteRules;
    BOOL _suspended;
    BOOL _resuming;
    unsigned long long _backgroundTaskIdentifier;
}

@property (readonly, nonatomic) NSURLCache *cache;
@property (readonly, nonatomic) NSSet *cacheLocations;
@property (readonly, nonatomic) NSHTTPCookieStorage *cookieStorage; // @synthesize cookieStorage=_cookieStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSArray *rewriteRules;
@property (readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

+ (void)addSessionConfigurator:(CDUnknownBlockType)arg1;
+ (void)applyDefaultRequestHeaders:(id)arg1;
+ (id)dateFromRFC1123:(id)arg1;
+ (id)downloadData;
+ (id)duplicateResponse:(id)arg1 withContentLength:(long long)arg2;
+ (id)fileExtensionForMimeType:(id)arg1;
+ (BOOL)isValidResumeData:(id)arg1;
+ (id)mimeTypeForFileExtension:(id)arg1;
+ (void)removeFilesOlderThan:(id)arg1 inDirectory:(id)arg2;
+ (void)restart:(CDUnknownBlockType)arg1;
+ (id)shared;
+ (BOOL)task:(id)arg1 equalsToTask:(id)arg2;
+ (id)uniqueImageKeyForURL:(id)arg1;
+ (id)uniqueKeyForURL:(id)arg1;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (id)_cachedResponseForRequest:(id)arg1;
- (void)_removeCachedResponseForRequest:(id)arg1;
- (void)_removeCachedResponseForRequest:(id)arg1 force:(BOOL)arg2;
- (void)addCacheLocation:(id)arg1;
- (void)addRewriteRule:(id)arg1;
- (id)allCookies;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applyRewriteRules:(id)arg1;
- (void)backgroundClearOldCaches:(id)arg1;
- (void)backgroundRemoveCachedResponseForRequest:(id)arg1;
- (id)cachableFileAttributes:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)cancelTasks:(id)arg1;
- (void)clearCache;
- (void)clearOldCaches:(id)arg1;
- (void)configureSession;
- (void)configureSession:(id)arg1;
- (id)configuredURLRequestForTask:(id)arg1 download:(BOOL *)arg2 resumeData:(id *)arg3;
- (unsigned long long)connectionsLimitForPriorityOfTask:(id)arg1;
- (id)cookiesForURL:(id)arg1;
- (id)defaultSessionConfiguration;
- (BOOL)deleteCookie:(id)arg1 inDomain:(id)arg2 secure:(BOOL)arg3;
- (void)deleteCookiesMatchingPredicate:(id)arg1;
- (void)dispose;
- (id)downloadCachedResponse:(id)arg1;
- (id)downloadImageFromURL:(id)arg1 category:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)downloadImageWithRequest:(id)arg1 category:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)downloadRequest:(id)arg1 category:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)downloadRequest:(id)arg1 toPath:(id)arg2 category:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)downloadURL:(id)arg1 category:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)downloadURL:(id)arg1 toPath:(id)arg2 category:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)duplicateTasksForTask:(id)arg1;
- (void)enqueueTask:(id)arg1 reschedule:(BOOL)arg2;
- (void)enumerateCookies:(id)arg1 inDomain:(id)arg2 secure:(BOOL)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)enumerateCookies:(id)arg1 secure:(BOOL)arg2 cookies:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)findCookie:(id)arg1 inDomain:(id)arg2 secure:(BOOL)arg3;
- (id)findCookie:(id)arg1 inDomain:(id)arg2 secure:(BOOL)arg3 cookies:(id)arg4;
- (id)findMatchingCookies:(id)arg1 inDomain:(id)arg2 secure:(BOOL)arg3;
- (void)flushCache;
- (id)imagesDownloadDirectory;
- (id)init;
- (void)internalRestart:(CDUnknownBlockType)arg1;
- (id)loadRequest:(id)arg1 category:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)loadRequest:(id)arg1 category:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 receiveData:(CDUnknownBlockType)arg4;
- (id)loadURL:(id)arg1 category:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)loaderTaskForSessionTask:(id)arg1;
- (void)notifyBackgroundStopped;
- (void)notifyEmptyQueue;
- (void)notifyEnqueue;
- (void)operationCancelTask:(id)arg1;
- (void)operationReschedule;
- (void)operationRestartSession;
- (void)operationResumeSession;
- (void)operationSuspendSession;
- (long long)priorityForCategory:(id)arg1;
- (void)processURLRequestRewrite:(id)arg1;
- (void)removeAllRewriteRules;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)removeRewriteRule:(id)arg1;
- (void)removeRewriteRules:(id)arg1;
- (void)removeRewriteRulesWithName:(id)arg1;
- (void)resume;
- (void)setCategory:(id)arg1 forTask:(id)arg2;
- (void)setCategory:(id)arg1 forTasks:(id)arg2;
- (void)setCookie:(id)arg1;
- (void)setPriority:(long long)arg1 forCategory:(id)arg2;
- (void)setupCache:(BOOL)arg1;
- (void)storeResumeData:(id)arg1 forTask:(id)arg2;
- (void)suspend;
- (void)task:(id)arg1 completedWithError:(id)arg2;
- (void)updateDownloadCacheEntry:(id)arg1;

@end

