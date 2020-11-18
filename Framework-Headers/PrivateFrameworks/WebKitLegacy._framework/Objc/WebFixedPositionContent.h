//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebFixedPositionContent : NSObject
{
    struct WebFixedPositionContentData *_private;
}

- (void)dealloc;
- (void)didFinishScrollingOrZooming;
- (BOOL)hasFixedOrStickyPositionLayers;
- (id)initWithWebView:(id)arg1;
- (void)overflowScrollPositionForLayer:(id)arg1 changedTo:(struct CGPoint)arg2;
- (void)scrollOrZoomChanged:(struct CGRect)arg1;
- (void)setViewportConstrainedLayers:(HashMap_8e3a669a *)arg1 stickyContainerMap:(const HashMap_9d18c561 *)arg2;

@end

