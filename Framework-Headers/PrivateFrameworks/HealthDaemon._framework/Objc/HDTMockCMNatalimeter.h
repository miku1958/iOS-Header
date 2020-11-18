//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMNatalimeter.h>

@interface HDTMockCMNatalimeter : CMNatalimeter
{
    CDUnknownBlockType _handleQueryDataSinceRecord;
    CDUnknownBlockType _handleStartNatalimetryUpdates;
    CDUnknownBlockType _handleStopNatalimeteryUpdates;
}

@property (copy, nonatomic) CDUnknownBlockType handleQueryDataSinceRecord; // @synthesize handleQueryDataSinceRecord=_handleQueryDataSinceRecord;
@property (copy, nonatomic) CDUnknownBlockType handleStartNatalimetryUpdates; // @synthesize handleStartNatalimetryUpdates=_handleStartNatalimetryUpdates;
@property (copy, nonatomic) CDUnknownBlockType handleStopNatalimeteryUpdates; // @synthesize handleStopNatalimeteryUpdates=_handleStopNatalimeteryUpdates;

- (void).cxx_destruct;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopAbsoluteNatalimetryDataUpdates;

@end

