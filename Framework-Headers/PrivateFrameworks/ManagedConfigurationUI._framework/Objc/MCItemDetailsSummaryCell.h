//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray;

@interface MCItemDetailsSummaryCell : UITableViewCell
{
    NSArray *_detailViews;
    double _detailLabelOriginX;
}

@property (nonatomic) double detailLabelOriginX; // @synthesize detailLabelOriginX=_detailLabelOriginX;
@property (strong, nonatomic) NSArray *detailViews; // @synthesize detailViews=_detailViews;

- (void).cxx_destruct;
- (void)createViewWithDescriptors:(id)arg1;
- (void)createViewWithItemDetailArray:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

