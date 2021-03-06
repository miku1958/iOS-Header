//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSURLSessionDataDelegate-Protocol.h>
#import <HealthUI/NSURLSessionDelegate-Protocol.h>
#import <HealthUI/NSURLSessionTaskDelegate-Protocol.h>

@class NSCache, NSMapTable, NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface HKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *_session;
    NSMapTable *_containers;
    NSMutableDictionary *_urlConnections;
    NSObject<OS_dispatch_queue> *_managerQueue;
    NSCache *_iconCache;
    NSMutableDictionary *_outstandingRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSCache *iconCache; // @synthesize iconCache=_iconCache;
@property (strong) NSMutableDictionary *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
@property (readonly) Class superclass;

+ (id)defaultAppIcon;
+ (id)defaultAppIconTableUI;
+ (id)sharedImageManager;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_dispatchResponsesForAppIconForIdentifier:(id)arg1 appImage:(id)arg2;
- (void)_enqueueRequestForAppIconForIdentifier:(id)arg1;
- (void)_queue_cacheAppIcon:(id)arg1 forIdentifier:(id)arg2;
- (id)_queue_fetchIconFromLaunchServicesWithIdentifier:(id)arg1;
- (void)_queue_loadAppIconForSource:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)_queue_researchStudyIconForSource:(id)arg1;
- (id)_queue_synchronousLoadIconForSource:(id)arg1;
- (void)cacheAppIcon:(id)arg1 forIdentifier:(id)arg2;
- (void)clearImageCache;
- (id)iconForDevice:(id)arg1;
- (id)iconForSource:(id)arg1;
- (id)init;
- (void)loadAppImageAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadIconForSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadIconForSource:(id)arg1 syncHandler:(CDUnknownBlockType)arg2 asyncHandler:(CDUnknownBlockType)arg3;
- (id)researchStudyIconForSource:(id)arg1;

@end

