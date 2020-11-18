//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKAppContextInternalDelegate-Protocol.h>

@class IKAppContext, NSString, NSURL;
@protocol IKAppCacheDelegate, IKAppContextDelegate, IKApplication, OS_dispatch_queue;

@interface IKAppCache : NSObject <IKAppContextInternalDelegate>
{
    NSObject<OS_dispatch_queue> *_appCacheQueue;
    BOOL _shouldIgnoreHTTPCache;
    id<IKAppCacheDelegate> _delegate;
    id<IKAppContextDelegate> _appContextDelegate;
    NSURL *_appJSURL;
    NSString *_appJSChecksum;
    NSString *_cacheAppLocalJSChecksum;
    NSString *_cacheAppJSChecksum;
    unsigned long long _status;
    IKAppContext *_validationContext;
    CDUnknownBlockType _validationCompletionHandler;
    NSURL *_cacheFileURL;
    NSURL *_appLocalJSFileURL;
    id<IKApplication> _app;
}

@property (weak, nonatomic) id<IKApplication> app; // @synthesize app=_app;
@property (weak, nonatomic) id<IKAppContextDelegate> appContextDelegate; // @synthesize appContextDelegate=_appContextDelegate;
@property (readonly, nonatomic) NSString *appJSChecksum; // @synthesize appJSChecksum=_appJSChecksum;
@property (readonly, nonatomic) NSURL *appJSURL; // @synthesize appJSURL=_appJSURL;
@property (readonly, copy, nonatomic) NSURL *appLocalJSFileURL; // @synthesize appLocalJSFileURL=_appLocalJSFileURL;
@property (readonly, nonatomic) NSString *cacheAppJSChecksum; // @synthesize cacheAppJSChecksum=_cacheAppJSChecksum;
@property (readonly, nonatomic) NSString *cacheAppLocalJSChecksum; // @synthesize cacheAppLocalJSChecksum=_cacheAppLocalJSChecksum;
@property (readonly, copy, nonatomic) NSURL *cacheFileURL; // @synthesize cacheFileURL=_cacheFileURL;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IKAppCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldIgnoreHTTPCache; // @synthesize shouldIgnoreHTTPCache=_shouldIgnoreHTTPCache;
@property (readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType validationCompletionHandler; // @synthesize validationCompletionHandler=_validationCompletionHandler;
@property (readonly, nonatomic) IKAppContext *validationContext; // @synthesize validationContext=_validationContext;

+ (id)_appContextDelegateSelectors;
- (void).cxx_destruct;
- (void)_checkManifest;
- (void)_cleanupValidationContext;
- (void)_loadManifest;
- (void)_performAsync:(CDUnknownBlockType)arg1;
- (void)_storeManifest;
- (id)_writeCacheAppJS:(id)arg1 checksum:(id)arg2 error:(id *)arg3;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2 validatedJSString:(id)arg3;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3;
- (BOOL)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)appJSURLWithCompletion:(CDUnknownBlockType)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (id)initWithApplication:(id)arg1;
- (BOOL)isOurDispatchQueue;
- (id)modalControllerForContext:(id)arg1;
- (id)navigationControllerForContext:(id)arg1;
- (id)objectForMediaItem:(id)arg1;
- (id)objectForPlayer:(id)arg1;
- (id)objectForPlaylist:(id)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)shouldForceIgnoreHTTPCacheForAppContext:(id)arg1;
- (id)tabBarForContext:(id)arg1;
- (void)updateCacheWithValidatedJS:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

