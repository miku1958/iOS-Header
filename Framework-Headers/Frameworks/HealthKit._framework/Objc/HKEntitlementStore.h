//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKEntitlementStoreClient-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKProxyProvider, NSString;

@interface HKEntitlementStore : NSObject <_HKXPCExportable, HKEntitlementStoreClient>
{
    HKProxyProvider *_proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;
- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchContainerAppExtensionEntitlementsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;

@end
