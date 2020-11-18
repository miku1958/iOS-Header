//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoardUI/BSUIAnimationFactory.h>

@class _UIViewAnimationAttributes;

@interface _BSUIAnimationAttributesFactory : BSUIAnimationFactory
{
    _UIViewAnimationAttributes *_attributes;
}

- (void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned long long)arg2 actions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_initWithAttributes:(id)arg1;
- (id)_initWithSettings:(id)arg1;
- (void)dealloc;
- (double)delay;
- (id)description;
- (double)duration;
- (id)factoryWithTimingFunction:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

