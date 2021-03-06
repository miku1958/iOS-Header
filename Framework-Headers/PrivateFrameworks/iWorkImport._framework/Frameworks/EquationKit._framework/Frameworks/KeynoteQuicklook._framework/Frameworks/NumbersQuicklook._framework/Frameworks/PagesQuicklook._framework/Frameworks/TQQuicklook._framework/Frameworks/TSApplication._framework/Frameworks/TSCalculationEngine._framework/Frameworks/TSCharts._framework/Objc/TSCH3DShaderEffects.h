//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface TSCH3DShaderEffects : NSObject <NSCopying>
{
    NSMutableDictionary *mSections;
    NSArray *mCacheList;
}

@property (readonly, nonatomic) NSSet *identifier;

- (void)addEffect:(id)arg1;
- (void)addEffect:(id)arg1 toSection:(int)arg2;
- (void)addEffectOnce:(id)arg1 toSection:(int)arg2;
- (void)addEffectsFromArray:(id)arg1;
- (void)addEffectsFromArray:(id)arg1 toSection:(int)arg2;
- (void)addVariables:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)effects;
- (void)enumerateEffectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)injectGLSLInto:(id)arg1 context:(id)arg2;
- (void)injectMetalShaderInto:(id)arg1 context:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSectionEnabled:(int)arg1;
- (void)prependEffect:(id)arg1;
- (void)prependEffect:(id)arg1 toSection:(int)arg2;
- (void)removeEffect:(id)arg1 fromSection:(int)arg2;
- (BOOL)removeEffectOfClass:(Class)arg1 fromSection:(int)arg2;
- (void)reset;
- (void)resetCacheList;
- (void)resetSection:(int)arg1;
- (void)resetSection:(int)arg1 toArray:(id)arg2;
- (void)resetToArray:(id)arg1;
- (void)setEnable:(BOOL)arg1 forSection:(int)arg2;

@end

