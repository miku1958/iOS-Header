//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <IntentsUI/_INUIRemoteViewControllerHosting-Protocol.h>

@class NSString, _INUIExtensionHostContext;
@protocol INUIRemoteViewControllerDelegate;

@interface INUIRemoteViewController : _UIRemoteViewController <_INUIRemoteViewControllerHosting>
{
    id<INUIRemoteViewControllerDelegate> _delegate;
    _INUIExtensionHostContext *_extensionHostContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<INUIRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _INUIExtensionHostContext *extensionHostContext; // @synthesize extensionHostContext=_extensionHostContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)exportedInterface;
+ (void)requestRemoteViewControllerForInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (id)_errorHandlingServiceViewControllerProxy;
- (void)_queryRepresentedPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 errorHandlingCompletion:(CDUnknownBlockType)arg3;
- (void)serviceViewControllerDesiresConstrainedSize:(struct CGSize)arg1;
- (void)updateSize;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
