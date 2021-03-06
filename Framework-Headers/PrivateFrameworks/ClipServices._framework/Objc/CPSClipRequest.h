//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClipServices/CPSSessionProxyDelegate-Protocol.h>

@class CPSSessionProxy, NSString;

@interface CPSClipRequest : NSObject <CPSSessionProxyDelegate>
{
    CPSSessionProxy *_sessionProxy;
    CDUnknownBlockType _completionHandler;
    BOOL _shouldOpenClipWhenMetadataIsUpdated;
    BOOL _shouldReturnErrorOnUserCancellation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldReturnErrorOnUserCancellation; // @synthesize shouldReturnErrorOnUserCancellation=_shouldReturnErrorOnUserCancellation;
@property (readonly) Class superclass;

+ (void)confirmLocationWithURL:(id)arg1 inRegion:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)deleteClipsWithBundleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getLocationConfirmationConsentForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getUserNotificationConsentForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)_errorIgnoringUserCancelledErrorIfNeeded:(id)arg1;
- (void)_openClipWithInvocationUI;
- (void)cancel;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 fallbackClipBundleID:(id)arg2;
- (void)installClipWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)proxy:(id)arg1 didDetermineAvailability:(BOOL)arg2;
- (void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)proxyAppDidLaunchForTesting:(id)arg1;
- (void)proxyDidUpdateMetadata:(id)arg1;
- (void)proxyRemoteServiceDidCrash:(id)arg1;
- (void)requestClipWithCompletion:(CDUnknownBlockType)arg1;
- (id)sessionProxy;

@end

