//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CarPlaySupport/CPSNavigationDisplaying-Protocol.h>

@class CPSTravelEstimatesStringFormatter, NSString, UILabel, UIStackView;

@interface CPSDashboardEstimatesView : UIView <CPSNavigationDisplaying>
{
    UILabel *_etaLabel;
    UILabel *_timeRemainingLabel;
    UILabel *_distanceRemainingLabel;
    UIStackView *_stackView;
    CPSTravelEstimatesStringFormatter *_travelEstimatesStringFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *distanceRemainingLabel; // @synthesize distanceRemainingLabel=_distanceRemainingLabel;
@property (strong, nonatomic) UILabel *etaLabel; // @synthesize etaLabel=_etaLabel;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property (strong, nonatomic) CPSTravelEstimatesStringFormatter *travelEstimatesStringFormatter; // @synthesize travelEstimatesStringFormatter=_travelEstimatesStringFormatter;

- (void).cxx_destruct;
- (id)_labelFont;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTripEstimates:(id)arg1;

@end
