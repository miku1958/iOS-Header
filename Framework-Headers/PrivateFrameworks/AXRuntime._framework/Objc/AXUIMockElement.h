//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXRuntime/AXUIElement.h>

@class NSMutableDictionary;

@interface AXUIMockElement : AXUIElement
{
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_writableAttributes;
    NSMutableDictionary *_performActionLog;
    BOOL _usesCarriageReturnAsLinesSeparator;
}

@property (nonatomic) BOOL usesCarriageReturnAsLinesSeparator; // @synthesize usesCarriageReturnAsLinesSeparator=_usesCarriageReturnAsLinesSeparator;

+ (void)applyElementAttributeCacheScheme:(int)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 hitTestOrientation:(int)arg2;
- (unsigned long long)_lineNumberForPoint:(struct CGPoint)arg1;
- (id)_valueForAttribute:(int)arg1;
- (unsigned long long)arrayCountWithAXAttribute:(int)arg1;
- (id)arrayWithAXAttribute:(int)arg1;
- (struct __AXUIElement *)axElement;
- (BOOL)boolWithAXAttribute:(int)arg1;
- (BOOL)canPerformAXAction:(int)arg1;
- (BOOL)canSetAXAttribute:(int)arg1;
- (void)dealloc;
- (id)description;
- (void)disableCache;
- (void)enableCache:(BOOL)arg1;
- (void)fillStaticCache;
- (float)floatWithAXAttribute:(int)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMockElement;
- (BOOL)isValid;
- (BOOL)isValidForApplication:(id)arg1;
- (long long)longWithAXAttribute:(int)arg1;
- (id)nextElementsWithCount:(unsigned long long)arg1;
- (id)numberWithAXAttribute:(int)arg1;
- (id)objectWithAXAttribute:(int)arg1;
- (id)objectWithAXAttribute:(int)arg1 parameter:(void *)arg2;
- (struct CGPath *)pathWithAXAttribute:(int)arg1;
- (BOOL)performAXAction:(int)arg1;
- (BOOL)performAXAction:(int)arg1 withValue:(id)arg2;
- (id)performBlockWhileLoggingPerformedActions:(CDUnknownBlockType)arg1;
- (int)pid;
- (struct CGPoint)pointForLineNumber:(unsigned long long)arg1;
- (struct CGPoint)pointWithAXAttribute:(int)arg1;
- (id)previousElementsWithCount:(unsigned long long)arg1;
- (struct _NSRange)rangeWithAXAttribute:(int)arg1;
- (struct CGRect)rectWithAXAttribute:(int)arg1;
- (void)setAXAttribute:(int)arg1 withArray:(id)arg2;
- (void)setAXAttribute:(int)arg1 withBOOL:(BOOL)arg2;
- (void)setAXAttribute:(int)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(int)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(int)arg1 withNumber:(id)arg2;
- (void)setAXAttribute:(int)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(int)arg1 withObject:(id)arg2 synchronous:(BOOL)arg3;
- (void)setAXAttribute:(int)arg1 withPoint:(struct CGPoint)arg2;
- (void)setAXAttribute:(int)arg1 withRange:(struct _NSRange)arg2;
- (void)setAXAttribute:(int)arg1 withSize:(struct CGSize)arg2;
- (void)setAXAttribute:(int)arg1 withString:(id)arg2;
- (void)setAXAttribute:(int)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(int)arg1 withUIElementArray:(id)arg2;
- (void)setValue:(id)arg1 forAXAttribute:(int)arg2;
- (void)setWritable:(BOOL)arg1 forAXAttribute:(int)arg2;
- (struct CGSize)sizeWithAXAttribute:(int)arg1;
- (id)stringWithAXAttribute:(int)arg1;
- (id)uiElementArrayForAXAttribute:(int)arg1;
- (id)uiElementWithAXAttribute:(int)arg1;
- (id)uiElementsWithAttribute:(int)arg1;
- (id)uiElementsWithAttribute:(int)arg1 parameter:(void *)arg2;
- (id)uiElementsWithAttribute:(int)arg1 parameter:(void *)arg2 fetchAttributes:(BOOL)arg3;
- (void)updateCache:(int)arg1;
- (void)updateCacheWithAttributes:(id)arg1;
- (id)urlWithAXAttribute:(int)arg1;
- (id)visibleElements;

@end
