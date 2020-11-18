//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXRuntime/NSObject-Protocol.h>

@class NSArray, NSNumber, NSObject, NSString;
@protocol UIElementProtocol;

@protocol UIElementProtocol <NSObject>
+ (void)applyElementAttributeCacheScheme:(int)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 forApplication:(struct __AXUIElement *)arg2 contextId:(unsigned int)arg3;
- (NSArray *)arrayWithAXAttribute:(long long)arg1;
- (BOOL)boolWithAXAttribute:(long long)arg1;
- (BOOL)canPerformAXAction:(int)arg1;
- (struct CGColor *)colorWithAXAttribute:(long long)arg1;
- (void)disableCache;
- (void)enableCache:(BOOL)arg1;
- (BOOL)isMockElement;
- (BOOL)isValid;
- (BOOL)isValidForApplication:(NSObject<UIElementProtocol> *)arg1;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3 currentCursorRange:(struct _NSRange)arg4;
- (NSArray *)nextElementsWithCount:(unsigned long long)arg1;
- (NSNumber *)numberWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void *)arg2;
- (struct CGPath *)pathWithAXAttribute:(long long)arg1;
- (BOOL)performAXAction:(int)arg1;
- (BOOL)performAXAction:(int)arg1 withValue:(id)arg2;
- (BOOL)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (int)pid;
- (struct CGPoint)pointWithAXAttribute:(long long)arg1;
- (NSArray *)previousElementsWithCount:(unsigned long long)arg1;
- (struct _NSRange)rangeWithAXAttribute:(long long)arg1;
- (struct CGRect)rectWithAXAttribute:(long long)arg1;
- (void)setAXAttribute:(long long)arg1 withArray:(NSArray *)arg2;
- (void)setAXAttribute:(long long)arg1 withBOOL:(BOOL)arg2;
- (void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(long long)arg1 withNumber:(NSNumber *)arg2;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(BOOL)arg3;
- (void)setAXAttribute:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)setAXAttribute:(long long)arg1 withRange:(struct _NSRange)arg2;
- (void)setAXAttribute:(long long)arg1 withSize:(struct CGSize)arg2;
- (void)setAXAttribute:(long long)arg1 withString:(NSString *)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElementArray:(NSArray *)arg2;
- (NSString *)stringWithAXAttribute:(long long)arg1;
- (NSArray *)uiElementsWithAttribute:(long long)arg1;
- (NSArray *)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2;
- (NSArray *)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2 fetchAttributes:(BOOL)arg3;
- (void)updateCache:(long long)arg1;
- (void)updateCacheWithAttributes:(NSArray *)arg1;
@end

