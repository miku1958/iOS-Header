//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCStatisticsHistory : NSObject
{
    struct VCStatisticsStatsHistoryElement _statsHistory[500];
    int _statsHistorySize;
    int _currentStatsHistoryIndex;
    struct VCStatisticsStatsHistoryElement _lastStats;
    unsigned char _currentLinkID;
    double _lastHistoryNotEnoughLogTime;
    struct VCStatisticsSendHistoryElement *_sendHistory;
}

- (void)addAndPruneSendHistory:(struct VCStatisticsSendHistoryElement *)arg1 upToTime:(double)arg2;
- (void)addStatsHistory:(struct VCStatisticsStatsHistoryElement)arg1;
- (void)clearSendHistory;
- (void)dealloc;
- (int)getBurstyLossAtTime:(double)arg1 inMostRecentDuration:(double)arg2 withPercentile:(double)arg3;
- (double)getPacketLossRateAtTime:(double)arg1 inMostRecentDuration:(double)arg2;
- (double)getReceivingBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2;
- (double)getRoundTripTimeWithPacketId:(unsigned int)arg1 time:(double)arg2;
- (struct VCStatisticsSendHistoryElement *)getSendHistoryElementWithPacketId:(unsigned int)arg1;
- (double)getSendingBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2;
- (double)getServerStatsBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2;
- (BOOL)getStatsHistoryElementIndex:(int *)arg1 time:(double)arg2 inMostRecentDuration:(double)arg3;
- (BOOL)handleWrappedAroundByteCountForStats:(struct VCStatisticsStatsHistoryElement *)arg1;
- (BOOL)isStatsElementOutOfOrder:(struct VCStatisticsStatsHistoryElement)arg1;
- (void)resetHistory;

@end
