//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STTableCell.h>

@class STUsageSummaryView;

@interface STScreenTimeUsageSummaryCell : STTableCell
{
    STUsageSummaryView *_usageSummaryView;
}

@property (readonly, nonatomic) STUsageSummaryView *usageSummaryView; // @synthesize usageSummaryView=_usageSummaryView;

- (void).cxx_destruct;
- (void)_heightDidChange;
- (void)_layoutDidChangeFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)_numberOfLinesDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setValue:(id)arg1;

@end

