//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDContentAnimation.h>

@interface TSDContinuousContentPathAnimation : TSDContentAnimation
{
    CDUnknownBlockType _tick;
    CDUnknownBlockType _isFinished;
}

@property (copy, nonatomic) CDUnknownBlockType isFinished; // @synthesize isFinished=_isFinished;
@property (copy, nonatomic) CDUnknownBlockType tick; // @synthesize tick=_tick;

- (void)dealloc;
- (void)i_applyToLayer:(id)arg1 withTransformBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

