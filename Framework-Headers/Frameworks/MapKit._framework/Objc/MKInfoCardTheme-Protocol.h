//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class UIColor, UIFont;

@protocol MKInfoCardTheme <NSObject>

@property (readonly, nonatomic) UIFont *attributionFont;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIFont *bodyFont;
@property (readonly, nonatomic) UIFont *boldBodyFont;
@property (readonly, nonatomic) UIFont *brandTitleFont;
@property (readonly, nonatomic) UIColor *disabledActionRowBackgroundColor;
@property (readonly, nonatomic) UIColor *disabledActionRowTextColor;
@property (readonly, nonatomic) UIColor *headerPrimaryButtonHighlightedColor;
@property (readonly, nonatomic) UIColor *headerPrimaryButtonNormalColor;
@property (readonly, nonatomic) UIColor *headerSecondaryButtonHighlightedColor;
@property (readonly, nonatomic) UIColor *headerSecondaryButtonNormalColor;
@property (readonly, nonatomic) UIColor *highlightedActionRowTextColor;
@property (readonly, nonatomic) UIColor *highlightedTintColor;
@property (readonly, nonatomic) BOOL isDarkTheme;
@property (readonly, nonatomic) BOOL isVibrantTheme;
@property (readonly, nonatomic) UIFont *largeTitleFont;
@property (readonly, nonatomic) UIFont *largeTitleFontStatic;
@property (readonly, nonatomic) UIColor *lightTextColor;
@property (readonly, nonatomic) UIFont *mediumBodyFont;
@property (readonly, nonatomic) UIColor *normalActionRowBackgroundColor;
@property (readonly, nonatomic) UIColor *normalActionRowBackgroundPressedColor;
@property (readonly, nonatomic) UIFont *rowButtonFont;
@property (readonly, nonatomic) UIColor *rowColor;
@property (readonly, nonatomic) UIFont *rowGlyphButtonFont;
@property (readonly, nonatomic) UIFont *sectionHeaderButtonFont;
@property (readonly, nonatomic) UIFont *sectionHeaderFont;
@property (readonly, nonatomic) UIColor *selectedRowColor;
@property (readonly, nonatomic) UIColor *separatorLineColor;
@property (readonly, nonatomic) UIFont *smallAttributionFont;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) unsigned long long themeType;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIFont *titleFont;

- (UIFont *)iconFontToMatch:(UIFont *)arg1;
@end

