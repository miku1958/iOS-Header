//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIEnhancementCalculation.h>

__attribute__((visibility("hidden")))
@interface CIEnhancementCalculator : CIEnhancementCalculation
{
    BOOL faceBalanceEnabled;
    BOOL vibranceEnabled;
    BOOL curvesEnabled;
    BOOL shadowsEnabled;
}

@property BOOL curvesEnabled; // @synthesize curvesEnabled;
@property BOOL faceBalanceEnabled; // @synthesize faceBalanceEnabled;
@property BOOL shadowsEnabled; // @synthesize shadowsEnabled;
@property BOOL vibranceEnabled; // @synthesize vibranceEnabled;

- (void)analyzeFeatures:(id)arg1 usingContext:(id)arg2 baseImage:(id)arg3;
- (void)dealloc;
- (id)histogramFromRows:(id)arg1 componentOffset:(unsigned int)arg2;
- (id)init;
- (id)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 detectorOpts:(id)arg3;
- (void)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 features:(id)arg3;
- (void)setupHistogramsUsing:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4;

@end
