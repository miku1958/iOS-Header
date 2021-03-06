//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSKPulseAnimationControllerProtocol-Protocol.h>

@class NSArray, NSMutableArray;
@protocol TSKHighlightArrayControllerProtocol;

@interface TSKHighlightArrayController : NSObject <TSKPulseAnimationControllerProtocol>
{
    NSMutableArray *_layers;
    NSMutableArray *_controllers;
    double _zOrder;
    id<TSKHighlightArrayControllerProtocol> _delegate;
    BOOL _creatingLayers;
    struct CGAffineTransform _canvasTransform;
    struct CGAffineTransform _layerTransform;
    BOOL _shouldPulsate;
    BOOL _pulsating;
    BOOL _autohide;
    double _viewScale;
}

@property (nonatomic) BOOL autohide; // @synthesize autohide=_autohide;
@property (readonly, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property (nonatomic) BOOL pulsating; // @synthesize pulsating=_pulsating;
@property (nonatomic) BOOL shouldPulsate; // @synthesize shouldPulsate=_shouldPulsate;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) double viewScale; // @synthesize viewScale=_viewScale;

- (id)buildHighlightsForSearchReferences:(id)arg1 contentsScaleForLayers:(double)arg2;
- (void)dealloc;
- (void)disconnect;
- (id)initWithZOrder:(double)arg1 delegate:(id)arg2;
- (void)pulseAnimationDidStopForPulse:(id)arg1;
- (void)reset;
- (void)setCanvasTransform:(struct CGAffineTransform)arg1 layerTransform:(struct CGAffineTransform)arg2;
- (void)startAnimating;
- (void)stop;

@end

