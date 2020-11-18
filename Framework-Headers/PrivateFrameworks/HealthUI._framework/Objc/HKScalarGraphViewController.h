//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphViewController.h>

@interface HKScalarGraphViewController : HKGraphViewController
{
    double _minimumHeight;
}

@property (readonly, nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;

- (id)_buildGraphViewWithLabelDimension:(id)arg1;
- (void)_pinView:(id)arg1 toParentView:(id)arg2;
- (void)_setupGraphViewSelectionStyle;
- (id)initWithMinimumHeight:(double)arg1;
- (id)initWithMinimumHeight:(double)arg1 labelDimension:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;

@end
