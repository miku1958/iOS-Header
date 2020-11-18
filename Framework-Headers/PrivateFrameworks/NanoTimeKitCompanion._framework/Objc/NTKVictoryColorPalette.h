//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface NTKVictoryColorPalette : NSObject
{
    BOOL _hasWhiteElements;
    UIColor *_numbersColor;
    UIColor *_handsColor;
    UIColor *_logoColor;
    UIColor *_secondHandColor;
    UIColor *_handInlayColor;
    UIColor *_analogComplicationsColor;
    UIColor *_analogDotColor;
    UIColor *_digitalComplicationsColor;
    UIColor *_digitalComplicationsPlatterColor;
    UIColor *_platterColor;
    unsigned long long _bleed;
    UIColor *_backgroundColor;
}

@property (readonly, nonatomic) UIColor *analogComplicationsColor; // @synthesize analogComplicationsColor=_analogComplicationsColor;
@property (readonly, nonatomic) UIColor *analogDotColor; // @synthesize analogDotColor=_analogDotColor;
@property (readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (readonly, nonatomic) unsigned long long bleed; // @synthesize bleed=_bleed;
@property (readonly, nonatomic) UIColor *digitalComplicationsColor; // @synthesize digitalComplicationsColor=_digitalComplicationsColor;
@property (readonly, nonatomic) UIColor *digitalComplicationsPlatterColor; // @synthesize digitalComplicationsPlatterColor=_digitalComplicationsPlatterColor;
@property (readonly, nonatomic) UIColor *handInlayColor; // @synthesize handInlayColor=_handInlayColor;
@property (readonly, nonatomic) UIColor *handsColor; // @synthesize handsColor=_handsColor;
@property (readonly, nonatomic) BOOL hasWhiteElements; // @synthesize hasWhiteElements=_hasWhiteElements;
@property (readonly, nonatomic) UIColor *logoColor; // @synthesize logoColor=_logoColor;
@property (readonly, nonatomic) UIColor *numbersColor; // @synthesize numbersColor=_numbersColor;
@property (readonly, nonatomic) UIColor *platterColor; // @synthesize platterColor=_platterColor;
@property (readonly, nonatomic) UIColor *secondHandColor; // @synthesize secondHandColor=_secondHandColor;

+ (id)paletteForColor:(unsigned long long)arg1 bleed:(unsigned long long)arg2;
+ (id)paletteForColor:(unsigned long long)arg1 style:(unsigned long long)arg2;
+ (id)voltColor;
- (void).cxx_destruct;
- (id)initWithColor:(unsigned long long)arg1 bleed:(unsigned long long)arg2;

@end

