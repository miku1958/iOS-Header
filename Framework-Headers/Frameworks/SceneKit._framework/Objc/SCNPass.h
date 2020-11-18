//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNTechnique;

@interface SCNPass : NSObject
{
    struct __C3DFXPass *_fxPass;
    SCNTechnique *_technique;
}

@property (copy, nonatomic) CDUnknownBlockType executionHandler;
@property (copy, nonatomic) CDUnknownBlockType initializationHandler;

- (void)dealloc;
- (id)initWithFXPass:(struct __C3DFXPass *)arg1 technique:(id)arg2;
- (void)invalidate;
- (void)setValue:(id)arg1 forPassPropertyKey:(long long)arg2;
- (id)valueForPassPropertyKey:(long long)arg1;

@end
