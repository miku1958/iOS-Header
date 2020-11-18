//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileCoreServices/_LSIconCache.h>

#import <MobileCoreServices/LSIconCacheServiceProtocol-Protocol.h>
#import <MobileCoreServices/NSXPCListenerDelegate-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSIconCacheService : _LSIconCache <LSIconCacheServiceProtocol, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)beginListening;
+ (id)cacheSalt;
+ (id)sharedInstance;
- (void)copyIconBitmapCacheConfigurationWithReply:(CDUnknownBlockType)arg1;
- (BOOL)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 boundContainerURL:(id)arg2 dataContainerURL:(id)arg3 bundleIdentifier:(id)arg4 iconsDictionary:(id)arg5 cacheFileName:(id)arg6 variant:(int)arg7 bitmapData:(id *)arg8;
- (void)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 boundContainerURL:(id)arg2 dataContainerURL:(id)arg3 bundleIdentifier:(id)arg4 iconsDictionary:(id)arg5 cacheFileName:(id)arg6 variant:(int)arg7 reply:(CDUnknownBlockType)arg8;
- (BOOL)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 bundleIdentifier:(id)arg2 roleIdentifier:(id)arg3 iconFiles:(id)arg4 variant:(int)arg5 options:(int)arg6 bitmapData:(id *)arg7;
- (void)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 bundleIdentifier:(id)arg2 roleIdentifier:(id)arg3 iconFiles:(id)arg4 variant:(int)arg5 options:(int)arg6 reply:(CDUnknownBlockType)arg7;
- (id)init;
- (void)invalidateItemsForBundeID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)invalidateItemsForBundleIdentifier:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setIconData:(id)arg1 forKey:(id)arg2;

@end
