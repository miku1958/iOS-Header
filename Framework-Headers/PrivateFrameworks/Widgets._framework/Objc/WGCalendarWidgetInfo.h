//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Widgets/WGWidgetInfo.h>

@class NSDate;

@interface WGCalendarWidgetInfo : WGWidgetInfo
{
    NSDate *_date;
}

@property (strong, nonatomic, setter=_setDate:) NSDate *date; // @synthesize date=_date;

+ (BOOL)isCalendarExtension:(id)arg1;
- (void).cxx_destruct;
- (void)_handleSignificantTimeChange:(id)arg1;
- (id)_iconWithFormat:(int)arg1;
- (id)_iconWithOutline;
- (void)_resetIcons;
- (id)initWithExtension:(id)arg1;

@end
