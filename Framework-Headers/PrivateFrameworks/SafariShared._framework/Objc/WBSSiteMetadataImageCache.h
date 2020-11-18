//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSURL, WBSCacheRetainReleasePolicy, WBSCoalescedAsynchronousWriter;
@protocol OS_dispatch_queue, WBSSiteMetadataImageCacheDelegate;

@interface WBSSiteMetadataImageCache : NSObject
{
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_imagesForKeyStrings;
    NSMutableSet *_pendingKeyStringRequests;
    NSMutableSet *_missingImageKeyStrings;
    WBSCacheRetainReleasePolicy *_cachePolicy;
    NSMutableDictionary *_cacheSettings;
    WBSCoalescedAsynchronousWriter *_cacheSettingsWriter;
    BOOL _terminating;
    NSURL *_imageDirectoryURL;
    long long _imageType;
    id<WBSSiteMetadataImageCacheDelegate> _delegate;
}

@property (weak, nonatomic) id<WBSSiteMetadataImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSURL *imageDirectoryURL; // @synthesize imageDirectoryURL=_imageDirectoryURL;
@property (readonly, nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property (readonly, nonatomic, getter=isTerminating) BOOL terminating; // @synthesize terminating=_terminating;

- (void).cxx_destruct;
- (id)_cacheSettingsFileURL;
- (void)_didLoadImage:(id)arg1 forKeyString:(id)arg2 fromDisk:(BOOL)arg3;
- (id)_diskAccessQueueName;
- (void)_dispatchDiskAccessBlock:(CDUnknownBlockType)arg1;
- (void)_emptyCacheDirectory;
- (id)_fileLocationForKeyString:(id)arg1;
- (id)_fileNameForKeyString:(id)arg1;
- (id)_internalImageForKeyString:(id)arg1;
- (long long)_internalImageStateForKeyString:(id)arg1;
- (void)_internalPurgeUnneededImages;
- (void)_internalQueueDispatchBarrierAsync:(CDUnknownBlockType)arg1;
- (void)_internalQueueDispatchSync:(CDUnknownBlockType)arg1;
- (id)_internalQueueName;
- (void)_internalReleaseImageForKeyString:(id)arg1;
- (void)_internalRemoveAllImages;
- (void)_internalRemoveImagesFromCacheForKeyStrings:(id)arg1;
- (void)_internalSaveImageToDisk:(id)arg1 forKeyString:(id)arg2;
- (void)_internalSetImageState:(long long)arg1 forKeyString:(id)arg2;
- (void)_internalSetSetting:(id)arg1 forKey:(id)arg2;
- (void)_internalSetUpImageCache;
- (id)_internalSettingForKey:(id)arg1;
- (id)_loadImageFromDiskForKeyString:(id)arg1;
- (void)_notifyDidFinishLoadingSettings;
- (void)_removeImagesPassingTest:(CDUnknownBlockType)arg1;
- (void)_requestImageForKeyString:(id)arg1;
- (void)_saveCacheSettingsSoon;
- (void)emptyCache;
- (id)imageForKeyString:(id)arg1;
- (long long)imageStateForKeyString:(id)arg1;
- (id)init;
- (id)initWithImageDirectoryURL:(id)arg1 imageType:(long long)arg2;
- (BOOL)isImageRetainedForKeyString:(id)arg1;
- (void)purgeUnneededImages;
- (void)releaseImageForKeyString:(id)arg1;
- (void)releaseImageWithKeyStringProvider:(CDUnknownBlockType)arg1;
- (void)releaseImagesForKeyStrings:(id)arg1;
- (void)removeAllImages;
- (void)removeImagesFromCacheForKeyStrings:(id)arg1;
- (void)retainImageForKeyString:(id)arg1;
- (void)retainImageWithKeyStringProvider:(CDUnknownBlockType)arg1;
- (void)retainImagesForKeyStrings:(id)arg1;
- (void)saveImageToDisk:(id)arg1 forKeyString:(id)arg2;
- (void)savePendingChangesBeforeTermination;
- (void)setImage:(id)arg1 forKeyString:(id)arg2;
- (void)setImageState:(long long)arg1 forKeyString:(id)arg2;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (void)setUpImageCache;
- (id)settingForKey:(id)arg1;

@end

