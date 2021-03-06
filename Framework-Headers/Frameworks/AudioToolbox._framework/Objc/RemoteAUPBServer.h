//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol AUPBServing;

__attribute__((visibility("hidden")))
@interface RemoteAUPBServer : NSObject
{
    NSXPCConnection *xpcConnection;
    id<AUPBServing> proxyInterface;
    struct OpaqueAUPBServer *ref;
    struct vector<NSObject<OS_dispatch_semaphore>*, std::__1::allocator<NSObject<OS_dispatch_semaphore>*>> replySemas;
}

@property (strong, nonatomic) id<AUPBServing> proxyInterface; // @synthesize proxyInterface;
@property (nonatomic) struct OpaqueAUPBServer *ref; // @synthesize ref;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSema:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)removeSema:(id)arg1;
- (void)signalAllSemaphores;

@end

