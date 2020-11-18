//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ICCloudContentTasteRequestListener : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedCloudContentTasteRequestListener;
- (void).cxx_destruct;
- (id)_init;
- (void)_setupContentTasteServiceConnection;
- (id)init;
- (void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
