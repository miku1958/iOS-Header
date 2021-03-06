//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIStackView, WFRowOfIconsView;

@interface WFAutomationNotificationContentView : UIView
{
    UIStackView *_stackView;
    WFRowOfIconsView *_actionIconsView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property (readonly, nonatomic) WFRowOfIconsView *actionIconsView; // @synthesize actionIconsView=_actionIconsView;
@property (readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateUIFromNotification:(id)arg1;

@end

