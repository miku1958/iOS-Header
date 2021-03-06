//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSDictionary, NSString, SKInvocationQueueProxy, SKRemoteProductActivityViewController, _SKStoreProductActivityAnimationController, _UIAsyncInvocation;
@protocol SKStoreProductActivityViewControllerDelegate, SKUIServiceProductActivityViewController;

@interface SKStoreProductActivityViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    SKInvocationQueueProxy<SKUIServiceProductActivityViewController> *_serviceProxy;
    _UIAsyncInvocation *_cancelRequest;
    SKRemoteProductActivityViewController *_remoteViewController;
    NSDictionary *_parameters;
    _SKStoreProductActivityAnimationController *_animationController;
    id<SKStoreProductActivityViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKStoreProductActivityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)_requestRemoteViewController;
- (void)_viewTapped:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithParameters:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

