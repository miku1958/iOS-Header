//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <EventKitUI/CalendarLabelTextMetrics-Protocol.h>

@class NSString, UIColor, UIFont;

@interface EKTextViewWithLabelTextMetrics : UITextView <CalendarLabelTextMetrics>
{
    long long lineBreakMode;
}

@property (strong, nonatomic) UIFont *font; // @dynamic font;
@property (nonatomic) long long lineBreakMode; // @synthesize lineBreakMode;
@property (nonatomic) long long numberOfLines;
@property (copy, nonatomic) NSString *text; // @dynamic text;
@property (nonatomic) long long textAlignment;
@property (strong, nonatomic) UIColor *textColor;

- (id)accessibilityValue;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setURL:(id)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;

@end

