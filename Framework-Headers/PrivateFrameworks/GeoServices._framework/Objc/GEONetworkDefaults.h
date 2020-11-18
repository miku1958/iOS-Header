//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/_GEONetworkDefaultsServerProxyDelegate-Protocol.h>

@class NSDictionary, NSLock, NSMutableArray, NSString;
@protocol _GEONetworkDefaultsServerProxy;

@interface GEONetworkDefaults : NSObject <_GEONetworkDefaultsServerProxyDelegate>
{
    id<_GEONetworkDefaultsServerProxy> _serverProxy;
    NSMutableArray *_completionHandlers;
    NSDictionary *_networkDefaults;
    NSLock *_networkDefaultsLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_ib_disableServerConnection;
+ (void)setUseLocalProxy:(BOOL)arg1;
+ (id)sharedNetworkDefaults;
- (BOOL)_needsUpdate;
- (id)allKeys;
- (void)dealloc;
- (id)init;
- (void)serverProxy:(id)arg1 networkDefaultsDidChange:(id)arg2;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;
- (id)valueForKey:(id)arg1;

@end

