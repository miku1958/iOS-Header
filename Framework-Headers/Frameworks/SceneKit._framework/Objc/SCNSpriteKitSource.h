//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNImageSource.h>

@class SKScene;

@interface SCNSpriteKitSource : SCNImageSource
{
    SKScene *_scene;
}

@property (strong, nonatomic) SKScene *scene; // @synthesize scene=_scene;

- (void)dealloc;
- (BOOL)isOpaque;
- (id)textureSource;

@end

