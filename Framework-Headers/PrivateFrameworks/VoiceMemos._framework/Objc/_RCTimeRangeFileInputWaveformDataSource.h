//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/RCFileInputWaveformDataSource.h>

__attribute__((visibility("hidden")))
@interface _RCTimeRangeFileInputWaveformDataSource : RCFileInputWaveformDataSource
{
    BOOL _isDecomposedFragment;
}

@property (nonatomic) BOOL isDecomposedFragment; // @synthesize isDecomposedFragment=_isDecomposedFragment;

- (void)saveGeneratedWaveformIfNecessary;

@end

