//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKRunningCurve : NSObject
{
    CDStruct_86193286 _p0;
    double _t0;
    CDStruct_86193286 _p1;
    double _t1;
    CDStruct_86193286 _pu;
    double _tu;
    struct {
        double mb[4][3];
    } _mb;
    BOOL _mbValid;
}

- (id).cxx_construct;
- (void)appendPosition:(struct VKPoint)arg1 atTime:(double)arg2;
- (void)dealloc;
- (BOOL)hasStateAtTime:(double)arg1;
- (id)init;
- (void)reset;
- (CDStruct_86193286)stateAtTime:(double)arg1;

@end

