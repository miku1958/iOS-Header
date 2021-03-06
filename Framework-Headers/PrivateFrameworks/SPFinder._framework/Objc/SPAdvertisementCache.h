//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPFinder/SPAdvertisementCaching-Protocol.h>
#import <SPFinder/SPBeaconPayloadCaching-Protocol.h>

@class FMXPCServiceDescription, FMXPCSession, NSString;
@protocol OS_dispatch_queue, SPAdvertisementCacheXPCProtocol;

@interface SPAdvertisementCache : NSObject <SPAdvertisementCaching, SPBeaconPayloadCaching>
{
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id<SPAdvertisementCacheXPCProtocol> _proxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<SPAdvertisementCacheXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
@property (strong, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)advertisementsForSearchCriteria:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beaconAdvertisementAtFileURL:(id)arg1 beaconIdentifier:(id)arg2 scanDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beaconPayloadsForSearchCriteria:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (void)markAdvertisementsProcessed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markBeaconPayloadsProcessed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markRecordsProcessed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mockingEnabled:(BOOL)arg1;
- (id)remoteInterface;
- (void)saveAdvertisements:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveBeaconPayloads:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

