//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface OneShotDisplayLinkHandler : NSObject
{
    struct RemoteLayerTreeDrawingAreaProxy *_drawingAreaProxy;
    CADisplayLink *_displayLink;
}

- (void)dealloc;
- (void)displayLinkFired:(id)arg1;
- (id)initWithDrawingAreaProxy:(struct RemoteLayerTreeDrawingAreaProxy *)arg1;
- (void)invalidate;
- (void)schedule;

@end

