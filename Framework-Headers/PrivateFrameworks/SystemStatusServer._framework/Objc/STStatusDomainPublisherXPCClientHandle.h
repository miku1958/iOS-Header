//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemStatusServer/STStatusDomainPublisherXPCServer-Protocol.h>

@class BSMutableIntegerMap, NSSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, STStatusDomainPublisherServerHandle;

@interface STStatusDomainPublisherXPCClientHandle : NSObject <STStatusDomainPublisherXPCServer>
{
    id<STStatusDomainPublisherServerHandle> _serverHandle;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_clientXPCConnection;
    BSMutableIntegerMap *_dataByDomain;
    NSSet *_entitledDomains;
}

@property (readonly, nonatomic) NSXPCConnection *clientXPCConnection; // @synthesize clientXPCConnection=_clientXPCConnection;
@property (readonly, nonatomic) BSMutableIntegerMap *dataByDomain; // @synthesize dataByDomain=_dataByDomain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *entitledDomains; // @synthesize entitledDomains=_entitledDomains;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (readonly, weak, nonatomic) id<STStatusDomainPublisherServerHandle> serverHandle; // @synthesize serverHandle=_serverHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_internalQueue_dataForDomainCreatingIfNecessary:(unsigned long long)arg1;
- (id)_newEmptyDataForDomain:(unsigned long long)arg1;
- (void)_publishData:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)_publishDataDiff:(id)arg1 forDomain:(unsigned long long)arg2;
- (id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2;
- (void)publishBatteryData:(id)arg1;
- (void)publishBatteryDataDiff:(id)arg1;
- (void)publishTelephonyData:(id)arg1;
- (void)publishTelephonyDataDiff:(id)arg1;
- (void)publishVoiceControlData:(id)arg1;
- (void)publishVoiceControlDataDiff:(id)arg1;
- (void)publishWifiData:(id)arg1;
- (void)publishWifiDataDiff:(id)arg1;

@end
