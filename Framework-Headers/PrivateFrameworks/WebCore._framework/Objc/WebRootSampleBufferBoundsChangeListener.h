//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebRootSampleBufferBoundsChangeListener : NSObject
{
    Function_15535652 _callback;
    struct RetainPtr<CALayer> _rootLayer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)begin:(id)arg1;
- (void)dealloc;
- (id)initWithCallback:(Function_15535652 *)arg1;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stop;

@end

