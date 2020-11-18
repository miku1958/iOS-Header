//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeKit/HMSetupRemoteHost-Protocol.h>

@class HMHome, HMSetupAccessoryDescription, HMSetupRemoteViewController, _UIAsyncInvocation;

@interface HMSetupViewController : UIViewController <HMSetupRemoteHost>
{
    BOOL _cancelling;
    BOOL _disconnected;
    BOOL _shouldPresentWhenLoaded;
    HMHome *_home;
    HMSetupAccessoryDescription *_accessoryDescription;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _loadHandler;
    _UIAsyncInvocation *_cancelServiceInvocation;
    HMSetupRemoteViewController *_remoteViewController;
}

@property (strong, nonatomic) HMSetupAccessoryDescription *accessoryDescription; // @synthesize accessoryDescription=_accessoryDescription;
@property (strong, nonatomic) _UIAsyncInvocation *cancelServiceInvocation; // @synthesize cancelServiceInvocation=_cancelServiceInvocation;
@property (nonatomic, getter=isCancelling) BOOL cancelling; // @synthesize cancelling=_cancelling;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic, getter=isDisconnected) BOOL disconnected; // @synthesize disconnected=_disconnected;
@property (strong, nonatomic) HMHome *home; // @synthesize home=_home;
@property (copy, nonatomic) CDUnknownBlockType loadHandler; // @synthesize loadHandler=_loadHandler;
@property (strong, nonatomic) HMSetupRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property (nonatomic) BOOL shouldPresentWhenLoaded; // @synthesize shouldPresentWhenLoaded=_shouldPresentWhenLoaded;

- (void).cxx_destruct;
- (void)_configureAndAddRemoteViewController;
- (void)_finishSetupWithError:(id)arg1;
- (void)_presentAsTopmostViewController;
- (void)_requestRemoteViewController;
- (void)accessorySetupDidFinishWithError:(id)arg1;
- (void)accessorySetupDidLoad;
- (id)init;
- (id)initWithHome:(id)arg1 accessoryDescription:(id)arg2 loadHandler:(CDUnknownBlockType)arg3;
- (void)presentWhenLoaded;
- (void)setupFailedWithError:(id)arg1;
- (void)setupInterruptedWithError:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end

