//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UILabelContent.h>

@class NSMutableAttributedString;

__attribute__((visibility("hidden")))
@interface _UILabelAttributedStringContent : _UILabelContent
{
    NSMutableAttributedString *_attributedString;
}

- (void).cxx_destruct;
- (void)applyToEntireRangeAttribute:(id)arg1 withValue:(id)arg2;
- (void)applyToRange:(struct _NSRange)arg1 attribute:(id)arg2 withValue:(id)arg3;
- (id)attributedString;
- (id)attributedStringContent;
- (id)defaultValueForAttribute:(id)arg1;
- (id)initWithAttributedString:(id)arg1 defaultAttributesProvider:(CDUnknownBlockType)arg2;
- (BOOL)isAttributed;
- (BOOL)isEqualToAttributedString:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (BOOL)isNil;
- (long long)length;
- (id)string;
- (id)valueForAttribute:(id)arg1 isUniform:(BOOL *)arg2;

@end

