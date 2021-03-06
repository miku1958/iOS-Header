//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleIDSSOAuthentication/AIDAServiceOwnerProtocol-Protocol.h>

@class ACAccountStore, NSDictionary, NSString;

@interface AIDAServiceOwnersManager : NSObject <AIDAServiceOwnerProtocol>
{
    struct os_unfair_lock_s _serviceOwnersLock;
    ACAccountStore *_accountStore;
    NSDictionary *_serviceOwners;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDictionary *serviceOwners; // @synthesize serviceOwners=_serviceOwners;
@property (readonly) Class superclass;

+ (id)serviceOwnerBundles;
+ (id)supportedServices;
- (void).cxx_destruct;
- (id)DSIDForAccount:(id)arg1 service:(id)arg2;
- (id)_buildServiceOwnerMapping;
- (id)_postCloudSupportedServicesForAltDSID:(id)arg1;
- (id)accountForService:(id)arg1;
- (id)altDSIDForAccount:(id)arg1 service:(id)arg2;
- (id)init;
- (id)initWithAccountStore:(id)arg1;
- (id)nameComponentsForAccount:(id)arg1 service:(id)arg2;
- (void)signInService:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signInToAllServicesInBackground:(BOOL)arg1 usingContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signInToAllServicesInBackgroundUsingContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signInToServices:(id)arg1 usingContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signOutOfAllServicesUsingContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signOutOfServices:(id)arg1 usingContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signOutService:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

