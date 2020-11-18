//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClipServices/SBSRemoteAlertHandleObserver-Protocol.h>

@class NSString, SBSRemoteAlertHandle, SFClient;
@protocol OS_dispatch_queue;

@interface CPSOpenClipCardPresenter : NSObject <SBSRemoteAlertHandleObserver>
{
    SBSRemoteAlertHandle *_alertHandle;
    SFClient *_sharingClient;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _stagedLocationConfirmationDisplay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)responseForOpenClipAction:(BOOL)arg1;
+ (id)sharedPresenter;
- (void).cxx_destruct;
- (void)_activateAlertHandleWithSettings:(id)arg1 viewControllerClassName:(id)arg2 repsonseHandler:(CDUnknownBlockType)arg3;
- (void)_activateAlertHandleWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_invalidateSharingClient;
- (void)_performStagedLocationConfirmationDisplayIfNeeded;
- (void)_sharingClientDidInvalidate;
- (void)_showCardWithOptions:(unsigned long long)arg1 activationHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)showCardWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showLocationConfirmationSheetWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
