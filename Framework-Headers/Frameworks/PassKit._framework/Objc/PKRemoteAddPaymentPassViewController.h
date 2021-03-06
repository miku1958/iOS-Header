//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <PassKit/PKRemoteAddPassViewControllerProtocol-Protocol.h>

@class NSString;
@protocol PKAddPaymentPassViewControllerDelegate;

@interface PKRemoteAddPaymentPassViewController : _UIRemoteViewController <PKRemoteAddPassViewControllerProtocol>
{
    BOOL _finished;
    id<PKAddPaymentPassViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKAddPaymentPassViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
- (void).cxx_destruct;
- (id)_addPaymentPassVC;
- (void)dealloc;
- (void)didFinishWithPass:(id)arg1 error:(id)arg2;
- (void)generateRequestWithCertificateChain:(id)arg1 nonce:(id)arg2 nonceSignature:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

