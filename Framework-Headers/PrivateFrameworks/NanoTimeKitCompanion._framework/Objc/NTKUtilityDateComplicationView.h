//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

@class NTKDateComplicationLabel;

@interface NTKUtilityDateComplicationView : NTKUtilityComplicationView
{
    NTKDateComplicationLabel *_label;
    unsigned long long _dateStyle;
}

@property (readonly, nonatomic) unsigned long long dateStyle; // @synthesize dateStyle=_dateStyle;

- (void).cxx_destruct;
- (void)_invalidateLabelSize;
- (double)_widthThatFits;
- (id)accentColor;
- (id)foregroundColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setAccentColor:(id)arg1;
- (void)setDateComplicationText:(id)arg1 withDayRange:(struct _NSRange)arg2 forDateStyle:(unsigned long long)arg3;
- (void)setFont:(id)arg1;
- (void)setForegroundColor:(id)arg1;

@end

