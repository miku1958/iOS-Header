//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UILabel, _UIDatePickerMode;

__attribute__((visibility("hidden")))
@interface UIDatePickerContentView : UIView
{
    struct {
        unsigned int isAmPm:1;
    } _datePickerContentViewFlags;
    BOOL _isModern;
    UILabel *_titleLabel;
    double _titleLabelMaxX;
    long long _titleAlignment;
    _UIDatePickerMode *_mode;
}

@property (nonatomic) BOOL isAmPm;
@property (nonatomic) BOOL isModern; // @synthesize isModern=_isModern;
@property (strong, nonatomic) _UIDatePickerMode *mode; // @synthesize mode=_mode;
@property (nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (nonatomic) double titleLabelMaxX; // @synthesize titleLabelMaxX=_titleLabelMaxX;

- (void).cxx_destruct;
- (BOOL)_canBeReusedInPickerView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithMode:(id)arg1;
- (void)layoutSubviews;

@end

