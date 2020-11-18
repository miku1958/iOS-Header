//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDCAPropertyAnimationContextCache.h>

__attribute__((visibility("hidden")))
@interface TSDCABasicAnimationContextCache : TSDCAPropertyAnimationContextCache
{
    id _fromValue;
    id _toValue;
}

@property (readonly, nonatomic) id fromValue; // @synthesize fromValue=_fromValue;
@property (readonly, nonatomic) id toValue; // @synthesize toValue=_toValue;

- (id)initWithAnimation:(id)arg1;
- (double)percentAtTime:(double)arg1;
- (id)valueAtTime:(double)arg1 initialValue:(id)arg2 groupTimingFactor:(double)arg3;

@end
