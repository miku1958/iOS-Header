//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface _MKPlaceBusinessInfoItem : NSObject
{
    NSString *_displayString;
    BOOL _isAvailable;
    NSAttributedString *_formattedDisplayString;
    UIFont *_font;
    UIColor *_textColor;
}

@property (readonly, nonatomic) NSAttributedString *displayString;

+ (id)itemWithDescription:(id)arg1 availability:(BOOL)arg2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)setFont:(id)arg1 textColor:(id)arg2;

@end

