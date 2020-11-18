//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationContentView.h>

@class UILabel;

@interface NCLegacyNotificationContentView : NCNotificationContentView
{
    UILabel *_expandedSecondaryLabel;
}

@property (readonly, nonatomic, getter=_expandedSecondaryLabel) UILabel *expandedSecondaryLabel; // @synthesize expandedSecondaryLabel=_expandedSecondaryLabel;

- (void).cxx_destruct;
- (double)_expandedSecondaryTextHeightDeltaForContentSize:(struct CGSize)arg1;
- (BOOL)adjustForContentSizeCategoryChange;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setSecondaryText:(id)arg1;

@end

