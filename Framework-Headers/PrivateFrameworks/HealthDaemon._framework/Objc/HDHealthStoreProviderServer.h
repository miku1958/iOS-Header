//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HDHealthStoreProviderServer-Protocol.h>

@class NSString;

@interface HDHealthStoreProviderServer : HDStandardTaskServer <HDHealthStoreProviderServer>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
- (BOOL)clientMayAccessProfile:(id)arg1;
- (id)exportedInterface;
- (id)profileManager;
- (id)remoteInterface;
- (void)remote_fetchAvailableIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_requestAuthorizationToNewIdentifierToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_requestAuthorizationToNewIdentifierWithCompletion:(CDUnknownBlockType)arg1;

@end
