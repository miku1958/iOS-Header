//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBlurEffectImpl.h>

__attribute__((visibility("hidden")))
@interface _UIBlurEffectAverageImpl : _UIBlurEffectImpl
{
    double _scale;
}

+ (id)sharedInstance;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithScale:(double)arg1;
- (BOOL)isEqual:(id)arg1;

@end

