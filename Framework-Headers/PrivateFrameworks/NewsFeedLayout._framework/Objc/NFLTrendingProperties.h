//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLAbstractHeadlineProperties.h>

@class UIColor;

@interface NFLTrendingProperties : NFLAbstractHeadlineProperties
{
    UIColor *_bylineColor;
    double _bylineLineHeight;
}

@property (readonly, nonatomic) UIColor *bylineColor; // @synthesize bylineColor=_bylineColor;
@property (readonly, nonatomic) double bylineLineHeight; // @synthesize bylineLineHeight=_bylineLineHeight;

- (void).cxx_destruct;
- (id)_bylineFontNameWithTemplate:(id)arg1;
- (double)_bylineFontSize;
- (double)_bylineTopOffsetWithTemplate:(id)arg1;
- (double)_titleTopOffsetWithTemplate:(id)arg1;
- (id)accessoryIconColor;
- (id)accessoryTextColor;
- (double)ageLabelToAccessoryLabelSpacingWithTemplate:(id)arg1;
- (id)bylineFontColorWithTemplate:(id)arg1;
- (id)bylineFontWithTemplate:(id)arg1;
- (id)initWithLayout:(id)arg1 columnIrrespectiveProperties:(id)arg2 fontCache:(id)arg3 scaleValue:(double)arg4 lineHeightMultiplier:(double)arg5 headlineScales:(CDStruct_3d2913aa)arg6;
- (id)numberedCircleColor;
- (double)numberedCircleTitleSpacingWithTemplate:(id)arg1;
- (double)numberedCircleTopSpacingAboveLogoWithTemplate:(id)arg1;
- (id)publisherLogoColor;
- (double)publisherLogoToTitleSpacingWithTemplate:(id)arg1;
- (double)spacingAboveArticle;
- (id)titleFontNameWithTemplate:(id)arg1;
- (double)titleFontSizeWithTemplate:(id)arg1;
- (id)titleFontWithTemplate:(id)arg1;
- (double)titleLineHeightWithTemplate:(id)arg1;
- (double)titleToAccessorySpacingWithTemplate:(id)arg1;

@end

