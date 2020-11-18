//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKStoreExtensionClientInterface-Protocol.h>

@class NSString;
@protocol SKStoreRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKStoreRemoteViewController : _UIRemoteViewController <SKStoreExtensionClientInterface>
{
    id<SKStoreRemoteViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKStoreRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentRequestedViewControllerWithIdentifier:(id)arg1;
- (void)setNeedsTabSelection;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
