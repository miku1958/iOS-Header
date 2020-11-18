//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset;

@interface ISAsset : NSObject
{
    int _photoEXIFOrientation;
    AVAsset *_videoAsset;
    struct CGImage *_photo;
    double _photoTime;
    unsigned long long _options;
}

@property (readonly, nonatomic) BOOL hasColorAdjustments;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, nonatomic) struct CGImage *photo; // @synthesize photo=_photo;
@property (readonly, nonatomic) int photoEXIFOrientation; // @synthesize photoEXIFOrientation=_photoEXIFOrientation;
@property (readonly, nonatomic) double photoTime; // @synthesize photoTime=_photoTime;
@property (readonly, copy, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;

+ (id)assetForURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage *)arg2 photoTime:(double)arg3;
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage *)arg2 photoTime:(double)arg3 options:(unsigned long long)arg4;
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage *)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage *)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 options:(unsigned long long)arg5;
- (void)resetAVObjects;

@end

