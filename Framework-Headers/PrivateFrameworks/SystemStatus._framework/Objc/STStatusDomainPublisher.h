//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemStatus/STStatusDomainPublisherClientHandle-Protocol.h>

@class NSString;
@protocol STStatusDomainData, STStatusDomainPublisherServerHandle;

@interface STStatusDomainPublisher : NSObject <STStatusDomainPublisherClientHandle>
{
    id<STStatusDomainPublisherServerHandle> _serverHandle;
}

@property (copy, nonatomic) id<STStatusDomainData> data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<STStatusDomainPublisherServerHandle> serverHandle; // @synthesize serverHandle=_serverHandle;
@property (readonly) Class superclass;
@property (copy, nonatomic) id<STStatusDomainData> volatileData;

+ (id)emptyData;
+ (unsigned long long)statusDomainName;
- (void).cxx_destruct;
- (void)_setData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setVolatileData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateDataWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateVolatileDataWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)handleUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2;
- (id)init;
- (id)initWithServerHandle:(id)arg1;
- (void)setData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setVolatileData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateDataWithBlock:(CDUnknownBlockType)arg1;
- (void)updateDataWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateVolatileDataWithBlock:(CDUnknownBlockType)arg1;
- (void)updateVolatileDataWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end

