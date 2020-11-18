//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoardUI/BSUIMappedImageCache.h>

#import <NanoTimeKitCompanion/NTKFaceCollectionObserver-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface NTKKaleidoscopeSwatchMappedImageCache : BSUIMappedImageCache <NTKFaceCollectionObserver>
{
    id _activeDeviceNotificationBlock;
    NSArray *_libraryCollections;
    NSMutableArray *_loadedCollections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyForAsset:(id)arg1 style:(id)arg2 resourceDirectory:(id)arg3;
+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_cleanCache;
- (id)_init;
- (void)_pruneUnusedKeys;
- (void)_removeImagesForKeysMatching:(CDUnknownBlockType)arg1;
- (void)faceCollectionDidLoad:(id)arg1;

@end
