//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MFAudioSessionConfiguration;

@protocol MFAudioSessionControlling
- (BOOL)setAudioSessionActive:(BOOL)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (void)updateAudioSessionWithConfiguration:(MFAudioSessionConfiguration *)arg1;
@end
