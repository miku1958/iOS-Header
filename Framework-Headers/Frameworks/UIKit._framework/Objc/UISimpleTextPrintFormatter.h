//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPrintFormatter.h>

@class NSAttributedString, NSString, UIColor, UIFont;

@interface UISimpleTextPrintFormatter : UIPrintFormatter
{
}

@property (copy, nonatomic) NSAttributedString *attributedText; // @dynamic attributedText;
@property (strong, nonatomic) UIColor *color; // @dynamic color;
@property (strong, nonatomic) UIFont *font; // @dynamic font;
@property (copy, nonatomic) NSString *text; // @dynamic text;
@property (nonatomic) long long textAlignment; // @dynamic textAlignment;

- (id)initWithAttributedText:(id)arg1;
- (id)initWithText:(id)arg1;

@end

