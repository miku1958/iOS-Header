//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WebOverlayLayer : CALayer
{
    struct ResourceUsageOverlay *m_overlay;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithResourceUsageOverlay:(struct ResourceUsageOverlay *)arg1;

@end

