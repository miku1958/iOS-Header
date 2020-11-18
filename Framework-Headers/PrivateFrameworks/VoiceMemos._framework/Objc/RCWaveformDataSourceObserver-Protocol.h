//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class RCWaveformDataSource, RCWaveformSegment;

@protocol RCWaveformDataSourceObserver <NSObject>
- (void)waveformDataSource:(RCWaveformDataSource *)arg1 didLoadWaveformSegment:(RCWaveformSegment *)arg2;
- (void)waveformDataSourceDidFinishLoading:(RCWaveformDataSource *)arg1;

@optional
- (void)waveformDataSourceRequiresUpdate:(RCWaveformDataSource *)arg1;
@end

