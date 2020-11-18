//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMFMapCache, NSXPCConnection;

@interface FMFMapSession : NSObject
{
    FMFMapCache *_mapCache;
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (strong, nonatomic) FMFMapCache *mapCache; // @synthesize mapCache=_mapCache;

+ (id)newConnection;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)gridImageForScreenRatio:(double)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)gridImageForWidth:(double)arg1 height:(double)arg2 cache:(BOOL)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 screenRatio:(double)arg4 andCompletion:(CDUnknownBlockType)arg5;
- (void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 cache:(BOOL)arg6 andCompletion:(CDUnknownBlockType)arg7;
- (void)mapImageForRequest:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)noLocationImageForScreenRatio:(double)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)noLocationImageForWidth:(double)arg1 height:(double)arg2 cache:(BOOL)arg3 andCompletion:(CDUnknownBlockType)arg4;

@end

