//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UISegmentedControl;
@protocol SFPrivacyReportDetailToggleTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFPrivacyReportDetailToggleTableViewCell : UITableViewCell
{
    UISegmentedControl *_segmentedControl;
    UILabel *_titleLabel;
    BOOL _useCurrentWebsiteHeader;
    long long _detailType;
    id<SFPrivacyReportDetailToggleTableViewCellDelegate> _delegate;
}

@property (weak, nonatomic) id<SFPrivacyReportDetailToggleTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long detailType; // @synthesize detailType=_detailType;
@property (nonatomic) BOOL useCurrentWebsiteHeader; // @synthesize useCurrentWebsiteHeader=_useCurrentWebsiteHeader;

- (void).cxx_destruct;
- (void)_addSegmentForDetailType:(long long)arg1;
- (void)_selectDetailType:(long long)arg1;
- (void)_updateTitle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
