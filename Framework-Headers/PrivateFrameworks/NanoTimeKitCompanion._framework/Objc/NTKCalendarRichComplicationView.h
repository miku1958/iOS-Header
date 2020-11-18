//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NSArray, NTKCalendarRichComplicationContentView;

@interface NTKCalendarRichComplicationView : NTKRichComplicationRectangularBaseView
{
    NTKCalendarRichComplicationContentView *_contentView;
    NSArray *_accentViews;
    NSArray *_desaturateViews;
}

@property (strong, nonatomic) NSArray *accentViews; // @synthesize accentViews=_accentViews;
@property (strong, nonatomic) NTKCalendarRichComplicationContentView *contentView; // @synthesize contentView=_contentView;
@property (strong, nonatomic) NSArray *desaturateViews; // @synthesize desaturateViews=_desaturateViews;

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_updateViews:(id)arg1 withFilter:(id)arg2;
- (id)init;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
