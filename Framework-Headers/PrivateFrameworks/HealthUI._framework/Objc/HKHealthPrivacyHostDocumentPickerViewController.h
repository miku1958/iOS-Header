//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <HealthUI/HKHealthPrivacyHostRemoteViewController-Protocol.h>

@protocol HKHealthPrivacyHostDocumentPickerViewControllerDelegate, HKHealthPrivacyServiceRemoteDocumentPickerViewController;

@interface HKHealthPrivacyHostDocumentPickerViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>
{
    id<HKHealthPrivacyHostDocumentPickerViewControllerDelegate> _delegate;
}

@property (readonly, nonatomic) id<HKHealthPrivacyServiceRemoteDocumentPickerViewController> _healthPrivacyServiceViewControllerProxy;
@property (weak, nonatomic) id<HKHealthPrivacyHostDocumentPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)exportedInterface;
+ (id)requestRemoteViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
- (void).cxx_destruct;
- (void)didFinishWithError:(id)arg1;
- (void)setPromptSession:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
