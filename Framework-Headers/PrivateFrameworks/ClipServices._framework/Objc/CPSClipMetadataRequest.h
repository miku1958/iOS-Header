//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClipServices/CPSSessionProxyDelegate-Protocol.h>

@class CPSPromise, CPSSessionProxy, NSString, NSURL;

@interface CPSClipMetadataRequest : NSObject <CPSSessionProxyDelegate>
{
    NSString *_fullHash;
    NSURL *_requestURL;
    CPSSessionProxy *_sessionProxy;
    CPSPromise *_availabilityPromise;
    CPSPromise *_iconPromise;
    CPSPromise *_metadataPromise;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isLikelyAvailable) BOOL likelyAvailable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setUpSessionProxyAndPromisesWithURL:(id)arg1 fallbackClipBundleID:(id)arg2;
- (void)dealloc;
- (id)getClipMetadataSynchronously;
- (id)getDownloadedIconURLSynchronously;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 fallbackClipBundleID:(id)arg2;
- (id)initWithURLHash:(id)arg1;
- (void)proxy:(id)arg1 didDetermineAvailability:(BOOL)arg2;
- (void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)proxy:(id)arg1 didRetrieveApplicationIcon:(id)arg2;
- (void)proxyDidRetrieveBusinessIcon:(id)arg1;
- (void)proxyDidUpdateMetadata:(id)arg1;
- (void)proxyRemoteServiceDidCrash:(id)arg1;
- (void)requestDownloadedIconWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestMetadataWithCompletion:(CDUnknownBlockType)arg1;

@end
