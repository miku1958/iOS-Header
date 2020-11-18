//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKAppCacheDelegate-Protocol.h>
#import <ITMLKit/IKJSInspectorControllerDelegate-Protocol.h>
#import <ITMLKit/ISURLOperationDelegate-Protocol.h>

@class IKAppCache, IKJSArrayBufferStore, IKJSFoundation, IKJSInspectorController, IKViewElementRegistry, JSContext, NSError, NSMutableArray, NSNumber, NSString;
@protocol IKAppContextDelegate, IKAppScriptFallbackHandler, IKApplication, OS_dispatch_source;

@interface IKAppContext : NSObject <ISURLOperationDelegate, IKAppCacheDelegate, IKJSInspectorControllerDelegate>
{
    IKJSArrayBufferStore *_arrayBufferStore;
    struct __CFRunLoop *_jsThreadRunLoop;
    struct __CFRunLoopSource *_jsThreadRunLoopSource;
    NSObject<OS_dispatch_source> *_lowMemoryWarningSource;
    BOOL _respondsToTraitCollection;
    BOOL _isValid;
    BOOL _remoteInspectionEnabled;
    BOOL _mescalPrimeEnabledForXHRRequests;
    BOOL _trusted;
    BOOL _canAccessPendingQueue;
    BOOL _privileged;
    BOOL _appUsesDefaultStyleSheets;
    id<IKApplication> _app;
    unsigned long long _mode;
    id<IKAppContextDelegate> _delegate;
    id<IKAppScriptFallbackHandler> _appScriptFallbackHandler;
    double _appScriptTimeoutInterval;
    JSContext *_jsContext;
    IKAppCache *_appCache;
    NSString *_nextJSChecksum;
    NSMutableArray *_onStartQueue;
    NSString *_responseScript;
    NSError *_responseError;
    id _reloadData;
    NSMutableArray *_pendingQueue;
    NSMutableArray *_postEvaluationBlocks;
    IKJSFoundation *_jsFoundation;
    IKViewElementRegistry *_viewElementRegistry;
    IKJSInspectorController *_webInspectorController;
}

@property (readonly, weak, nonatomic) id<IKApplication> app; // @synthesize app=_app;
@property (readonly, nonatomic) IKAppCache *appCache; // @synthesize appCache=_appCache;
@property (strong, nonatomic) id<IKAppScriptFallbackHandler> appScriptFallbackHandler; // @synthesize appScriptFallbackHandler=_appScriptFallbackHandler;
@property (nonatomic) double appScriptTimeoutInterval; // @synthesize appScriptTimeoutInterval=_appScriptTimeoutInterval;
@property (readonly, nonatomic) BOOL appUsesDefaultStyleSheets; // @synthesize appUsesDefaultStyleSheets=_appUsesDefaultStyleSheets;
@property (readonly, nonatomic) IKJSArrayBufferStore *arrayBufferStore;
@property (nonatomic) BOOL canAccessPendingQueue; // @synthesize canAccessPendingQueue=_canAccessPendingQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<IKAppContextDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL isValid; // @synthesize isValid=_isValid;
@property (strong, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property (strong, nonatomic) IKJSFoundation *jsFoundation; // @synthesize jsFoundation=_jsFoundation;
@property (nonatomic) BOOL mescalPrimeEnabledForXHRRequests; // @synthesize mescalPrimeEnabledForXHRRequests=_mescalPrimeEnabledForXHRRequests;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property (copy, nonatomic) NSString *nextJSChecksum; // @synthesize nextJSChecksum=_nextJSChecksum;
@property (readonly, nonatomic) NSMutableArray *onStartQueue; // @synthesize onStartQueue=_onStartQueue;
@property (strong, nonatomic) NSMutableArray *pendingQueue; // @synthesize pendingQueue=_pendingQueue;
@property (strong, nonatomic) NSMutableArray *postEvaluationBlocks; // @synthesize postEvaluationBlocks=_postEvaluationBlocks;
@property (nonatomic, getter=isPrivileged) BOOL privileged; // @synthesize privileged=_privileged;
@property (strong, nonatomic) id reloadData; // @synthesize reloadData=_reloadData;
@property (nonatomic) BOOL remoteInspectionEnabled; // @synthesize remoteInspectionEnabled=_remoteInspectionEnabled;
@property (strong, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property (copy, nonatomic) NSString *responseScript; // @synthesize responseScript=_responseScript;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTrusted) BOOL trusted; // @synthesize trusted=_trusted;
@property (readonly, nonatomic) IKViewElementRegistry *viewElementRegistry; // @synthesize viewElementRegistry=_viewElementRegistry;
@property (strong, nonatomic) IKJSInspectorController *webInspectorController; // @synthesize webInspectorController=_webInspectorController;

+ (id)currentAppContext;
+ (BOOL)isInFactoryMode;
+ (void)load;
+ (void)registerPrivateProtocols:(id)arg1 forClass:(Class)arg2;
- (void).cxx_destruct;
- (void)_addStopRecordToPendingQueueWithReload:(BOOL)arg1;
- (id)_appTraitCollection;
- (void)_dispatchError:(id)arg1;
- (void)_doEvaluate:(CDUnknownBlockType)arg1;
- (void)_drainOnStartQueue;
- (void)_enqueueOnStartOrExecute:(CDUnknownBlockType)arg1;
- (id)_errorWithMessage:(id)arg1;
- (void)_evaluate:(CDUnknownBlockType)arg1;
- (void)_evaluateFoundationWithDeviceConfig:(id)arg1 addPrivateInterfaces:(BOOL)arg2;
- (void)_invalidateJSThread;
- (void)_jsThreadMain;
- (id)_preferredLaunchURL;
- (void)_sourceCanceledOnRunLoop:(struct __CFRunLoop *)arg1;
- (void)_sourcePerform;
- (void)_sourceScheduledOnRunLoop:(struct __CFRunLoop *)arg1;
- (void)_startWithScript:(id)arg1 scriptUrl:(id)arg2 wasLoadedFromFallback:(BOOL)arg3;
- (void)_startWithURL:(id)arg1 urlTrusted:(BOOL)arg2;
- (void)_stopAndReload:(BOOL)arg1;
- (void)addPostEvaluateBlock:(CDUnknownBlockType)arg1;
- (void)appCache:(id)arg1 didUpdateWithChecksum:(id)arg2;
- (void)appTraitCollectionChanged:(id)arg1;
- (BOOL)cancelHighlightView;
- (void)contextDidFailWithError:(id)arg1;
- (void)contextDidStartWithJS:(id)arg1 options:(id)arg2;
- (void)contextDidStopWithOptions:(id)arg1;
- (void)evaluate:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)evaluateDelegateBlockSync:(CDUnknownBlockType)arg1;
- (void)evaluateFoundationJS;
- (void)exitAppWithOptions:(id)arg1;
- (void)handleCacheUpdate;
- (void)handleReloadWithUrgencyType:(unsigned long long)arg1 minInterval:(double)arg2 data:(id)arg3;
- (BOOL)highlightViewForElementWithID:(long long)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (BOOL)highlightViewsForElementsWithIDs:(id)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (id)initWithApplication:(id)arg1 mode:(unsigned long long)arg2 cache:(BOOL)arg3 delegate:(id)arg4;
- (id)initWithApplication:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (void)launchAppWithOptions:(id)arg1;
- (void)openURLWithOptions:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)reload;
- (void)resumeWithOptions:(id)arg1;
- (void)setException:(id)arg1 withErrorMessage:(id)arg2;
- (void)start;
- (void)stop;
- (void)suspendWithOptions:(id)arg1;
- (BOOL)validateDOMDocument:(id)arg1 error:(id *)arg2;

@end

