//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKVictoryAnalogBackgroundColorPalette-Protocol.h>

@class NSString, NTKOlympusColorPalette, UIColor;

@interface NTKOlympusAnalogBackgroundPalette : NSObject <NTKVictoryAnalogBackgroundColorPalette>
{
    NTKOlympusColorPalette *_olympusPalette;
}

@property (readonly, nonatomic) UIColor *analogDotColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long faceColor;
@property (readonly, nonatomic) BOOL hasWhiteElements;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIColor *logoColor;
@property (readonly, nonatomic) UIColor *numbersColor;
@property (strong, nonatomic) NTKOlympusColorPalette *olympusPalette; // @synthesize olympusPalette=_olympusPalette;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_softBlackColor;
- (id)colorForDotVictoryAnalogTimeElement:(unsigned long long)arg1;
- (id)colorForLogoWithStyle:(unsigned long long)arg1;
- (id)colorForNumberVictoryAnalogTimeElement:(unsigned long long)arg1;
- (id)initWithOlympusPalette:(id)arg1;
- (id)initWithOlympusPalette:(id)arg1 alternatePalette:(id)arg2;

@end

