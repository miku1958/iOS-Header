//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNImageSource.h>

@interface SCNUIKitSource : SCNImageSource
{
    id _uiView;
    id _uiWindow;
}

@property (strong, nonatomic) id uiView; // @synthesize uiView=_uiView;
@property (strong, nonatomic) id uiWindow; // @synthesize uiWindow=_uiWindow;

- (void)dealloc;
- (id)init;
- (BOOL)isOpaque;
- (id)prepareWindowIfNeeded;
- (id)textureSource;

@end
