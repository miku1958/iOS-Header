//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPUFoundation/NSCopying-Protocol.h>
#import <MPUFoundation/NSMutableCopying-Protocol.h>

@class MPULayoutInterpolator, UIFont;

@interface MPUFontDescriptor : NSObject <NSCopying, NSMutableCopying>
{
    long long _leadingAdjustment;
    double _systemFontSize;
    long long _textStyle;
    BOOL _usesItalic;
    BOOL _wantsMonospaceNumbers;
    long long _weight;
    UIFont *_preferredFont;
    CDStruct_1aa0583f _preferredFontMetrics;
    UIFont *_defaultFont;
    CDStruct_1aa0583f _defaultFontMetrics;
    MPULayoutInterpolator *_customFontPointSizeLayoutInterpolator;
}

@property (readonly, nonatomic) UIFont *defaultFont;
@property (readonly, nonatomic) double defaultFontLineHeight;
@property (readonly, nonatomic) long long leadingAdjustment; // @synthesize leadingAdjustment=_leadingAdjustment;
@property (readonly, nonatomic) UIFont *preferredFont;
@property (readonly, nonatomic) double preferredFontAscender;
@property (readonly, nonatomic) double preferredFontBodyLeading;
@property (readonly, nonatomic) double preferredFontCapHeight;
@property (readonly, nonatomic) double preferredFontDescender;
@property (readonly, nonatomic) double preferredFontLineHeight;
@property (readonly, nonatomic) double systemFontSize; // @synthesize systemFontSize=_systemFontSize;
@property (readonly, nonatomic) long long textStyle; // @synthesize textStyle=_textStyle;
@property (readonly, nonatomic) BOOL usesItalic; // @synthesize usesItalic=_usesItalic;
@property (readonly, nonatomic) BOOL wantsMonospaceNumbers; // @synthesize wantsMonospaceNumbers=_wantsMonospaceNumbers;
@property (readonly, nonatomic) long long weight; // @synthesize weight=_weight;

+ (id)_adjustedNativeFontDescriptorWithBaseNativeFontDescriptor:(id)arg1 forCustomTextStyle:(long long)arg2;
+ (id)_baseNativeTextStyleForTextStyle:(long long)arg1;
+ (id)_fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3 systemFontSize:(double)arg4;
+ (id)_fontPointSizeLayoutInterpolatorForTextStyle:(long long)arg1;
+ (void)_getNativeFontDescriptorSymbolicTraits:(unsigned int *)arg1 nativeTextStyleAttribute:(id *)arg2 forWeight:(long long)arg3;
+ (double)_layoutInterpolatorReferenceMetricForContentSizeCategory:(id)arg1;
+ (unsigned int)_nativeFontDescriptorSymbolicTraitsForLeadingAdjustment:(long long)arg1;
+ (unsigned int)_nativeFontDescriptorSymbolicTraitsForUsingItalic:(BOOL)arg1;
+ (id)fontDescriptorWithSystemFontSize:(double)arg1;
+ (id)fontDescriptorWithSystemFontSize:(double)arg1 leadingAdjustment:(long long)arg2;
+ (id)fontDescriptorWithSystemFontSize:(double)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3;
+ (id)fontDescriptorWithSystemFontSize:(double)arg1 weight:(long long)arg2;
+ (id)fontDescriptorWithTextStyle:(long long)arg1;
+ (id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2;
+ (id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3;
+ (id)fontDescriptorWithTextStyle:(long long)arg1 weight:(long long)arg2;
+ (id)invalidationHandler;
- (void).cxx_destruct;
- (id)_defaultFontDescriptorForTextStyle:(long long)arg1;
- (id)_fontPointSizeLayoutInterpolator;
- (id)_fontWithBaseNativeFontDescriptorProvider:(CDUnknownBlockType)arg1;
- (void)_handleFontDescriptorDidInvalidateCachedFontsAndMetricsNotification:(id)arg1;
- (void)_invalidateCachedFontsAndMetrics;
- (id)_preferredFontDescriptorForTextStyle:(long long)arg1;
- (void)_resetToDefaultValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (double)defaultFontAscender;
- (double)defaultFontBodyLeading;
- (double)defaultFontCapHeight;
- (double)defaultFontDescender;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (double)scaledValueForValue:(double)arg1;

@end

