//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/RBConcreteTarget.h>

@class RBProcess;

__attribute__((visibility("hidden")))
@interface RBBasicProcessConcreteTarget : RBConcreteTarget
{
    RBProcess *_process;
}

- (void).cxx_destruct;
- (id)_initWithProcess:(id)arg1;
- (id)createRBSTarget;
- (id)description;
- (id)identity;
- (BOOL)isSystem;
- (id)process;

@end
