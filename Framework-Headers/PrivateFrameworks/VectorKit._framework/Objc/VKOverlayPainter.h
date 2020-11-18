//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class VKOverlayContainerModel;
@protocol VKOverlay;

__attribute__((visibility("hidden")))
@interface VKOverlayPainter : NSObject
{
    unsigned char _applicationState;
    id<VKOverlay> _overlay;
    VKOverlayContainerModel *_containerModel;
    float _brightness;
}

@property (nonatomic) unsigned char applicationState; // @synthesize applicationState=_applicationState;
@property (nonatomic) VKOverlayContainerModel *containerModel; // @synthesize containerModel=_containerModel;
@property (readonly, nonatomic) id<VKOverlay> overlay; // @synthesize overlay=_overlay;

- (void)dealloc;
- (void)flush;
- (void)gglLayoutWithContext:(struct LayoutContext *)arg1 overlayMaskCommandBuffer:(struct CommandBuffer *)arg2 traveledStrokeCommandBuffer:(struct CommandBuffer *)arg3 strokeCommandBuffer:(struct CommandBuffer *)arg4 traveledFillCommandBuffer:(struct CommandBuffer *)arg5 fillCommandBuffer:(struct CommandBuffer *)arg6 tiles:(id)arg7;
- (id)initWithOverlay:(id)arg1;
- (void)layoutWithContext:(struct LayoutContext *)arg1 tiles:(id)arg2 keysInView:(id)arg3;
- (void)stylesheetDidChange;

@end

