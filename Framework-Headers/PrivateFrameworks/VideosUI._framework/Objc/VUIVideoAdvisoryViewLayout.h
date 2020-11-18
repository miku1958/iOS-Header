//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class UIColor, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryViewLayout : TVViewLayout
{
    double _legendMaxWidth;
    UIColor *_legendBackgroundColor;
    double _legendCornerRadius;
    UIColor *_dividerColor;
    VUITextLayout *_legendLayout;
    VUITextLayout *_legendDescriptionLayout;
    VUITextLayout *_portraitLegendLayout;
    VUITextLayout *_portraitLegendDescriptionLayout;
    struct CGSize _logoSize;
    struct CGSize _legendSize;
    struct CGSize _dividerSize;
    struct CGSize _portraitLogoSize;
    struct CGSize _portraitLegendSize;
    struct CGSize _portraitDividerSize;
    struct UIEdgeInsets _logoMargin;
    struct UIEdgeInsets _legendsMargin;
    struct UIEdgeInsets _dividerMargin;
    struct UIEdgeInsets _portraitMargin;
    struct UIEdgeInsets _portraitLogoMargin;
    struct UIEdgeInsets _portraitLegendsMargin;
    struct UIEdgeInsets _portraitDividerMargin;
}

@property (readonly, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property (nonatomic) struct UIEdgeInsets dividerMargin; // @synthesize dividerMargin=_dividerMargin;
@property (nonatomic) struct CGSize dividerSize; // @synthesize dividerSize=_dividerSize;
@property (readonly, nonatomic) UIColor *legendBackgroundColor; // @synthesize legendBackgroundColor=_legendBackgroundColor;
@property (nonatomic) double legendCornerRadius; // @synthesize legendCornerRadius=_legendCornerRadius;
@property (readonly, nonatomic) VUITextLayout *legendDescriptionLayout; // @synthesize legendDescriptionLayout=_legendDescriptionLayout;
@property (readonly, nonatomic) VUITextLayout *legendLayout; // @synthesize legendLayout=_legendLayout;
@property (nonatomic) double legendMaxWidth; // @synthesize legendMaxWidth=_legendMaxWidth;
@property (nonatomic) struct CGSize legendSize; // @synthesize legendSize=_legendSize;
@property (nonatomic) struct UIEdgeInsets legendsMargin; // @synthesize legendsMargin=_legendsMargin;
@property (nonatomic) struct UIEdgeInsets logoMargin; // @synthesize logoMargin=_logoMargin;
@property (nonatomic) struct CGSize logoSize; // @synthesize logoSize=_logoSize;
@property (nonatomic) struct UIEdgeInsets portraitDividerMargin; // @synthesize portraitDividerMargin=_portraitDividerMargin;
@property (nonatomic) struct CGSize portraitDividerSize; // @synthesize portraitDividerSize=_portraitDividerSize;
@property (readonly, nonatomic) VUITextLayout *portraitLegendDescriptionLayout; // @synthesize portraitLegendDescriptionLayout=_portraitLegendDescriptionLayout;
@property (readonly, nonatomic) VUITextLayout *portraitLegendLayout; // @synthesize portraitLegendLayout=_portraitLegendLayout;
@property (nonatomic) struct CGSize portraitLegendSize; // @synthesize portraitLegendSize=_portraitLegendSize;
@property (nonatomic) struct UIEdgeInsets portraitLegendsMargin; // @synthesize portraitLegendsMargin=_portraitLegendsMargin;
@property (nonatomic) struct UIEdgeInsets portraitLogoMargin; // @synthesize portraitLogoMargin=_portraitLogoMargin;
@property (nonatomic) struct CGSize portraitLogoSize; // @synthesize portraitLogoSize=_portraitLogoSize;
@property (nonatomic) struct UIEdgeInsets portraitMargin; // @synthesize portraitMargin=_portraitMargin;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
- (void).cxx_destruct;
- (id)init;

@end

