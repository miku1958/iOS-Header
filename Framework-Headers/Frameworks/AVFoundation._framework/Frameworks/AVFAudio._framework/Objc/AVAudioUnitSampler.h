//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFAudio/AVAudioUnitMIDIInstrument.h>

@interface AVAudioUnitSampler : AVAudioUnitMIDIInstrument
{
}

@property (nonatomic) float globalTuning;
@property (nonatomic) float masterGain;
@property (nonatomic) float stereoPan;

- (id)init;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription)arg1;
- (BOOL)loadAudioFilesAtURLs:(id)arg1 error:(id *)arg2;
- (BOOL)loadInstrumentAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)loadSoundBankInstrumentAtURL:(id)arg1 program:(unsigned char)arg2 bankMSB:(unsigned char)arg3 bankLSB:(unsigned char)arg4 error:(id *)arg5;

@end

