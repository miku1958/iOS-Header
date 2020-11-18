//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInterfaceActionVisualStyle.h>

@class UIInterfaceActionSeparatorAttributes;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionOverrideVisualStyle : UIInterfaceActionVisualStyle
{
    double _customSelectionHighlightContinuousCornerRadius;
    UIInterfaceActionSeparatorAttributes *_customSeparatorAttributes;
    CDUnknownBlockType _customTitleLabelFontProviderForViewState;
}

@property double customSelectionHighlightContinuousCornerRadius; // @synthesize customSelectionHighlightContinuousCornerRadius=_customSelectionHighlightContinuousCornerRadius;
@property (strong, nonatomic) UIInterfaceActionSeparatorAttributes *customSeparatorAttributes; // @synthesize customSeparatorAttributes=_customSeparatorAttributes;
@property (copy, nonatomic) CDUnknownBlockType customTitleLabelFontProviderForViewState; // @synthesize customTitleLabelFontProviderForViewState=_customTitleLabelFontProviderForViewState;

+ (id)styleOverride;
- (void).cxx_destruct;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;

@end
