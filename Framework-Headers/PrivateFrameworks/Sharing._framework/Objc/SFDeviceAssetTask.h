//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSError, SFDeviceAssetQuery;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SFDeviceAssetTask : NSObject
{
    BOOL _useProcessLocalCache;
    SFDeviceAssetQuery *_deviceAssetQuery;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _completionHandler;
    NSBundle *_assetBundle;
    NSBundle *_fallbackAssetBundle;
    NSBundle *_cachedAssetBundle;
    NSError *_error;
}

@property (readonly, nonatomic) NSBundle *assetBundle; // @synthesize assetBundle=_assetBundle;
@property (readonly, nonatomic) NSBundle *cachedAssetBundle; // @synthesize cachedAssetBundle=_cachedAssetBundle;
@property (readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic) SFDeviceAssetQuery *deviceAssetQuery; // @synthesize deviceAssetQuery=_deviceAssetQuery;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) NSBundle *fallbackAssetBundle; // @synthesize fallbackAssetBundle=_fallbackAssetBundle;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property (readonly, nonatomic) BOOL useProcessLocalCache; // @synthesize useProcessLocalCache=_useProcessLocalCache;

- (void).cxx_destruct;
- (id)bundleAtURL:(id)arg1 error:(id *)arg2;
- (id)bundleURLFromAssetURL:(id)arg1;
- (void)cancelTimeout;
- (BOOL)completeIfPossible;
- (void)completeWithBundle:(id)arg1 isFallback:(BOOL)arg2 isCached:(BOOL)arg3;
- (id)initWithDeviceQuery:(id)arg1 dispatchQueue:(id)arg2 useProcessLocalCache:(BOOL)arg3 timeout:(double)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (BOOL)processCanAccessURL:(id)arg1 error:(id *)arg2;
- (BOOL)updateTaskWithAssetBundleURL:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isCached:(BOOL)arg4;
- (BOOL)updateTaskWithAssetURL:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isCached:(BOOL)arg4;
- (BOOL)updateTaskWithBundle:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isCached:(BOOL)arg4;

@end

