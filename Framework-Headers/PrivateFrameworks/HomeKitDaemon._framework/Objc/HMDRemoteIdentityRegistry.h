//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface HMDRemoteIdentityRegistry : NSObject <HMFLogging>
{
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSMapTable *_accountIdentities;
    NSMapTable *_deviceIdentities;
}

@property (readonly, nonatomic) NSMapTable *accountIdentities; // @synthesize accountIdentities=_accountIdentities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMapTable *deviceIdentities; // @synthesize deviceIdentities=_deviceIdentities;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;
- (void).cxx_destruct;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)init;
- (id)pairingIdentityForAccount:(id)arg1;
- (id)pairingIdentityForDevice:(id)arg1;
- (id)pairingIdentityForIdentifier:(id)arg1;
- (void)registerPairingIdentity:(id)arg1 forAccount:(id)arg2;
- (void)registerPairingIdentity:(id)arg1 forDevice:(id)arg2;
- (void)reset;
- (id)shortDescription;

@end
