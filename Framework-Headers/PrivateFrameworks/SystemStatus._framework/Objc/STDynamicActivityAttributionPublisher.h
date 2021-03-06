//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface STDynamicActivityAttributionPublisher : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_serverXPCConnection;
    NSString *_cachedLocalizedPlistKey;
    NSString *_cachedAppBundleID;
}

@property (strong, nonatomic) NSString *cachedAppBundleID; // @synthesize cachedAppBundleID=_cachedAppBundleID;
@property (strong, nonatomic) NSString *cachedLocalizedPlistKey; // @synthesize cachedLocalizedPlistKey=_cachedLocalizedPlistKey;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (strong, nonatomic) NSXPCConnection *serverXPCConnection; // @synthesize serverXPCConnection=_serverXPCConnection;

+ (void)setCurrentAttributionKey:(id)arg1 andApp:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_internalQueue_sendAttributionKey:(id)arg1 andApp:(id)arg2;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (void)_resendAttributionData;
- (void)_tearDownXPCConnection;
- (id)init;
- (void)setCurrentAttributionKey:(id)arg1 application:(id)arg2;

@end

