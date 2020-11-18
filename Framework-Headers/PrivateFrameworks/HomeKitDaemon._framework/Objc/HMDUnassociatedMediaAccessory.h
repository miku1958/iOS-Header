//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDUnassociatedAccessory.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessoryAdvertisement, NSString;

@interface HMDUnassociatedMediaAccessory : HMDUnassociatedAccessory <HMFLogging>
{
    HMDAccessoryAdvertisement *_advertisement;
}

@property (strong) HMDAccessoryAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (Class)modelClass;
- (void).cxx_destruct;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
- (long long)associationOptions;
- (id)dumpDescription;
- (id)initWithAdvertisement:(id)arg1 messageDispatcher:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (void)updateAdvertisementData:(id)arg1;

@end
