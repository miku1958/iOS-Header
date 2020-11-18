//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, CLKUIQuadView;

@interface CLKUIQuadViewDisplayLink : NSObject
{
    CLKUIQuadView *_quadView;
    CADisplayLink *_displayLink;
}

- (void).cxx_destruct;
- (void)_displayLinkFired:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (void)invalidate;
- (BOOL)isPaused;
- (unsigned long long)preferredFramesPerSecond;
- (void)setPaused:(BOOL)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;

@end

