//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIBackgroundConfigurationInternal-Protocol.h>

@class NSString, UIColor, UIView, UIVisualEffect;

@interface _UIBackgroundViewConfiguration : NSObject <_UIBackgroundConfigurationInternal, NSCopying, NSSecureCoding>
{
    struct {
        unsigned int hasCustomizedCustomView:1;
        unsigned int hasCustomizedCornerRadius:1;
        unsigned int hasCustomizedBackgroundInsets:1;
        unsigned int hasCustomizedEdgesAddingLayoutMarginsToBackgroundInsets:1;
        unsigned int hasCustomizedBackgroundColorOrMode:1;
        unsigned int hasCustomizedVisualEffect:1;
        unsigned int hasCustomizedStrokeColorOrMode:1;
        unsigned int hasCustomizedStrokeWidth:1;
        unsigned int hasCustomizedStrokeOutset:1;
    } _configurationFlags;
    UIView *_customView;
    double _cornerRadius;
    unsigned long long _edgesAddingLayoutMarginsToBackgroundInsets;
    long long _backgroundColorMode;
    UIColor *_backgroundColor;
    UIVisualEffect *_visualEffect;
    long long _strokeColorMode;
    UIColor *_strokeColor;
    double _strokeWidth;
    double _strokeOutset;
    long long _defaultStyle;
    unsigned long long _maskedCorners;
    long long _shadowType;
    struct NSDirectionalEdgeInsets _backgroundInsets;
}

@property (nonatomic, setter=_setCornerRadius:) double _cornerRadius; // @synthesize _cornerRadius;
@property (nonatomic, setter=_setShadowType:) long long _shadowType; // @synthesize _shadowType;
@property (strong, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long backgroundColorMode;
@property (nonatomic) struct NSDirectionalEdgeInsets backgroundInsets;
@property (nonatomic) double cornerRadius;
@property (strong, nonatomic) UIView *customView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edgesAddingLayoutMarginsToBackgroundInsets;
@property (readonly, nonatomic, getter=_hasBackgroundColor) BOOL hasBackgroundColor;
@property (readonly, nonatomic, getter=_hasBackgroundFill) BOOL hasBackgroundFill;
@property (readonly, nonatomic, getter=_hasStroke) BOOL hasStroke;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_maskedCorners, setter=_setMaskedCorners:) unsigned long long maskedCorners; // @synthesize maskedCorners=_maskedCorners;
@property (strong, nonatomic) UIColor *strokeColor;
@property (nonatomic) long long strokeColorMode;
@property (nonatomic) double strokeOutset;
@property (nonatomic) double strokeWidth;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIVisualEffect *visualEffect;

+ (id)defaultGroupedListCellConfigurationForState:(unsigned long long)arg1;
+ (id)defaultGroupedListHeaderFooterConfigurationForState:(unsigned long long)arg1;
+ (id)defaultOutlineCellConfigurationForState:(unsigned long long)arg1;
+ (id)defaultOutlineParentCellConfigurationForState:(unsigned long long)arg1;
+ (id)defaultPlainListCellConfigurationForState:(unsigned long long)arg1;
+ (id)defaultPlainListHeaderFooterConfigurationForState:(unsigned long long)arg1;
+ (id)groupedListCellConfiguration;
+ (id)groupedListHeaderFooterConfiguration;
+ (id)outlineCellConfiguration;
+ (id)outlineRootParentCellConfiguration;
+ (id)plainListCellConfiguration;
+ (id)plainListHeaderFooterConfiguration;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_backgroundFillIsEqual:(id)arg1 withTintColor:(id)arg2;
- (id)_updatedConfigurationForState:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)resolvedBackgroundColorForTintColor:(id)arg1;
- (id)resolvedStrokeColorForTintColor:(id)arg1;
- (id)updatedConfigurationForState:(unsigned long long)arg1;
- (id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2;

@end

