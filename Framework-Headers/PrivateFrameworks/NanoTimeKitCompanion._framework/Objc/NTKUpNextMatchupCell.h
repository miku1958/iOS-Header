//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@class NTKUpNextMatchupScoreView, NTKUpNextMatchupUpcomingView, UILayoutGuide;

@interface NTKUpNextMatchupCell : NTKUpNextBaseCell
{
    NTKUpNextMatchupScoreView *_scoreView;
    NTKUpNextMatchupUpcomingView *_upcomingView;
    UILayoutGuide *_scoreLayoutGuide;
    UILayoutGuide *_upcomingLayoutGuide;
}

- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)updateTimeLabel;

@end

