//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilitarianScene.h>

@interface NTKUtilitarianNumbersScene : NTKUtilitarianScene
{
}

- (void)applyDensity:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (double)getRelativeFractionFromOverallFraction:(double)arg1 forIntervalStart:(double)arg2 andIntervalEnd:(double)arg3;
- (id)initWithSize:(struct CGSize)arg1 forDevice:(id)arg2;
- (id)scrubbingObscuredCollectionNodes;
- (void)setAlpha:(double)arg1 element:(id)arg2 index:(int)arg3;

@end

