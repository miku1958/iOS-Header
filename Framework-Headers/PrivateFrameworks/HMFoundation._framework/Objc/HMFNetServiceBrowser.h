//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/NSNetServiceBrowserDelegate-Protocol.h>

@class NSArray, NSHashTable, NSNetServiceBrowser, NSObject, NSString;
@protocol HMFNetServiceBrowserDelegate, OS_dispatch_queue;

@interface HMFNetServiceBrowser : HMFObject <NSNetServiceBrowserDelegate>
{
    NSHashTable *_cachedNetServices;
    BOOL _shouldCache;
    BOOL _browsing;
    id<HMFNetServiceBrowserDelegate> _delegate;
    NSString *_domain;
    NSString *_serviceType;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSNetServiceBrowser *_internal;
    CDUnknownBlockType _browseBlock;
}

@property (copy, nonatomic) CDUnknownBlockType browseBlock; // @synthesize browseBlock=_browseBlock;
@property (nonatomic, getter=isBrowsing) BOOL browsing; // @synthesize browsing=_browsing;
@property (readonly, copy, nonatomic) NSArray *cachedNetServices;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMFNetServiceBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSNetServiceBrowser *internal; // @synthesize internal=_internal;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property (nonatomic) BOOL shouldCache; // @synthesize shouldCache=_shouldCache;
@property (readonly) Class superclass;

+ (id)shortDescription;
- (void).cxx_destruct;
- (void)_stopBrowsingWithError:(id)arg1;
- (void)addNetServiceToCache:(id)arg1;
- (void)dealloc;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)init;
- (id)initWithDomain:(id)arg1 serviceType:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)notifyDelegateBrowserStoppedWithError:(id)arg1;
- (void)notifyDelegateOfAddedService:(id)arg1;
- (void)notifyDelegateOfRemovedService:(id)arg1;
- (void)removeNetServiceFromCache:(id)arg1;
- (id)shortDescription;
- (void)startBrowsingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopBrowsing;

@end

