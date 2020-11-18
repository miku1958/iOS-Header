//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/RCTrimCompositionOperation.h>

@protocol RCMutableRecording, RCRecording;

@interface RCTrimSavedRecordingOperation : RCTrimCompositionOperation
{
    id<RCRecording> _sourceRecording;
    id<RCMutableRecording> _destinationRecording;
}

@property (readonly, nonatomic) id<RCMutableRecording> destinationRecording; // @synthesize destinationRecording=_destinationRecording;
@property (readonly, nonatomic) id<RCRecording> sourceRecording; // @synthesize sourceRecording=_sourceRecording;

- (void).cxx_destruct;
- (id)initWithSourceRecording:(id)arg1 destinationRecording:(id)arg2 timeRange:(CDStruct_73a5d3ca)arg3 trimMode:(long long)arg4;
- (void)main;

@end

