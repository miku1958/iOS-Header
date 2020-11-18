//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPCAudioSpectrumObserver : NSObject
{
    struct _MPCAudioSpectrumAnalyzerBandInternal *_bands;
    unsigned long long _bandsStorageSize;
    long long _numberOfBands;
    CDUnknownBlockType _onUpdate;
}

@property (readonly, nonatomic) long long numberOfBands; // @synthesize numberOfBands=_numberOfBands;
@property (copy, nonatomic) CDUnknownBlockType onUpdate; // @synthesize onUpdate=_onUpdate;

+ (id)defaultObserver;
- (void).cxx_destruct;
- (void)_resizeBandStorage;
- (long long)addAnalysisBand:(struct MPCAudioSpectrumAnalyzerBand)arg1;
- (float)averagePowerOfBandAtIndex:(long long)arg1 band:(out struct MPCAudioSpectrumAnalyzerBand *)arg2;
- (void)beginReport;
- (void)dealloc;
- (void)finishReport;

@end
