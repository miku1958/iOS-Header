//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFPasswordViewController.h>

#import <SafariServices/SFExternalPasswordCredentialRemoteViewControllerDelegate-Protocol.h>

@class NSString, SFExternalPasswordCredentialRemoteViewController, SFQueueingServiceViewControllerProxy;
@protocol SFExternalPasswordCredentialServiceViewControllerProtocol, _SFExternalPasswordCredentialViewControllerDelegate;

@interface _SFExternalPasswordCredentialViewController : _SFPasswordViewController <SFExternalPasswordCredentialRemoteViewControllerDelegate>
{
    SFExternalPasswordCredentialRemoteViewController *_remoteViewController;
    SFQueueingServiceViewControllerProxy<SFExternalPasswordCredentialServiceViewControllerProtocol> *_serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_SFExternalPasswordCredentialViewControllerDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)_connectToServiceWithCompletion:(CDUnknownBlockType)arg1;
- (id)_remoteViewController;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_setUpServiceProxyIfNeeded;
- (void)autoFillWithExternalCredential:(id)arg1;
- (void)dealloc;
- (void)getCredentialForExternalCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)presentExternalPasswordCredentialRemoteViewController:(id)arg1;
- (void)viewDidLoad;

@end
