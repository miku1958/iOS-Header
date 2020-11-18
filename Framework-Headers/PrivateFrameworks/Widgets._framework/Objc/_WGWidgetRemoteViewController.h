//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <Widgets/_NCWidgetViewController_Host_IPC-Protocol.h>

@class NSObject, WGWidgetHostingViewController;
@protocol OS_dispatch_queue;

@interface _WGWidgetRemoteViewController : _UIRemoteViewController <_NCWidgetViewController_Host_IPC>
{
    BOOL _valid;
    NSObject<OS_dispatch_queue> *_managingHostQueue;
    WGWidgetHostingViewController *_managingHost;
}

@property (weak, nonatomic) WGWidgetHostingViewController *managingHost; // @synthesize managingHost=_managingHost;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *managingHostQueue; // @synthesize managingHostQueue=_managingHostQueue;
@property (nonatomic, getter=_isValid, setter=_setValid:) BOOL valid; // @synthesize valid=_valid;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)__closeTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__setLargestAvailableDisplayMode:(long long)arg1;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)_openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)_performUpdateWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)_requestEncodedLayerTreeAtURL:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (BOOL)_serviceHasScrollToTopView;
- (void)_setActiveDisplayMode:(long long)arg1;
- (void)_setMaximumSize:(struct CGSize)arg1 forDisplayMode:(long long)arg2;
- (void)_updateVisibilityState:(long long)arg1;
- (void)_updateVisibleFrame:(struct CGRect)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)disconnect;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

