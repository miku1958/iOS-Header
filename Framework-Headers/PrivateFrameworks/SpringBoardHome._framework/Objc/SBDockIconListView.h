//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconListView.h>

@interface SBDockIconListView : SBIconListView
{
    BOOL _vertical;
    long long _layoutStyle;
    double _spacing;
    unsigned long long _minimumNumberOfIconsToDistributeEvenlyToEdges;
    struct UIEdgeInsets _layoutInsets;
}

@property (readonly, nonatomic) double effectiveSpacing;
@property (nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (nonatomic) unsigned long long minimumNumberOfIconsToDistributeEvenlyToEdges; // @synthesize minimumNumberOfIconsToDistributeEvenlyToEdges=_minimumNumberOfIconsToDistributeEvenlyToEdges;
@property (nonatomic) double spacing; // @synthesize spacing=_spacing;
@property (nonatomic, getter=isVertical) BOOL vertical; // @synthesize vertical=_vertical;

+ (struct CGRect)defaultFrameForOrientation:(long long)arg1;
+ (double)defaultHeight;
+ (unsigned long long)defaultIconViewConfigurationOptions;
- (double)_additionalHorizontalInsetToCenterIcons;
- (double)_additionalVerticalInsetToCenterIcons;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (BOOL)adaptsOrientationToTraitCollection;
- (BOOL)allowsAddingIconCount:(unsigned long long)arg1;
- (BOOL)automaticallyAdjustsLayoutMetricsToFit;
- (struct CGRect)boundsForLayout;
- (void)didAddIconView:(id)arg1;
- (double)effectiveSpacingForNumberOfIcons:(unsigned long long)arg1;
- (id)iconAtPoint:(struct CGPoint)arg1 index:(unsigned long long *)arg2 proposedOrder:(long long *)arg3;
- (id)initWithModel:(id)arg1 layoutProvider:(id)arg2 iconLocation:(id)arg3 orientation:(long long)arg4 iconViewProvider:(id)arg5;
- (struct CGSize)intrinsicContentSize;
- (struct CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1 metrics:(const struct SBIconListLayoutMetrics *)arg2;
- (struct CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1 numberOfIcons:(unsigned long long)arg2;
- (struct CGSize)scaledAlignmentIconSize;

@end
