//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>

@class NSMutableSet, NSString;

@interface HDSourceQueryServer : HDQueryServer <HDDataObserver>
{
    BOOL _deliversUpdates;
    NSMutableSet *_sources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)queryClass;
+ (id)requiredEntitlements;
- (void).cxx_destruct;
- (double)_queue_queryLogThreshold;
- (void)_queue_sourceAdded:(id)arg1;
- (void)_queue_start;
- (BOOL)_shouldListenForUpdates;
- (void)_sourcesForObjectsOfType:(id)arg1 filter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (id)sourceClientProxy;

@end

