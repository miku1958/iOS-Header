//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFNetMonitorDelegate-Protocol.h>
#import <HMFoundation/HMFNetServiceBrowserDelegate-Protocol.h>
#import <HMFoundation/NSURLSessionDelegate-Protocol.h>

@class HMFNetMonitor, HMFNetService, HMFNetServiceBrowser, NSString, NSURL, NSURLSession;
@protocol HMFHTTPClientDelegate, OS_dispatch_queue;

@interface HMFHTTPClient : NSObject <HMFNetMonitorDelegate, HMFNetServiceBrowserDelegate, NSURLSessionDelegate>
{
    BOOL _reachable;
    BOOL _allowAnonymousConnection;
    NSURL *_baseURL;
    id<HMFHTTPClientDelegate> _delegate;
    HMFNetService *_netService;
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSURLSession *_session;
    HMFNetMonitor *_reachabilityMonitor;
    HMFNetServiceBrowser *_netServiceBrowser;
}

@property (nonatomic) BOOL allowAnonymousConnection; // @synthesize allowAnonymousConnection=_allowAnonymousConnection;
@property (strong, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMFHTTPClientDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMFNetService *netService; // @synthesize netService=_netService;
@property (readonly, nonatomic) HMFNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, nonatomic) HMFNetMonitor *reachabilityMonitor; // @synthesize reachabilityMonitor=_reachabilityMonitor;
@property (nonatomic, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property (readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

+ (id)baseURLWithScheme:(id)arg1 hostAddress:(id)arg2 port:(unsigned long long)arg3;
+ (BOOL)isValidBaseURL:(id)arg1;
+ (id)shortDescription;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)__initializeWithOptions:(unsigned long long)arg1;
- (BOOL)_requestClientReachabilityPing;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)init;
- (id)initWithBaseURL:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithNetService:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)isValid;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (void)notifyDelegateOfReachabilityChange:(BOOL)arg1;
- (void)resolveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)shortDescription;
- (void)startReachabilityProbe;

@end

