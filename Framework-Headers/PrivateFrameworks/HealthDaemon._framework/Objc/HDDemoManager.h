//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _HDDataFaker, _HDDataRecorder, _HDDataReplayer;

@interface HDDemoManager : NSObject
{
    _HDDataFaker *_faker;
    _HDDataReplayer *_replayer;
    _HDDataRecorder *_recorder;
}

- (void).cxx_destruct;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 objectHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)isProvidingData;
- (void)recordData:(id)arg1;
- (void)startFakingDataForActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(CDUnknownBlockType)arg3;
- (void)startRecordingDataToFile:(id)arg1;
- (void)startReplayingDataFromFile:(id)arg1 repeat:(BOOL)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)stopFakingData;
- (void)stopRecordingData;
- (void)stopReplayingData;

@end
