//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MobileTimer/MTDateLabelObserver-Protocol.h>

@class DigitalClockLabel, NSArray, NSDictionary, NSString, UIFont, UILabel, UISwitch;

@interface AlarmView : UIView <MTDateLabelObserver>
{
    UIView *_singleStyleDetailContainer;
    id _contentSizeFontAdjustObserver;
    long long _style;
    DigitalClockLabel *_timeLabel;
    NSString *_name;
    NSString *_repeatText;
    UILabel *_detailLabel;
    UILabel *_nameLabel;
    UILabel *_repeatLabel;
    UIFont *_nameFont;
    UIFont *_repeatFont;
    UILabel *_secondaryDesignatorLabel;
    UISwitch *_enabledSwitch;
    NSArray *_currentConstraints;
}

@property (strong, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property (readonly, nonatomic) UISwitch *enabledSwitch; // @synthesize enabledSwitch=_enabledSwitch;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) UIFont *nameFont; // @synthesize nameFont=_nameFont;
@property (readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property (strong, nonatomic) UIFont *repeatFont; // @synthesize repeatFont=_repeatFont;
@property (readonly, nonatomic) UILabel *repeatLabel; // @synthesize repeatLabel=_repeatLabel;
@property (copy, nonatomic) NSString *repeatText; // @synthesize repeatText=_repeatText;
@property (readonly, nonatomic) UILabel *secondaryDesignatorLabel; // @synthesize secondaryDesignatorLabel=_secondaryDesignatorLabel;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) DigitalClockLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property (readonly, nonatomic) NSDictionary *viewsByIdentifier;

- (void).cxx_destruct;
- (void)_loadFontsWithTextStyles;
- (void)dateLabel:(id)arg1 timeDesignatorDidChange:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3;
- (void)tearDownContentSizeChangeObserver;
- (void)updateConstraints;
- (void)updatePreferredMaxLayoutWidthForDetailContainerLabels;
- (void)updateSubviewVisibility;

@end

