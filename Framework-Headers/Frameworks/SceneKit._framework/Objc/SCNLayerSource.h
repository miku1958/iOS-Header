//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNImageSource.h>

@class CALayer;

@interface SCNLayerSource : SCNImageSource
{
    CALayer *_layer;
}

@property (strong, nonatomic) CALayer *layer; // @synthesize layer=_layer;

- (void)dealloc;
- (BOOL)isOpaque;
- (id)textureSource;

@end

