//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NanoResourceGrabber : NSObject
{
    BOOL _connectionMayBeValid;
    NSXPCConnection *_nrgdConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) BOOL connectionMayBeValid; // @synthesize connectionMayBeValid=_connectionMayBeValid;
@property (strong, nonatomic) NSXPCConnection *nrgdConnection; // @synthesize nrgdConnection=_nrgdConnection;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_getIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(CDUnknownBlockType)arg3 checkLocal:(BOOL)arg4 withTimeout:(double)arg5;
- (void)_getLocalIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(CDUnknownBlockType)arg3 withTimeout:(double)arg4;
- (void)_getRemoteIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(CDUnknownBlockType)arg3 withTimeout:(double)arg4;
- (void)connectToService;
- (void)dealloc;
- (void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id *)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(CDUnknownBlockType)arg3;
- (void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(CDUnknownBlockType)arg3 timeout:(double)arg4;
- (void)getIconForBundleIDThread:(id)arg1 iconVariant:(int)arg2 block:(CDUnknownBlockType)arg3 timeout:(double)arg4;
- (void)getRemoteIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(CDUnknownBlockType)arg3;
- (void)getRemoteIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(CDUnknownBlockType)arg3 timeout:(double)arg4;
- (void)getRemoteIconForBundleIDThread:(id)arg1 iconVariant:(int)arg2 block:(CDUnknownBlockType)arg3;
- (void)getRemoteIconForBundleIDThread:(id)arg1 iconVariant:(int)arg2 block:(CDUnknownBlockType)arg3 timeout:(double)arg4;
- (id)init;
- (void)setIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3;

@end
