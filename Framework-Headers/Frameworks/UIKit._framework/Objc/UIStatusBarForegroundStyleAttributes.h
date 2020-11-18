//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundStyleAttributes : NSObject <NSCopying>
{
    double _height;
    long long _legibilityStyle;
    long long _idiom;
    NSMutableDictionary *_cachedFonts;
    BOOL _isTintColorBlack;
    BOOL _hasBusyBackground;
    NSString *_cachedUniqueIdentifier;
    BOOL _canShowBreadcrumbs;
    UIColor *_tintColor;
}

@property (nonatomic) BOOL canShowBreadcrumbs; // @synthesize canShowBreadcrumbs=_canShowBreadcrumbs;
@property (readonly, strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

- (void).cxx_destruct;
- (id)_batteryColorForCapacity:(int)arg1 lowCapacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(BOOL)arg4;
- (void)_cacheImage:(id)arg1 named:(id)arg2;
- (void)_cacheQueue_cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3 groupFullName:(id)arg4 tintColor:(id)arg5;
- (id)_cacheQueue_cachedImageNamed:(id)arg1 inTempGroup:(id)arg2 groupFullName:(id)arg3;
- (id)_cachedImageNamed:(id)arg1;
- (void)_drawText:(id)arg1 inRect:(struct CGRect)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6;
- (double)_roundDimension:(double)arg1;
- (BOOL)_shouldUseBoldFontForStyle:(long long)arg1;
- (id)accessibilityHUDImageNamed:(id)arg1;
- (long long)activityIndicatorStyleWithSyncActivity:(BOOL)arg1;
- (double)baselineOffsetForStyle:(long long)arg1;
- (double)batteryAccessoryMargin;
- (id)batteryColorForCapacity:(int)arg1 style:(unsigned long long)arg2 usingTintColor:(BOOL)arg3;
- (id)bluetoothBatteryColorForCapacity:(double)arg1 usingTintColor:(BOOL)arg2;
- (double)bluetoothBatteryExtraPadding;
- (id)bluetoothBatteryImageNameWithCapacity:(double)arg1;
- (void)cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3;
- (id)cachedImageNamed:(id)arg1 inTempGroup:(id)arg2;
- (id)cachedImageWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 itemType:(int)arg7;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(int)arg2 style:(unsigned long long)arg3;
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(BOOL)arg4;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(double)arg2;
- (void)drawText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 textSize:(struct CGSize)arg7 textHeight:(double)arg8;
- (void)drawTextInRect:(struct CGRect)arg1 withColor:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (struct UIEdgeInsets)edgeInsetsForBatteryInsides;
- (struct UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;
- (double)edgePadding;
- (id)expandedNameForImageName:(id)arg1;
- (id)generateUniqueIdentifier;
- (double)height;
- (long long)idiom;
- (id)imageIdWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 style:(long long)arg5;
- (id)imageNamed:(id)arg1;
- (id)imageNamed:(id)arg1 withLegibilityStyle:(long long)arg2 legibilityStrength:(double)arg3;
- (id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9;
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(BOOL)arg4;
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(BOOL)arg4 idiom:(long long)arg5;
- (long long)legibilityStyle;
- (id)makeTextFontForStyle:(long long)arg1;
- (double)middlePadding;
- (struct CGPoint)positionForMoonMaskInBounds:(struct CGRect)arg1;
- (id)proportionalFontForFont:(id)arg1;
- (double)scale;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5;
- (double)shadowPadding;
- (double)sizeForMoonMaskVisible:(BOOL)arg1;
- (double)standardPadding;
- (BOOL)supportsShowingBuildVersion;
- (id)textColorForStyle:(long long)arg1;
- (id)textFontForStyle:(long long)arg1;
- (id)textForNetworkType:(int)arg1;
- (double)textOffsetForStyle:(long long)arg1;
- (id)uncachedImageNamed:(id)arg1;
- (id)uniqueIdentifier;
- (id)untintedImageNamed:(id)arg1;
- (BOOL)usesVerticalLayout;

@end

