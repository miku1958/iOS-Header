//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDPCSKeyRegistrySyncHandler : NSObject
{
    NSMutableDictionary *_keyRegistrySyncMetadataByServiceName;
    NSMutableDictionary *_lastSuccessfulKeyRegistrySyncByServiceName;
    NSObject<OS_dispatch_queue> *_keyRegistrySyncQueue;
}

@property (strong, nonatomic) NSMutableDictionary *keyRegistrySyncMetadataByServiceName; // @synthesize keyRegistrySyncMetadataByServiceName=_keyRegistrySyncMetadataByServiceName;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *keyRegistrySyncQueue; // @synthesize keyRegistrySyncQueue=_keyRegistrySyncQueue;
@property (strong, nonatomic) NSMutableDictionary *lastSuccessfulKeyRegistrySyncByServiceName; // @synthesize lastSuccessfulKeyRegistrySyncByServiceName=_lastSuccessfulKeyRegistrySyncByServiceName;

+ (id)sharedHandler;
- (void).cxx_destruct;
- (void)_registerAndPerformKeyRegistrySyncForService:(id)arg1 shouldThrottle:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)serviceKeyForServiceName:(id)arg1;
- (void)synchronizeUserKeyRegistryForService:(id)arg1 shouldThrottle:(BOOL)arg2 onBehalfOfContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

