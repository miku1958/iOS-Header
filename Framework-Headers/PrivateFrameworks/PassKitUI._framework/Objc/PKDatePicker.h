//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSCalendar, NSDate, NSLocale;
@protocol PKDatePickerDelegate, PKDatePickerInternalImplementationProtocol;

@interface PKDatePicker : UIView
{
    UIView<PKDatePickerInternalImplementationProtocol> *_internalPicker;
    BOOL _showsDay;
    BOOL _showsMonth;
    BOOL _showsYear;
    BOOL _usesDarkAppearance;
    unsigned long long _style;
    NSLocale *_locale;
    NSCalendar *_calendar;
    NSDate *_date;
    id<PKDatePickerDelegate> _delegate;
}

@property (readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (weak, nonatomic) id<PKDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (readonly, nonatomic) BOOL showsDay; // @synthesize showsDay=_showsDay;
@property (readonly, nonatomic) BOOL showsMonth; // @synthesize showsMonth=_showsMonth;
@property (readonly, nonatomic) BOOL showsYear; // @synthesize showsYear=_showsYear;
@property (readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property (nonatomic) BOOL usesDarkAppearance; // @synthesize usesDarkAppearance=_usesDarkAppearance;

+ (BOOL)_preventsAppearanceProxyCustomization;
- (void).cxx_destruct;
- (Class)_classForDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 style:(unsigned long long)arg4;
- (void)_dateValueChanged:(id)arg1;
- (void)_forceReloadInternalPicker;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)reconfigureToShowDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 style:(unsigned long long)arg4 locale:(id)arg5 calendar:(id)arg6;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

