//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAVSampleBufferStatusChangeListener : NSObject
{
    struct MediaPlayerPrivateMediaStreamAVFObjC *_parent;
}

- (void)beginObservingLayers;
- (void)dealloc;
- (id)initWithParent:(struct MediaPlayerPrivateMediaStreamAVFObjC *)arg1;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingLayers;

@end
