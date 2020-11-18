//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <HealthUI/HKHealthPrivacyHostRemoteViewController-Protocol.h>

@protocol HKHealthPrivacyHostViewControllerDelegate;

@interface HKHealthPrivacyHostViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>
{
    id<HKHealthPrivacyHostViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<HKHealthPrivacyHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)exportedInterface;
+ (id)requestRemoteViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
- (void).cxx_destruct;
- (id)_healthPrivacyServiceViewControllerProxy;
- (void)didFinishWithError:(id)arg1;
- (void)setPromptSession:(id)arg1;
- (void)setRequestRecord:(id)arg1 updateDescription:(id)arg2 shareDescription:(id)arg3;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

