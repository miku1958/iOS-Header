//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, ISCrossfadeItem;

@interface ISPlayerContent : NSObject
{
    BOOL _photoHasColorAdjustments;
    int _photoEXIFOrientation;
    float _videoCropFactor;
    struct CGImage *_photo;
    double _photoTime;
    AVPlayerItem *_videoPlayerItem;
    ISCrossfadeItem *_crossfadeItem;
}

@property (readonly, nonatomic) ISCrossfadeItem *crossfadeItem; // @synthesize crossfadeItem=_crossfadeItem;
@property (readonly, nonatomic) struct CGImage *photo; // @synthesize photo=_photo;
@property (readonly, nonatomic) int photoEXIFOrientation; // @synthesize photoEXIFOrientation=_photoEXIFOrientation;
@property (readonly, nonatomic) BOOL photoHasColorAdjustments; // @synthesize photoHasColorAdjustments=_photoHasColorAdjustments;
@property (readonly, nonatomic) double photoTime; // @synthesize photoTime=_photoTime;
@property (readonly, nonatomic) float videoCropFactor; // @synthesize videoCropFactor=_videoCropFactor;
@property (readonly, nonatomic) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithPhoto:(struct CGImage *)arg1 photoEXIFOrientation:(int)arg2 photoTime:(double)arg3 photoHasColorAdjustments:(BOOL)arg4 videoPlayerItem:(id)arg5 videoCropFactor:(float)arg6 crossfadeItem:(id)arg7;
- (BOOL)isEqual:(id)arg1;

@end
