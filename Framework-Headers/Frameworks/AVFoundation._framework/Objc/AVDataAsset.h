//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@class AVAssetInspectorLoader, NSArray, NSDictionary;

@interface AVDataAsset : AVAsset
{
    NSDictionary *_initializationOptions;
    AVAssetInspectorLoader *_loader;
    long long _allocateTracksOnceOnly;
    NSArray *_tracks;
}

+ (unsigned long long)_dataLengthLimit;
+ (id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long *)arg2;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader *)_formatReader;
- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
- (unsigned long long)referenceRestrictions;
- (id)tracks;

@end
