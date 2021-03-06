//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthenticationServices/_ASExtensionViewController.h>

#import <AuthenticationServices/_ASCredentialProviderExtensionHostContextDelegate-Protocol.h>

@class NSString;
@protocol _ASCredentialProviderExtensionConfigurationViewControllerDelegate;

@interface _ASCredentialProviderExtensionConfigurationViewController : _ASExtensionViewController <_ASCredentialProviderExtensionHostContextDelegate>
{
    id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestDidFailWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginConfiguringExtension;
- (void)prepareToCompleteExtensionConfigurationRequestWithHost:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

