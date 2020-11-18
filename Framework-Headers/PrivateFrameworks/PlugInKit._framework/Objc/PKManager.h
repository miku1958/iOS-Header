//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKDaemonClient;

@interface PKManager : NSObject
{
    PKDaemonClient *_client;
}

@property (strong) PKDaemonClient *client; // @synthesize client=_client;

+ (id)defaultManager;
- (void).cxx_destruct;
- (id)containingAppForExtensionProperties:(id)arg1;
- (id)containingAppForPlugInConnectedTo:(id)arg1;
- (id)containingAppForPlugInWithPid:(int)arg1;
- (void)forceHoldPlugIn:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)holdPlugInsInApplication:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)holdRequest:(id)arg1 flags:(unsigned long long)arg2 result:(CDUnknownBlockType)arg3;
- (id)informationForPlugInWithPid:(int)arg1;
- (id)initForService:(const char *)arg1;
- (void)registerPlugInAtURL:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)registerPlugInsInBundle:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)releaseHold:(id)arg1;
- (void)unregisterPlugInAtURL:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)unregisterPlugInsInBundle:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)updateExtensionStatesForPlugIns:(id)arg1 result:(CDUnknownBlockType)arg2;

@end
