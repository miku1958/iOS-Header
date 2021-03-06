//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <FamilyCircleUI/FARemoteViewControllerProtocol-Protocol.h>
#import <FamilyCircleUI/_UIRemoteViewControllerContaining-Protocol.h>

@class NSString, UIViewController;
@protocol FARemoteViewControllerDelegate;

@interface FARemoteViewController : _UIRemoteViewController <_UIRemoteViewControllerContaining, FARemoteViewControllerProtocol>
{
    CDUnknownBlockType _completion;
    CDUnknownBlockType _presentationCompletion;
    UIViewController *_hostViewController;
    unsigned long long _ruiPresentationStyle;
    id<FARemoteViewControllerDelegate> _delegate;
}

@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FARemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)requestViewControllerWithCompletion:(CDUnknownBlockType)arg1;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissAlertProxyWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)operationFinishedWithResponse:(id)arg1;
- (void)presentAlertProxyWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithRUIModalPresentationStyle:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceModalRUIControllerWithStyle:(unsigned long long)arg1 byController:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startFlowWithContext:(id)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

