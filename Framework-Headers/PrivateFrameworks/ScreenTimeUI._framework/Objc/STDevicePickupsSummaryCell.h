//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STTableCell.h>

@class STUsageGraphView, UILabel;

@interface STDevicePickupsSummaryCell : STTableCell
{
    UILabel *_averagePickupsLabel;
    UILabel *_averagePickupsTextLabel;
    STUsageGraphView *_graphView;
}

@property (strong, nonatomic) UILabel *averagePickupsLabel; // @synthesize averagePickupsLabel=_averagePickupsLabel;
@property (strong, nonatomic) UILabel *averagePickupsTextLabel; // @synthesize averagePickupsTextLabel=_averagePickupsTextLabel;
@property (strong, nonatomic) STUsageGraphView *graphView; // @synthesize graphView=_graphView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)setValue:(id)arg1;

@end

