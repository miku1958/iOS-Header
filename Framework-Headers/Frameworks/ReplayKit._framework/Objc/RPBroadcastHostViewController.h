//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSXPCListenerEndpoint, RPBroadcastExtensionHostContext;

@interface RPBroadcastHostViewController : _UIRemoteViewController
{
    RPBroadcastExtensionHostContext *_hostContext;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

@property (strong, nonatomic) RPBroadcastExtensionHostContext *hostContext; // @synthesize hostContext=_hostContext;
@property (strong, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;

- (void).cxx_destruct;
- (oneway void)completeSetupWithBroadcastURL:(id)arg1;
- (void)updateBroadcastHandlerListenerEndpoint;

@end
