//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface VideosExtrasGridSectionHeaderStyle : NSObject
{
    NSString *_textStyle;
    NSDictionary *_defaultFontAttributes;
    UIColor *_textColor;
    double _textBaselineHeight;
    double _textBaselineDescender;
    struct UIEdgeInsets _insets;
}

@property (strong, nonatomic) NSDictionary *defaultFontAttributes; // @synthesize defaultFontAttributes=_defaultFontAttributes;
@property (nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property (nonatomic) double textBaselineDescender; // @synthesize textBaselineDescender=_textBaselineDescender;
@property (nonatomic) double textBaselineHeight; // @synthesize textBaselineHeight=_textBaselineHeight;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (strong, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;

- (void).cxx_destruct;

@end

