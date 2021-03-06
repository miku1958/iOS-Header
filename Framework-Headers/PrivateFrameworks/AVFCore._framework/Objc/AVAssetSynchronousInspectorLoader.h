//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVAssetInspectorLoader.h>

@class AVAssetInspector;

__attribute__((visibility("hidden")))
@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader
{
    AVAssetInspector *_assetInspector;
}

- (id)assetInspector;
- (void)dealloc;
- (CDStruct_1b6d18a9)duration;
- (unsigned long long)hash;
- (id)initWithAssetInspector:(id)arg1;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)lyrics;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;

@end

