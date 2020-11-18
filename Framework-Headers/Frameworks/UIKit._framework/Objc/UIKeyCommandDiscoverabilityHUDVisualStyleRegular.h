//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyCommandDiscoverabilityHUDVisualStyle.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDVisualStyleRegular : UIKeyCommandDiscoverabilityHUDVisualStyle
{
    UIColor *_titleColor;
    UIColor *_inputColor;
    UIColor *_dividerColor;
}

@property (strong, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property (strong, nonatomic) UIColor *inputColor; // @synthesize inputColor=_inputColor;
@property (strong, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;

- (void).cxx_destruct;
- (double)HUDPageControlBottomMargin;
- (struct UIEdgeInsets)HUDViewInsets;
- (double)columnDividerHeightForHUDHeight:(double)arg1;
- (double)columnDividerWidth;
- (id)init;
- (double)maxHUDHeightForHeight:(double)arg1;
- (double)maxHUDWidthForWidth:(double)arg1;
- (double)minimumFontScaleBeforeTruncation;
- (double)summaryDescriptionToModifiersSpacing;
- (id)summaryFont;
- (double)summaryLineHeight;
- (double)summaryLineSpacing;
- (double)summaryModifiersSpacing;
- (double)summaryXPadding;
- (double)summaryYPadding;

@end

