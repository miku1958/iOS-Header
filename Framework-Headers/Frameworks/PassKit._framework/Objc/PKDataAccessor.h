//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSData, PKRemoteAssetManager;
@protocol OS_dispatch_queue;

@interface PKDataAccessor : NSObject
{
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property (readonly, nonatomic) NSData *archiveData;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSData *manifestHash;
@property (readonly, nonatomic) PKRemoteAssetManager *remoteAssetManager;
@property (readonly, nonatomic) BOOL remoteAssetsDownloaded;
@property (readonly, nonatomic) NSData *serializedFileWrapper;

- (void).cxx_destruct;
- (id)content;
- (void)contentWithCompletion:(CDUnknownBlockType)arg1;
- (id)dataForBundleResource:(id)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (id)dataForBundleResources:(id)arg1;
- (id)dictionary;
- (void)dictionaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)displayProfileOfType:(long long)arg1;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(BOOL)arg3;
- (void)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)noteShared;
- (void)requestUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (id)resourceValueForKey:(id)arg1;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSettings:(unsigned long long)arg1;

@end

