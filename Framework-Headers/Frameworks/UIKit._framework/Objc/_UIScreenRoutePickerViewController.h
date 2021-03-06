//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIAlertControllerContaining-Protocol.h>

@class NSObject, NSString, UIAlertController, _UIResilientRemoteViewContainerViewController;
@protocol OS_dispatch_semaphore;

@interface _UIScreenRoutePickerViewController : UIViewController <UIAlertControllerContaining>
{
    UIAlertController *_alertController;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    NSObject<OS_dispatch_semaphore> *_remoteViewControllerSemaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInitWithCompletion:(CDUnknownBlockType)arg1;
- (id)_containedAlertController;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (BOOL)_requiresCustomPresentationController;
- (void)_setChildViewController:(id)arg1;
- (void)dealloc;
- (void)disconnectRoute;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)modalPresentationStyle;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)remoteViewController;
- (void)setCurrentOutputDeviceEnabled:(BOOL)arg1;
- (void)setModalPresentationStyle:(long long)arg1;

@end

