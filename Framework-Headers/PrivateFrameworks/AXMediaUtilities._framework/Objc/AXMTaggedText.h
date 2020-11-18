//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@class NSLocale, NSMutableDictionary, NSString;

@interface AXMTaggedText : NSMutableAttributedString
{
    NSMutableAttributedString *_attrString;
    NSMutableDictionary *_globalAttributes;
    CDUnknownBlockType _evaluationBlock;
}

@property (readonly, nonatomic) NSLocale *locale;
@property (nonatomic, getter=isSpeakable) BOOL speakable;
@property (readonly, nonatomic) NSString *speakableText;

+ (id)textWithString:(id)arg1 locale:(id)arg2 evaluationBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_evaluateIfNeeded;
- (id)_initWithAttributedString:(id)arg1;
- (BOOL)_isEvaluated;
- (void)_setNeedEvaluation;
- (struct _NSRange)_stringRange;
- (id)_substringWithRange:(struct _NSRange)arg1;
- (void)addGlobalTag:(id)arg1;
- (void)addTag:(id)arg1 withToken:(id)arg2 range:(struct _NSRange)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)debugDescription;
- (BOOL)hasGlobalTag:(id)arg1;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (BOOL)isRangeSpeakable:(struct _NSRange)arg1;
- (id)mutableString;
- (void)removeGlobalTag:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (id)string;

@end

