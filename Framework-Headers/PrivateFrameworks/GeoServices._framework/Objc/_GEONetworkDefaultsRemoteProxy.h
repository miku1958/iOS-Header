//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEONetworkDefaultsServerProxy-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, _GEONetworkDefaultsServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEONetworkDefaultsRemoteProxy : NSObject <_GEONetworkDefaultsServerProxy>
{
    id<_GEONetworkDefaultsServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_isolation;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSMutableArray *_updateCompletionHandlers;
    int _configChangedToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_GEONetworkDefaultsServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_networkDefaultsDidChange;
- (void)dealloc;
- (id)init;
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;

@end

