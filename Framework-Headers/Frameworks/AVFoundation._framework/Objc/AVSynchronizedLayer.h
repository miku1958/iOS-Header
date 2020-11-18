//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class AVPlayerItem, AVSynchronizedLayerInternal;

@interface AVSynchronizedLayer : CALayer
{
    AVSynchronizedLayerInternal *_syncLayer;
}

@property (strong, nonatomic) AVPlayerItem *playerItem;

+ (id)synchronizedLayerWithPlayerItem:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)layerDidBecomeVisible:(BOOL)arg1;

@end
