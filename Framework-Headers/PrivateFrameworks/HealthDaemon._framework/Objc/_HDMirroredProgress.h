//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProgress.h>

@interface _HDMirroredProgress : NSProgress
{
    NSProgress *_originalProgress;
}

+ (id)_KVOKeyPaths;
- (void).cxx_destruct;
- (void)_registerForKVO;
- (void)_unregisterForKVO;
- (void)_update;
- (void)dealloc;
- (id)initWithMirroredProgress:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
