//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <PassKitUI/PKIssuerProvisioningExtensionAuthorizationRemoteViewController-Protocol.h>

@interface PKIssuerProvisioningExtensionAuthorizationRemoteViewController : _UIRemoteViewController <PKIssuerProvisioningExtensionAuthorizationRemoteViewController>
{
    CDUnknownBlockType _completionHandler;
    long long _result;
    BOOL _finished;
}

+ (id)exportedInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
- (void).cxx_destruct;
- (BOOL)_isPresentationContextByDefault;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)pkui_finish;
- (void)pkui_setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)serviceViewControllerDidCompleteWithResult:(long long)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

