//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

#import <AVFoundation/NSMutableCopying-Protocol.h>
#import <AVFoundation/NSSecureCoding-Protocol.h>

@class AVCompositionInternal, NSArray, NSDictionary;

@interface AVComposition : AVAsset <NSSecureCoding, NSMutableCopying>
{
    AVCompositionInternal *_priv;
}

@property (readonly, copy, nonatomic) NSDictionary *URLAssetInitializationOptions;
@property (readonly, nonatomic) struct CGSize naturalSize;
@property (readonly, nonatomic) NSArray *tracks;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForTrackInspectors;
- (BOOL)_clientProvidesNaturalSize;
- (int)_createEmptyMutableCompositionIfNeeded;
- (struct OpaqueFigFormatReader *)_formatReader;
- (id)_initWithComposition:(id)arg1;
- (void)_loadAssetInspectorAndLoaderOnce;
- (id)_mediaSelectionGroupDictionaries;
- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (id)_mutableTracks;
- (id)_newTrackForIndex:(long long)arg1;
- (void)_setNaturalSize:(struct CGSize)arg1;
- (BOOL)_setURLAssetInitializationOptions:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)trackWithTrackID:(int)arg1;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;

@end
