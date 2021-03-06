//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector;

__attribute__((visibility("hidden")))
@interface AVCRateControlFeedbackController : NSObject
{
    unsigned int _mode;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _feedbackMessageCount;
    unsigned int _remoteTotalPacketReceivedCount;
    BOOL _isFeedbackReceived;
    BOOL _didRegisterPacketReceivedHandler;
}

@property (nonatomic) unsigned int mode; // @synthesize mode=_mode;

- (BOOL)detectOutOfOrderFeedbackMessage:(CDStruct_de0ff4c0)arg1;
- (BOOL)getFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (BOOL)getRateControlFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (BOOL)getVCStatisticsFeedbackMessage:(CDStruct_bae76c55 *)arg1 time:(double)arg2;
- (id)initWithStatisticsCollector:(id)arg1;
- (BOOL)processFeedbackMessage:(id)arg1 type:(unsigned int)arg2 metaData:(id)arg3 error:(id *)arg4;
- (BOOL)processRateControlFeedbackMessage:(CDStruct_de0ff4c0)arg1 type:(unsigned int)arg2 error:(id *)arg3 time:(double)arg4;
- (BOOL)processRateControlProbingMessage:(CDStruct_d30cff71)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (void)resetBurstyLossStatistics;
- (CDStruct_de0ff4c0)translateAFRCFeedbackMessage:(struct tagAFRCFB)arg1;
- (BOOL)translateMediaControlInfo:(void *)arg1 feedbackMessage:(CDStruct_de0ff4c0 *)arg2;
- (id)translateRateControlDataWithFeedbackMessage:(CDStruct_de0ff4c0)arg1;
- (CDStruct_de0ff4c0)translateRateControlFeedbackMessageFromData:(id)arg1;

@end

