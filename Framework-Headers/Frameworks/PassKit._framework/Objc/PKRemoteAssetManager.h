//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSURL, NSURLSession;
@protocol OS_dispatch_queue;

@interface PKRemoteAssetManager : NSObject
{
    NSURL *_directoryURL;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_manifestItemsByRelativeURL;
    NSMutableArray *_completionHandlers;
}

- (void).cxx_destruct;
- (void)_callCompletionHandlersWithFinishState:(BOOL)arg1 progress:(float)arg2 error:(id)arg3;
- (void)_downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_flushBundleCaches;
- (BOOL)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id *)arg3;
- (BOOL)assetExistsLocally:(id)arg1;
- (void)cancelDownloads;
- (id)deviceSpecificItems;
- (id)deviceSpecificItemsForScreenScale:(double)arg1 suffix:(id)arg2;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithFileURL:(id)arg1 queue:(id)arg2;
- (id)itemWithRelativePath:(id)arg1;
- (id)remoteAssetManifests;

@end
