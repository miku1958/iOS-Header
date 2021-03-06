//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVComposition.h>

@class AVMutableCompositionInternal, NSArray;

@interface AVMutableComposition : AVComposition
{
    AVMutableCompositionInternal *_mutablePriv;
}

@property (nonatomic) struct CGSize naturalSize;
@property (readonly, nonatomic) NSArray *tracks;

+ (id)composition;
+ (id)compositionWithURLAssetInitializationOptions:(id)arg1;
- (id)_initWithComposition:(id)arg1;
- (id)_newTrackForIndex:(long long)arg1;
- (void)_notifyTracksThatSegmentsDidChange:(id)arg1 successfully:(BOOL)arg2;
- (void)_notifyTracksThatSegmentsWillChange:(id)arg1;
- (id)addMutableTrackWithMediaType:(id)arg1 preferredTrackID:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)insertEmptyTimeRange:(CDStruct_e83c9415)arg1;
- (BOOL)insertTimeRange:(CDStruct_e83c9415)arg1 ofAsset:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
- (id)mutableTrackCompatibleWithTrack:(id)arg1;
- (void)removeTimeRange:(CDStruct_e83c9415)arg1;
- (void)removeTrack:(id)arg1;
- (void)scaleTimeRange:(CDStruct_e83c9415)arg1 toDuration:(CDStruct_1b6d18a9)arg2;
- (void)setMetadata:(id)arg1;
- (id)trackWithTrackID:(int)arg1;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;

@end

