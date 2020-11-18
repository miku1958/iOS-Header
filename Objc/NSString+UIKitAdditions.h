//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <UIKitCore/UIItemProviderReading-Protocol.h>
#import <UIKitCore/UIItemProviderWriting-Protocol.h>

@class NSArray;

@interface NSString (UIKitAdditions) <UIItemProviderReading, UIItemProviderWriting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

- (id)_adjustedFontFromFont:(id)arg1 withinFrame:(struct CGRect)arg2 minimumSize:(double)arg3 textSize:(struct CGSize *)arg4;
- (struct CGSize)_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6 truncationRect:(struct CGRect *)arg7;
- (id)_initWithUTF8String:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(BOOL)arg7;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(BOOL)arg6;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(BOOL)arg8;
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 withFont:(id)arg2;
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2;
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5;
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6;
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6 truncationRect:(struct CGRect *)arg7;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4;
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double *)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5;
- (struct CGSize)_optimizedSizeWithFont:(id)arg1;
- (id)_ui_secureString;
- (id)_uikit_stringByTrimmingWhitespaceAndNewlines;
- (id)_uikit_stringWithWritingDirection:(long long)arg1 asOverride:(BOOL)arg2;
- (id)_uikit_unescapedQueryValue;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(BOOL)arg7;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(BOOL)arg6;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(BOOL)arg8;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 withFont:(id)arg2;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6;
- (id)queryKeysAndValues;
- (struct CGSize)sizeWithFont:(id)arg1;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4;
- (struct CGSize)sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4;
- (struct CGSize)sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double *)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5;
@end

