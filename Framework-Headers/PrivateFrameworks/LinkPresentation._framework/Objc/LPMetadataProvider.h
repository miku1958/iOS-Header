//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPMetadataProviderSpecializationDelegate-Protocol.h>
#import <LinkPresentation/WKNavigationDelegate-Protocol.h>

@class BKSProcessAssertion, LPAnimatedImageTranscoder, LPEvent, LPFetcherGroup, LPLinkMetadata, LPMetadataProviderSpecialization, NSMutableArray, NSString, NSTimer, NSURL, WKWebView;
@protocol OS_dispatch_group;

@interface LPMetadataProvider : NSObject <WKNavigationDelegate, LPMetadataProviderSpecializationDelegate>
{
    unsigned int _loggingID;
    WKWebView *_webView;
    NSURL *_URL;
    NSURL *_originalURL;
    NSTimer *_watchdog;
    BKSProcessAssertion *_processAssertion;
    LPEvent *_event;
    LPEvent *_mainResourceLoadEvent;
    LPEvent *_webProcessLaunchEvent;
    LPLinkMetadata *_metadata;
    BOOL _complete;
    BOOL _fetchingFromExistingWebView;
    BOOL _hasStartedFetching;
    BOOL _hasEverStartedFetchingMetadataFromWebView;
    BOOL _timedOut;
    BOOL _useSpecializedProviders;
    unsigned long long _allowedSpecializedProviders;
    NSObject<OS_dispatch_group> *_subresourceFetchGroup;
    LPFetcherGroup *_iconFetcherGroup;
    LPAnimatedImageTranscoder *_imageTranscoder;
    NSMutableArray *_pendingFetchers;
    long long _specializationState;
    LPMetadataProviderSpecialization *_specializedMetadataProvider;
    BOOL _shouldFetchSubresources;
    BOOL _cancelled;
    double _timeout;
    CDUnknownBlockType _completionHandler;
}

@property (readonly, nonatomic) LPEvent *_event; // @synthesize _event;
@property (nonatomic) unsigned long long allowedSpecializedProviders; // @synthesize allowedSpecializedProviders=_allowedSpecializedProviders;
@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fetchSubresources;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldFetchSubresources; // @synthesize shouldFetchSubresources=_shouldFetchSubresources;
@property (readonly) Class superclass;
@property (nonatomic) double timeout; // @synthesize timeout=_timeout;
@property (nonatomic) BOOL useSpecializedProviders; // @synthesize useSpecializedProviders=_useSpecializedProviders;

+ (id)_callbackQueue;
+ (id)_copyDefaultWebViewConfiguration;
+ (id)_defaultUserAgent;
+ (id)_incompleteMetadataRequests;
+ (id)requestMetadataForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)requestMetadataForWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_cancelDueToTimeout;
- (void)_completedWithError:(id)arg1;
- (void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (void)_fetchAssociatedApplicationMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchImplicitIcons;
- (void)_fetchMetadataFromWebView;
- (void)_fetchSubresources;
- (void)_fetchedMetadata:(id)arg1;
- (void)_generateSpecializationIfPossibleForCompleteMetadata:(id)arg1 URL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_internalStartFetchingMetadataFromURL;
- (void)_postProcessResolvedMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_redistinguishImagesAndIcons;
- (void)_setMetadata:(id)arg1 onlyUpgradeFields:(BOOL)arg2;
- (void)_simplifyTitle;
- (id)_startFetchingMetadataForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_startFetchingMetadataForWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startWatchdogTimer;
- (void)_stopWatchdogTimer;
- (BOOL)_switchToSpecializationIfPossibleForMIMEType:(id)arg1 URL:(id)arg2 hasLoadedResource:(BOOL)arg3;
- (BOOL)_switchToSpecializationIfPossibleForMetadata:(id)arg1 URL:(id)arg2;
- (BOOL)_switchToSpecializationIfPossibleForURL:(id)arg1;
- (void)_willStartFetchingMetadata;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;
- (void)metadataProviderSpecialization:(id)arg1 didFetchPreliminaryMetadata:(id)arg2;
- (void)metadataProviderSpecializationDidFail:(id)arg1;
- (void)startFetchingMetadataForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startFetchingMetadataForWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startFetchingSubresourcesForPartialMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)subresourceFetcherConfiguration;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end

