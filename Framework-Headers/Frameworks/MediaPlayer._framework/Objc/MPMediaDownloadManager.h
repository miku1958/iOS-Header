//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MPMediaDownloadManager : NSObject
{
}

@property (readonly, nonatomic) NSArray *allMediaDownloadLibraryIdentifiers;

+ (id)sharedManager;
- (id)_init;
- (id)activeDownloadForMediaItemPersistentID:(long long)arg1;
- (id)activeDownloadForStoreID:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelDownloads:(id)arg1;
- (void)enqueueAssetForDownload:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasActiveDownloads;
- (id)init;
- (void)prioritizeDownload:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)sendKeepLocalStatusChanged:(long long)arg1 forLibraryIdentifier:(long long)arg2 entityType:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;

@end

