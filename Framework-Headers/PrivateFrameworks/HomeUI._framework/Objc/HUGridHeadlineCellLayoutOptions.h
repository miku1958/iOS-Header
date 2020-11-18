//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridHeadlineCellLayoutOptions : HUGridCellLayoutOptions
{
    BOOL _editing;
    double _topOfScreenToHeadlineBaselinePercentage;
    double _minimumFontSize;
    double _editingBackgroundHeight;
    long long _viewSizeSubclass;
    double _containerLeadingMargin;
    double _containerTrailingMargin;
    struct CGSize _viewSize;
}

@property (readonly, nonatomic) double containerLeadingMargin; // @synthesize containerLeadingMargin=_containerLeadingMargin;
@property (readonly, nonatomic) double containerTrailingMargin; // @synthesize containerTrailingMargin=_containerTrailingMargin;
@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property (nonatomic) double editingBackgroundHeight; // @synthesize editingBackgroundHeight=_editingBackgroundHeight;
@property (readonly, nonatomic) double editingBackgroundMinimumWidth;
@property (nonatomic) double minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
@property (readonly, nonatomic) double topOfScreenToHeadlineBaselineDistance;
@property (nonatomic) double topOfScreenToHeadlineBaselinePercentage; // @synthesize topOfScreenToHeadlineBaselinePercentage=_topOfScreenToHeadlineBaselinePercentage;
@property (readonly, nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property (readonly, nonatomic) long long viewSizeSubclass; // @synthesize viewSizeSubclass=_viewSizeSubclass;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;
+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1 viewSizeSubclass:(long long)arg2 viewSize:(struct CGSize)arg3 containerLeadingMargin:(double)arg4 containerTrailingMargin:(double)arg5;
- (double)cellInnerMargin;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
