//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class STUsageReport, UIStackView;

__attribute__((visibility("hidden")))
@interface STNotificationsPickupSummaryView : UIView
{
    STUsageReport *_usageReport;
    UIStackView *_stackView;
}

@property (strong, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (strong, nonatomic) STUsageReport *usageReport; // @synthesize usageReport=_usageReport;

- (void).cxx_destruct;
- (id)_attributedString:(id)arg1 withFont:(id)arg2;
- (id)_attributedStringForNotificationsDetailText;
- (id)_attributedStringForNotificationsTitle;
- (id)_attributedStringForPickUpDetailText;
- (id)_attributedStringForPickUpTitle;
- (id)initWithUsageReport:(id)arg1;

@end

