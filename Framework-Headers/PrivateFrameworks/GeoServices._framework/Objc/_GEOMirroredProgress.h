//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProgress.h>

__attribute__((visibility("hidden")))
@interface _GEOMirroredProgress : NSProgress
{
    NSProgress *_originalProgress;
}

- (void).cxx_destruct;
- (id)_initWithMirroredProgressForSubclasses:(id)arg1;
- (void)_registerForKVO;
- (void)_replaceObservedProgressWith:(id)arg1;
- (void)_unregisterForKVO;
- (void)_update;
- (void)dealloc;
- (id)initWithMirroredProgress:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

