//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, OFLRUCache;
@protocol OS_dispatch_queue;

@interface OFMetadataFileCache : NSObject
{
    NSObject<OS_dispatch_queue> *_serialDiskSaveQueue;
    NSString *_diskCacheDirectory;
    NSMutableDictionary *_diskCacheFilePathForIdentifiers;
    OFLRUCache *_memoryCache;
    BOOL _useMemoryCache;
    BOOL _useDiskCache;
    BOOL _useAsynchronousSerialDiskSaveQueue;
    BOOL _allowCleanupOnMemoryWarnings;
    BOOL _allowCleanupOnEnteringBackground;
}

@property (nonatomic) BOOL allowCleanupOnEnteringBackground; // @synthesize allowCleanupOnEnteringBackground=_allowCleanupOnEnteringBackground;
@property (nonatomic) BOOL allowCleanupOnMemoryWarnings; // @synthesize allowCleanupOnMemoryWarnings=_allowCleanupOnMemoryWarnings;
@property (nonatomic) BOOL useAsynchronousSerialDiskSaveQueue; // @synthesize useAsynchronousSerialDiskSaveQueue=_useAsynchronousSerialDiskSaveQueue;
@property (nonatomic) BOOL useDiskCache; // @synthesize useDiskCache=_useDiskCache;
@property (nonatomic) BOOL useMemoryCache; // @synthesize useMemoryCache=_useMemoryCache;

- (void)_didEnterBackgroundNotification;
- (void)_didReceiveMemoryWarningNotification;
- (id)_diskCacheFilePathForIdentifier:(id)arg1;
- (id)_metadataForIdentifier:(id)arg1;
- (void)_saveMetadata:(id)arg1 forIdentifier:(id)arg2;
- (void)_willTerminateNotification;
- (id)attributesForIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDiskCacheDirectory:(id)arg1;
- (void)invalidateDiskCacheForIdentifier:(id)arg1;
- (void)invalidateDiskCaches;
- (void)invalidateMemoryCacheForIdentifier:(id)arg1;
- (void)invalidateMemoryCaches;
- (void)purgeDiskCache:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)setAttributes:(id)arg1 forIdentifier:(id)arg2;
- (void)setNumberOfMemorySlots:(unsigned long long)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 andIdentifier:(id)arg3;
- (id)valueForKey:(id)arg1 andIdentifier:(id)arg2;

@end

