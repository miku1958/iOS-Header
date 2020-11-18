//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMEffectsRenderer;

@protocol CAMEffectsRendererDelegate <NSObject>
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 didFinishTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 didSelectFilterType:(long long)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 didStartTransitionToShowGrid:(BOOL)arg2 animated:(BOOL)arg3;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 requestsPreviewLayerEnabled:(BOOL)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 requestsVideoDataOutputEnabled:(BOOL)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 willTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRendererDidStartPreview:(CAMEffectsRenderer *)arg1;
@end
