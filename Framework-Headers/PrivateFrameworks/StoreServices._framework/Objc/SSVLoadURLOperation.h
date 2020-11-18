//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <StoreServices/SSURLSessionManagerDelegate-Protocol.h>

@class AKAppleIDSession, NSCachedURLResponse, NSData, NSHTTPURLResponse, NSMutableData, NSMutableSet, NSNumber, NSObject, NSRunLoop, NSString, NSURL, NSURLCache, NSURLRequest, SSBag, SSMetricsPageEvent, SSURLBag, SSURLRequestProperties, SSVFairPlaySAPSession, SSVSAPSignaturePolicy, SSVURLBagInterpreter, SSVURLDataConsumer;
@protocol OS_dispatch_queue, SSVLoadURLOperationDelegate;

@interface SSVLoadURLOperation : NSOperation <SSURLSessionManagerDelegate>
{
    AKAppleIDSession *_authKitSession;
    NSMutableData *_dataBuffer;
    SSVURLDataConsumer *_dataConsumer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSData *_inputData;
    BOOL _iTunesStoreRequest;
    long long _machineDataRetryCount;
    long long _machineDataStyle;
    SSMetricsPageEvent *_metricsPageEvent;
    CDUnknownBlockType _outputBlock;
    CDUnknownBlockType _prepareRequestBlock;
    NSMutableSet *_protocolRedirectURLs;
    BOOL _recordsMetrics;
    NSURL *_redirectURL;
    NSString *_referrerApplicationName;
    NSString *_referrerURLString;
    NSHTTPURLResponse *_response;
    NSRunLoop *_runLoop;
    SSVFairPlaySAPSession *_sapSession;
    SSVSAPSignaturePolicy *_sapSignaturePolicy;
    BOOL _shouldRetry;
    NSString *_storeFrontSuffix;
    BOOL _stopped;
    SSURLBag *_urlBag;
    SSVURLBagInterpreter *_urlBagInterpreter;
    SSURLRequestProperties *_requestProperties;
    NSURLRequest *_urlRequest;
    BOOL _shouldSuppressCookies;
    BOOL _shouldSuppressUserInfo;
    id<SSVLoadURLOperationDelegate> _delegate;
    SSBag *_bag;
}

@property (getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property (strong) SSVFairPlaySAPSession *SAPSession;
@property (copy) SSVSAPSignaturePolicy *SAPSignaturePolicy;
@property (readonly) NSURL *URL;
@property (readonly, nonatomic) NSURLCache *URLCache;
@property (readonly, nonatomic) NSString *URLCacheID;
@property (readonly) NSURLRequest *URLRequest;
@property (readonly) NSHTTPURLResponse *URLResponse;
@property (strong, nonatomic) SSBag *bag; // @synthesize bag=_bag;
@property (readonly) NSCachedURLResponse *cachedURLResponse;
@property (strong) SSVURLDataConsumer *dataConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SSVLoadURLOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy) CDUnknownBlockType expiredOutputBlock;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isURLBagRequest;
@property long long machineDataStyle;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly) SSMetricsPageEvent *metricsPageEvent;
@property (copy) CDUnknownBlockType outputBlock;
@property (copy) CDUnknownBlockType prepareRequestBlock;
@property (readonly, nonatomic) NSData *rawResponseData;
@property BOOL recordsMetrics;
@property (copy) NSString *referrerApplicationName;
@property (copy) NSString *referrerURLString;
@property (readonly, nonatomic) SSURLRequestProperties *requestProperties;
@property (readonly, nonatomic) BOOL shouldDisableCellular;
@property (readonly, nonatomic) BOOL shouldRequireCellular;
@property (readonly, nonatomic) BOOL shouldSetCookies;
@property BOOL shouldSuppressCookies; // @synthesize shouldSuppressCookies=_shouldSuppressCookies;
@property BOOL shouldSuppressUserInfo; // @synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo;
@property (readonly, nonatomic) NSData *sourceAppAuditTokenData;
@property (readonly, nonatomic) NSString *sourceAppBundleID;
@property (copy) NSString *storeFrontSuffix;
@property (readonly) Class superclass;

+ (id)currentAcceptLanguage;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithEvent:(id)arg3 error:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_addMachineDataHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2;
- (void)_addSAPSignatureToRequest:(id)arg1;
- (void)_applyResponseToMetrics:(id)arg1;
- (void)_configureWithURLBagInterpreter:(id)arg1;
- (void)_createAuthKitSession;
- (id)_dataForCachedResponse:(const struct _CFCachedURLResponse *)arg1;
- (void)_finishWithData:(id)arg1;
- (void)_finishWithOutput:(id)arg1 error:(id)arg2;
- (id)_initSSVLoadURLOperation;
- (void)_keepAliveTimer:(id)arg1;
- (void)_loadURLBagInterpreter;
- (id)_newURLRequestWithRedirectURL:(id)arg1;
- (id)_outputForData:(id)arg1 error:(id *)arg2;
- (void)_releaseOutputBlocks;
- (void)_runOnce;
- (int)_runRunLoopUntilStopped;
- (BOOL)_shouldRetryAfterMachineDataRequest:(id)arg1;
- (void)_stopIfCancelled;
- (void)_stopRunLoop;
- (void)cancel;
- (void)configureWithURLBag:(id)arg1;
- (void)configureWithURLBagDictionary:(id)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithData:(id)arg1 fromOperation:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURLRequestProperties:(id)arg1;
- (void)main;

@end
