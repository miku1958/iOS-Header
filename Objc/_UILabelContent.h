//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UILabelContent : NSObject <NSCopying>
{
    NSDictionary *_defaultAttributes;
}

- (void).cxx_destruct;
- (BOOL)_isContentEqualToContent:(id)arg1;
- (id)attributedString;
- (id)attributedStringContent;
- (id)backgroundColor;
- (id)contentByAddingAttribute:(id)arg1 toDefaultAttributesWithValue:(id)arg2;
- (id)contentByAddingAttributesToDefaultAttributes:(id)arg1;
- (id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(struct _NSRange)arg3;
- (id)contentByApplyingAttributeToEntireRange:(id)arg1 value:(id)arg2;
- (id)contentByCompletingDefaultAttributesWithAttributes:(id)arg1;
- (id)contentWithAttributedString:(id)arg1;
- (id)contentWithDefaultAttributes:(id)arg1;
- (id)contentWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)defaultAttributes;
- (id)defaultValueForAttribute:(id)arg1;
- (id)description;
- (long long)differenceVersusContent:(id)arg1;
- (id)font;
- (unsigned long long)hash;
- (id)initWithDefaultAttributes:(id)arg1;
- (BOOL)isAttribute:(id)arg1 uniformlyEqualToValue:(id)arg2;
- (BOOL)isAttributed;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAttributedString:(id)arg1;
- (BOOL)isEqualToContent:(id)arg1 byAttribute:(id)arg2;
- (BOOL)isEqualToString:(id)arg1;
- (BOOL)isNil;
- (BOOL)isWidthVariant;
- (long long)length;
- (id)paragraphStyle;
- (id)shadow;
- (id)string;
- (id)textColor;
- (id)widthVariantContentForView:(id)arg1;

@end

