//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACDAuthenticationDialogManagerProtocol-Protocol.h>

@class ACDQueueDictionary, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface ACDAuthenticationDialogManager : NSObject <ACDAuthenticationDialogManagerProtocol>
{
    NSXPCListener *_authenticationDialogListener;
    ACDQueueDictionary *_dialogRequestQueues;
    NSString *_activeAccountID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_confirmUserWantsToOpenAuthenticationURLForAccount:(id)arg1;
- (void)_launchDialogContainerAppForAccount:(id)arg1 shouldConfirm:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authenticationDialogCrashed;
- (void)authenticationDialogDidFinishWithSuccess:(BOOL)arg1 response:(id)arg2;
- (void)contextForAuthenticationDialog:(CDUnknownBlockType)arg1;
- (id)init;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;

@end

