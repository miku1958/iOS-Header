//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDThreadNetworkMetadataStore-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDThreadNetworkMetadataStore : HMFObject <HMFLogging, HMDThreadNetworkMetadataStore>
{
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)defaultStore;
+ (id)logCategory;
+ (id)new;
- (void).cxx_destruct;
- (void)_retrieveMetadataForNetworkID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initInternal;
- (void)retrieveMetadataForNetworkID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

