//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/RCFileInputWaveformDataSource.h>

@interface _RCTimeRangeFileInputWaveformDataSource : RCFileInputWaveformDataSource
{
    BOOL _isDecomposedFragment;
    double _destinationBeginTime;
    CDStruct_73a5d3ca _sourceTimeRange;
}

@property (nonatomic) double destinationBeginTime; // @synthesize destinationBeginTime=_destinationBeginTime;
@property (nonatomic) BOOL isDecomposedFragment; // @synthesize isDecomposedFragment=_isDecomposedFragment;
@property (nonatomic) CDStruct_73a5d3ca sourceTimeRange; // @synthesize sourceTimeRange=_sourceTimeRange;

- (void)saveGeneratedWaveformIfNecessary;

@end
