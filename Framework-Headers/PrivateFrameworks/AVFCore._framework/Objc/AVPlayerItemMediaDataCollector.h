//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItemMediaDataCollectorInternal;

@interface AVPlayerItemMediaDataCollector : NSObject
{
    AVPlayerItemMediaDataCollectorInternal *_collectorInternal;
}

- (BOOL)_attachToPlayerItem:(id)arg1;
- (void)_detatchFromPlayerItem;
- (id)_weakReference;
- (void)dealloc;
- (id)init;

@end

