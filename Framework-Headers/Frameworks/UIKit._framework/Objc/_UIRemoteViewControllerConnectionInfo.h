//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSMachPortSendRight, NSArray, _UIHostedWindowHostingHandle, _UIViewServiceInterface;

__attribute__((visibility("hidden")))
@interface _UIRemoteViewControllerConnectionInfo : NSObject
{
    int _preferredStatusBarVisibility;
    _UIViewServiceInterface *_interface;
    id _viewControllerOperatorProxy;
    id _serviceViewControllerProxy;
    id _serviceViewControllerControlMessageProxy;
    id _textEffectsOperatorProxy;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    BSMachPortSendRight *_serviceAccessibilityServerPortWrapper;
    long long _preferredStatusBarStyle;
    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;
    _UIHostedWindowHostingHandle *_textEffectsWindowHostingHandle;
    _UIHostedWindowHostingHandle *_textEffectsWindowAboveStatusBarHostingHandle;
    _UIHostedWindowHostingHandle *_remoteKeyboardsWindowHostingHandle;
}

@property (strong) _UIHostedWindowHostingHandle *hostedWindowHostingHandle; // @synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle;
@property (strong) _UIViewServiceInterface *interface; // @synthesize interface=_interface;
@property long long preferredStatusBarStyle; // @synthesize preferredStatusBarStyle=_preferredStatusBarStyle;
@property int preferredStatusBarVisibility; // @synthesize preferredStatusBarVisibility=_preferredStatusBarVisibility;
@property (strong) _UIHostedWindowHostingHandle *remoteKeyboardsWindowHostingHandle; // @synthesize remoteKeyboardsWindowHostingHandle=_remoteKeyboardsWindowHostingHandle;
@property (strong) BSMachPortSendRight *serviceAccessibilityServerPortWrapper; // @synthesize serviceAccessibilityServerPortWrapper=_serviceAccessibilityServerPortWrapper;
@property (strong) id serviceViewControllerControlMessageProxy; // @synthesize serviceViewControllerControlMessageProxy=_serviceViewControllerControlMessageProxy;
@property (strong) id serviceViewControllerProxy; // @synthesize serviceViewControllerProxy=_serviceViewControllerProxy;
@property (strong) NSArray *serviceViewControllerSupportedInterfaceOrientations; // @synthesize serviceViewControllerSupportedInterfaceOrientations=_serviceViewControllerSupportedInterfaceOrientations;
@property (strong) id textEffectsOperatorProxy; // @synthesize textEffectsOperatorProxy=_textEffectsOperatorProxy;
@property (strong) _UIHostedWindowHostingHandle *textEffectsWindowAboveStatusBarHostingHandle; // @synthesize textEffectsWindowAboveStatusBarHostingHandle=_textEffectsWindowAboveStatusBarHostingHandle;
@property (strong) _UIHostedWindowHostingHandle *textEffectsWindowHostingHandle; // @synthesize textEffectsWindowHostingHandle=_textEffectsWindowHostingHandle;
@property (strong) id viewControllerOperatorProxy; // @synthesize viewControllerOperatorProxy=_viewControllerOperatorProxy;

- (void).cxx_destruct;

@end

