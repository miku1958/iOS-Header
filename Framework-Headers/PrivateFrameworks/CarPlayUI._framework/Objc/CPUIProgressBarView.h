//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CPUIProgressBarView : UIView
{
    UIView *_overallBarView;
    UIView *_progressBarView;
    double _progress;
}

@property (strong, nonatomic) UIView *overallBarView; // @synthesize overallBarView=_overallBarView;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (strong, nonatomic) UIView *progressBarView; // @synthesize progressBarView=_progressBarView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

