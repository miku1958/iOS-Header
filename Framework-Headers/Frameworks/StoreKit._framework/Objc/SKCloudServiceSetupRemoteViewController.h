//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKCloudServiceSetupExtensionClientInterface-Protocol.h>

@class NSString;
@protocol SKCloudServiceSetupRemoteViewControllerDelegate;

@interface SKCloudServiceSetupRemoteViewController : _UIRemoteViewController <SKCloudServiceSetupExtensionClientInterface>
{
    id<SKCloudServiceSetupRemoteViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKCloudServiceSetupRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)didFinishLoadingWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)dismissCloudServiceSetupViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissSafariViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
- (void)presentSafariViewControllerWithURL:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end

