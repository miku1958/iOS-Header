//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class UIColor;

@protocol NTKVictoryAnalogBackgroundColorPalette <NSObject>

@property (readonly, nonatomic) UIColor *analogDotColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) unsigned long long faceColor;
@property (readonly, nonatomic) BOOL hasWhiteElements;
@property (readonly, nonatomic) UIColor *logoColor;
@property (readonly, nonatomic) UIColor *numbersColor;

- (UIColor *)colorForDotVictoryAnalogTimeElement:(unsigned long long)arg1;
- (UIColor *)colorForLogoWithStyle:(unsigned long long)arg1;
- (UIColor *)colorForNumberVictoryAnalogTimeElement:(unsigned long long)arg1;
@end
