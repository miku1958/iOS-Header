//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, PKDaemonClient;
@protocol OS_dispatch_queue;

@interface PKHost : NSObject
{
    NSDictionary *_hostInfoPlist;
    NSMutableDictionary *_activePlugIns;
    NSMutableDictionary *_activeOneShots;
    NSObject<OS_dispatch_queue> *_hostQueue;
    PKDaemonClient *_client;
}

@property (strong) NSMutableDictionary *activeOneShots; // @synthesize activeOneShots=_activeOneShots;
@property (strong) NSMutableDictionary *activePlugIns; // @synthesize activePlugIns=_activePlugIns;
@property (strong) PKDaemonClient *client; // @synthesize client=_client;
@property (readonly) NSDictionary *hostInfoPlist; // @synthesize hostInfoPlist=_hostInfoPlist;
@property (strong) NSObject<OS_dispatch_queue> *hostQueue; // @synthesize hostQueue=_hostQueue;

+ (id)defaultHost;
- (void).cxx_destruct;
- (void)accessPlugIns:(id)arg1 flags:(unsigned long long)arg2 extensions:(CDUnknownBlockType)arg3;
- (void)activatePlugIn:(id)arg1;
- (id)activePlugInForIdentifier:(id)arg1;
- (id)activePlugInForIdentifier:(id)arg1 activeOnly:(BOOL)arg2;
- (void)cancelPlugInDiscovery:(id)arg1;
- (id)continuouslyDiscoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(CDUnknownBlockType)arg3;
- (void)deactivatePlugIn:(id)arg1;
- (void)discoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(CDUnknownBlockType)arg3;
- (id)init;
- (void)readyPlugIns:(id)arg1 ready:(CDUnknownBlockType)arg2;
- (id)rewriteDiscoveryAttributes:(id)arg1 flags:(unsigned long long)arg2;
- (void)setElection:(long long)arg1 forPlugIn:(id)arg2;
- (void)setExtensionState:(id)arg1 forPlugIn:(id)arg2;

@end

