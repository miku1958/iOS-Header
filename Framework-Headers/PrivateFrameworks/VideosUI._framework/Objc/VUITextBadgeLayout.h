//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class NSArray, TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUITextBadgeLayout : TVViewLayout
{
    unsigned long long _badgeKind;
    double _cornerRadius;
    NSArray *_gradientBgColors;
    VUITextLayout *_textLayout;
    TVImageLayout *_imageLayout;
}

@property (nonatomic) unsigned long long badgeKind; // @synthesize badgeKind=_badgeKind;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (strong, nonatomic) NSArray *gradientBgColors; // @synthesize gradientBgColors=_gradientBgColors;
@property (strong, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property (strong, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;

+ (long long)_badgeSizeForElement:(id)arg1;
+ (id)_glyphImageLayoutWithTintColor:(id)arg1 viewElement:(id)arg2;
+ (id)_spotlightBadgeLayoutWithViewElement:(id)arg1;
+ (id)_textBadgeLayoutWithViewElement:(id)arg1 withBadgeType:(unsigned long long)arg2;
+ (id)layoutWithViewElement:(id)arg1;
+ (id)layoutWithViewElement:(id)arg1 withTextBadgeType:(unsigned long long)arg2;
+ (unsigned long long)textBadgeTypeFromString:(id)arg1;
- (void).cxx_destruct;
- (void)_updateBgColorWithViewElement:(id)arg1 defaultColor:(id)arg2;
- (void)_updateTextColorWithViewElement:(id)arg1 defaultColor:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

