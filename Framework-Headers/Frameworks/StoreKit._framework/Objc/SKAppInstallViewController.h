//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/SKStoreRemoteViewControllerDelegate-Protocol.h>

@class NSDictionary, NSString, SKStoreRemoteViewController, _UIResilientRemoteViewContainerViewController;

@interface SKAppInstallViewController : UIViewController <SKStoreRemoteViewControllerDelegate>
{
    NSDictionary *_parameters;
    SKStoreRemoteViewController *_remoteViewController;
    _UIResilientRemoteViewContainerViewController *_remoteContainerViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property (strong, nonatomic) _UIResilientRemoteViewContainerViewController *remoteContainerViewController; // @synthesize remoteContainerViewController=_remoteContainerViewController;
@property (strong, nonatomic) SKStoreRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property (readonly) Class superclass;

- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)_setupChildViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_viewControllerIsDescendent:(id)arg1 ofViewController:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithParameters:(id)arg1;
- (void)storeRemoteViewController:(id)arg1 presentRequestedViewControllerWithIdentifier:(id)arg2;
- (void)storeRemoteViewControllerNeedsTabSelection:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end
