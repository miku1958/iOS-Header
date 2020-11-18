//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/NSCopying-Protocol.h>

@class NSString;

@interface SXComponentTextRules : NSObject <NSCopying>
{
    BOOL _shouldHyphenate;
    BOOL _isSelectable;
    BOOL _allowsScrollPositionRestore;
    double _fontResizingTresholdFactor;
    double _fontSizeConstant;
    double _lineHeightConstant;
    double _dropCapConstant;
    long long _textFlow;
    NSString *_fontTextStyle;
}

@property (nonatomic) BOOL allowsScrollPositionRestore; // @synthesize allowsScrollPositionRestore=_allowsScrollPositionRestore;
@property (nonatomic) double dropCapConstant; // @synthesize dropCapConstant=_dropCapConstant;
@property (nonatomic) double fontResizingTresholdFactor; // @synthesize fontResizingTresholdFactor=_fontResizingTresholdFactor;
@property (nonatomic) double fontSizeConstant; // @synthesize fontSizeConstant=_fontSizeConstant;
@property (copy, nonatomic) NSString *fontTextStyle; // @synthesize fontTextStyle=_fontTextStyle;
@property (nonatomic) BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property (nonatomic) double lineHeightConstant; // @synthesize lineHeightConstant=_lineHeightConstant;
@property (nonatomic) BOOL shouldHyphenate; // @synthesize shouldHyphenate=_shouldHyphenate;
@property (nonatomic) long long textFlow; // @synthesize textFlow=_textFlow;

+ (id)bodyTextRules;
+ (id)defaultTextRules;
+ (id)headingTextRules;
+ (id)smallTextRules;
+ (id)titleTextRules;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

