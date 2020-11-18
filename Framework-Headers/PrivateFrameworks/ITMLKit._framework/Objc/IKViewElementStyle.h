//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKCSSRule, IKColor, IKFourTuple, NSArray, NSMutableDictionary, NSNumber, NSShadow, NSString, NSURL, UIColor;

@interface IKViewElementStyle : NSObject
{
    BOOL _filterBlockedStyles;
    NSString *_classDescriptorString;
    IKCSSRule *_cssRule;
    NSArray *_mediaQueryList;
    NSMutableDictionary *_styleDict;
}

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSString *badgeTreatment;
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) struct UIEdgeInsets borderMargins;
@property (readonly, nonatomic) IKFourTuple *borderRadius;
@property (readonly, nonatomic) struct UIEdgeInsets borderWidths;
@property (readonly, nonatomic) NSString *cardType;
@property (readonly, nonatomic) NSString *classDescriptorString;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) long long columnCount;
@property (readonly, nonatomic) NSString *columnItemType;
@property (readonly, nonatomic) NSString *columnType;
@property (strong, nonatomic) IKCSSRule *cssRule; // @synthesize cssRule=_cssRule;
@property (readonly, nonatomic) NSString *dividerType;
@property (readonly, nonatomic) unsigned long long elementAlignment;
@property (readonly, nonatomic) struct UIEdgeInsets elementMargin;
@property (readonly, nonatomic) struct UIEdgeInsets elementPadding;
@property (readonly, nonatomic) unsigned long long elementPosition;
@property (readonly, nonatomic) long long fillImage;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) NSString *fontWeight;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) IKColor *ikBackgroundColor;
@property (readonly, nonatomic) IKColor *ikBorderColor;
@property (readonly, nonatomic) IKColor *ikColor;
@property (readonly, nonatomic) IKColor *ikHighlightColor;
@property (readonly, nonatomic) IKColor *imageMaskColor;
@property (readonly, nonatomic) IKColor *imagePlaceholderBackgroundColor;
@property (readonly, nonatomic) NSURL *imagePlaceholderURL;
@property (readonly, nonatomic) unsigned long long imagePosition;
@property (readonly, nonatomic) NSString *imageTreatment;
@property (readonly, nonatomic) NSString *itemHeight;
@property (readonly, nonatomic) NSString *itemWidth;
@property (readonly, nonatomic) NSString *labelsState;
@property (readonly, nonatomic) NSNumber *letterSpacing;
@property (readonly, nonatomic) NSString *lockupType;
@property (readonly, nonatomic) NSString *maxHeight;
@property (readonly, nonatomic) long long maxTextLines;
@property (readonly, nonatomic) NSString *maxWidth;
@property (strong, nonatomic) NSArray *mediaQueryList; // @synthesize mediaQueryList=_mediaQueryList;
@property (readonly, nonatomic) unsigned long long ordinalMaxLength;
@property (readonly, nonatomic) long long reflectImage;
@property (readonly, nonatomic) NSString *rowHeight;
@property (strong, nonatomic) NSMutableDictionary *styleDict; // @synthesize styleDict=_styleDict;
@property (readonly, nonatomic) unsigned long long textAlignment;
@property (readonly, nonatomic) NSString *textScale;
@property (readonly, nonatomic) NSShadow *textShadow;
@property (readonly, nonatomic) NSString *textStyle;
@property (readonly, nonatomic) struct CGAffineTransform transform;
@property (readonly, nonatomic) NSString *transition;
@property (readonly, nonatomic) NSNumber *transitionInterval;
@property (readonly, nonatomic) NSString *visibility;

+ (void)addBlockedStyle:(id)arg1;
+ (unsigned long long)alignmentFromString:(id)arg1;
+ (void)clearBlockedStyles;
+ (id)elementStyleWithParentStyle:(id)arg1 elementStyle:(id)arg2 elementStyleOverrides:(id)arg3;
+ (id)elementStyleWithSelector:(id)arg1 aggregatingStyles:(id)arg2;
+ (id)elementStyleWithSelector:(id)arg1 cssRule:(id)arg2 filterBlockedStyles:(BOOL)arg3;
+ (id)elementStyleWithSelector:(id)arg1 inlineStyleString:(id)arg2 filterBlockedStyles:(BOOL)arg3;
+ (unsigned long long)imageTreatmentFromString:(id)arg1;
+ (void)initialize;
+ (BOOL)isHiddenStyleRegistered;
+ (id)normalizeClassSelectorString:(id)arg1;
+ (unsigned long long)positionFromString:(id)arg1;
+ (void)registerHiddenStyle:(id)arg1;
+ (void)registerStyle:(id)arg1 aliasName:(id)arg2 withType:(unsigned long long)arg3 inherited:(BOOL)arg4;
+ (void)registerStyle:(id)arg1 withType:(unsigned long long)arg2 inherited:(BOOL)arg3;
+ (id)registeredAliases;
+ (id)registeredStyles;
+ (unsigned long long)transitionFromString:(id)arg1;
+ (void)unregisterStyles;
- (void).cxx_destruct;
- (void)_addElementStyle:(id)arg1;
- (void)_addParentStyle:(id)arg1;
- (struct UIEdgeInsets)_edgeInsetsForStyleKey:(id)arg1;
- (id)_gradientFromString:(id)arg1;
- (id)_newColorFromString:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithCSSRule:(id)arg1 filterBlockedStyles:(BOOL)arg2 selStr:(id)arg3;
- (id)initWithClassSelector:(id)arg1;
- (id)initWithStyle:(id)arg1 classSelector:(id)arg2;
- (unsigned long long)typeForStyle:(id)arg1;
- (id)valueForStyle:(id)arg1;

@end

