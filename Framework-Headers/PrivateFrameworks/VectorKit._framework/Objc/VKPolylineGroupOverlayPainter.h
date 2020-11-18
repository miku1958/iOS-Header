//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKOverlayPainter.h>

#import <VectorKit/VKPolylineGroupOverlayObserver-Protocol.h>

@class NSMapTable, NSString, VKPolylineOverlay, VKPolylineOverlayPainter;

@interface VKPolylineGroupOverlayPainter : VKOverlayPainter <VKPolylineGroupOverlayObserver>
{
    VKPolylineOverlay *_selectedPolyline;
    NSMapTable *_polylinesToPainters;
    BOOL _showTraffic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) VKPolylineOverlayPainter *selectedPolylinePainter;
@property (nonatomic) BOOL showTraffic; // @synthesize showTraffic=_showTraffic;
@property (readonly) Class superclass;

- (void)_addPainterForOverlay:(id)arg1;
- (void)dealloc;
- (void)flush;
- (void)gglLayoutWithContext:(struct LayoutContext *)arg1 overlayMaskCommandBuffer:(struct CommandBuffer *)arg2 traveledStrokeCommandBuffer:(struct CommandBuffer *)arg3 strokeCommandBuffer:(struct CommandBuffer *)arg4 traveledFillCommandBuffer:(struct CommandBuffer *)arg5 fillCommandBuffer:(struct CommandBuffer *)arg6 tiles:(id)arg7;
- (id)initWithOverlay:(id)arg1;
- (void)layoutWithContext:(struct LayoutContext *)arg1 tiles:(id)arg2 keysInView:(id)arg3;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)setApplicationState:(unsigned char)arg1;
- (void)setContainerModel:(id)arg1;
- (void)stylesheetDidChange;

@end

