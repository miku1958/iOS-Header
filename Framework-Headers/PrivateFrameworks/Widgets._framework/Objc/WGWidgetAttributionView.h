//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSMutableAttributedString, UIColor;

@interface WGWidgetAttributionView : UITextView
{
    NSMutableAttributedString *_widgetAttributedString;
    UIColor *_legibilityTextColor;
}

@property (strong, nonatomic) UIColor *legibilityTextColor; // @synthesize legibilityTextColor=_legibilityTextColor;

+ (void)requestAttributedStringForIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (id)widgetAttributionIDsInOrder;
- (void).cxx_destruct;
- (id)_attributionBackgroundColor;
- (id)_attributionFont;
- (void)_configureAttributedString;
- (id)initWithWidgetAttributedString:(id)arg1;
- (void)layoutSubviews;

@end

