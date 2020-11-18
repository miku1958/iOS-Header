//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBTextStyle : NSObject <NSCopying>
{
    BOOL _ignoreTextMarginOnKey;
    NSString *_fontName;
    double _fontSize;
    double _minFontSize;
    double _kerning;
    double _textOpacity;
    NSString *_textColor;
    NSString *_etchColor;
    double _pathWeight;
    double _fontWeight;
    long long _selector;
    struct CGPoint _textOffset;
    struct CGPoint _etchOffset;
}

@property (strong, nonatomic) NSString *etchColor; // @synthesize etchColor=_etchColor;
@property (nonatomic) struct CGPoint etchOffset; // @synthesize etchOffset=_etchOffset;
@property (strong, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property (nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property (nonatomic) double fontWeight; // @synthesize fontWeight=_fontWeight;
@property (nonatomic) BOOL ignoreTextMarginOnKey; // @synthesize ignoreTextMarginOnKey=_ignoreTextMarginOnKey;
@property (nonatomic) double kerning; // @synthesize kerning=_kerning;
@property (nonatomic) double minFontSize; // @synthesize minFontSize=_minFontSize;
@property (nonatomic) double pathWeight; // @synthesize pathWeight=_pathWeight;
@property (nonatomic) long long selector; // @synthesize selector=_selector;
@property (strong, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property (nonatomic) struct CGPoint textOffset; // @synthesize textOffset=_textOffset;
@property (nonatomic) double textOpacity; // @synthesize textOpacity=_textOpacity;

+ (id)styleWithFontName:(id)arg1 withFontSize:(double)arg2;
+ (id)styleWithTextColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)overlayWithStyle:(id)arg1;

@end

