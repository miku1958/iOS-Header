//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/EQKitLayoutContext-Protocol.h>

@class NSString, TSUColor;

@interface TSWPEquationLayoutContext : NSObject <EQKitLayoutContext>
{
    NSString *_fontName;
    TSUColor *_fontColor;
    double _fontSize;
    double _textMacroFontSize;
    struct CGSize _targetSize;
    struct CGSize _containerSize;
}

@property (nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) TSUColor *fontColor; // @synthesize fontColor=_fontColor;
@property (copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property (nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property (nonatomic) double textMacroFontSize; // @synthesize textMacroFontSize=_textMacroFontSize;

- (void).cxx_destruct;
- (struct CGColor *)baseFontColor;
- (struct __CFString *)baseFontName;
- (double)baseFontSize;
- (id)init;
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2 fontColor:(id)arg3;
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2 fontColor:(id)arg3 targetSize:(struct CGSize)arg4 containerSize:(struct CGSize)arg5 textMacroFontSize:(double)arg6;
- (id)initWithTextProperties:(id)arg1 containerSize:(struct CGSize)arg2;
- (id)initWithTextProperties:(id)arg1 fontSize:(double)arg2 containerSize:(struct CGSize)arg3;
- (id)initWithTextProperties:(id)arg1 fontSize:(double)arg2 containerSize:(struct CGSize)arg3 textMacroFontSize:(double)arg4;
- (id)initWithTextProperties:(id)arg1 targetSize:(struct CGSize)arg2;
- (BOOL)isEqual:(id)arg1;

@end

