//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NUIContainerGridView;
@protocol NUIWidgetGridViewDataSource, NUIWidgetGridViewDelegate;

@interface NUIWidgetGridView : UIView
{
    NUIContainerGridView *_gridView;
    NSArray *_itemViews;
    struct CGSize _labelSizes[8];
    unsigned long long _currentLayout;
    id<NUIWidgetGridViewDataSource> _dataSource;
    id<NUIWidgetGridViewDelegate> _delegate;
    long long _imageStyle;
    long long _titleStyle;
    long long _subtitleStyle;
    double _centerAdjustmentAllowed;
    double _currentLabelOutset;
}

@property (nonatomic) double centerAdjustmentAllowed; // @synthesize centerAdjustmentAllowed=_centerAdjustmentAllowed;
@property (readonly, nonatomic) double currentLabelOutset; // @synthesize currentLabelOutset=_currentLabelOutset;
@property (weak, nonatomic) id<NUIWidgetGridViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (weak, nonatomic) id<NUIWidgetGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property (nonatomic) long long subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property (nonatomic) long long titleStyle; // @synthesize titleStyle=_titleStyle;

+ (double)itemWidth;
+ (unsigned long long)maxNumberOfItems;
- (void).cxx_destruct;
- (CDStruct_c3b9c2ee)borrowableSpaceForCellAtIndex:(unsigned long long)arg1;
- (id)cellForGridViewItemAtIndex:(long long)arg1;
- (void)contentSizeDidChange;
- (CDStruct_c3b9c2ee)entitledExtraSpaceForCellAtIndex:(unsigned long long)arg1;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (void)reloadData;

@end

