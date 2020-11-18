//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKDataAccessor.h>

@class NSObject, NSURL, PKRemoteAssetManager;
@protocol OS_dispatch_queue;

@interface PKFileDataAccessor : PKDataAccessor
{
    PKRemoteAssetManager *_remoteAssetManager;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSURL *_fileURL;
}

@property (readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;

- (void).cxx_destruct;
- (id)archiveData;
- (id)bundle;
- (void)contentWithCompletion:(CDUnknownBlockType)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (void)dictionaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)displayProfileOfType:(long long)arg1;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2 processingQueue:(id)arg3;
- (id)manifestHash;
- (id)remoteAssetManager;
- (BOOL)remoteAssetsDownloaded;
- (id)resourceValueForKey:(id)arg1;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)serializedFileWrapper;

@end

