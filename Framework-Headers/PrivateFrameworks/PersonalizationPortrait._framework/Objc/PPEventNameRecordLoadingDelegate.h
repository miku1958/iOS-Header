//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPRecordLoadingDelegate.h>

@interface PPEventNameRecordLoadingDelegate : PPRecordLoadingDelegate
{
    CDUnknownBlockType _eventNameRecordsSetup;
    CDUnknownBlockType _eventNameRecordsHandler;
    CDUnknownBlockType _eventNameRecordsCompletion;
    CDUnknownBlockType _recentEventNameRecordsSetup;
    CDUnknownBlockType _recentEventNameRecordsHandler;
    CDUnknownBlockType _recentEventNameRecordsCompletion;
    CDUnknownBlockType _resetEventNameRecordData;
}

@property (copy, nonatomic) CDUnknownBlockType eventNameRecordsCompletion; // @synthesize eventNameRecordsCompletion=_eventNameRecordsCompletion;
@property (copy, nonatomic) CDUnknownBlockType eventNameRecordsHandler; // @synthesize eventNameRecordsHandler=_eventNameRecordsHandler;
@property (copy, nonatomic) CDUnknownBlockType eventNameRecordsSetup; // @synthesize eventNameRecordsSetup=_eventNameRecordsSetup;
@property (copy, nonatomic) CDUnknownBlockType recentEventNameRecordsCompletion; // @synthesize recentEventNameRecordsCompletion=_recentEventNameRecordsCompletion;
@property (copy, nonatomic) CDUnknownBlockType recentEventNameRecordsHandler; // @synthesize recentEventNameRecordsHandler=_recentEventNameRecordsHandler;
@property (copy, nonatomic) CDUnknownBlockType recentEventNameRecordsSetup; // @synthesize recentEventNameRecordsSetup=_recentEventNameRecordsSetup;
@property (copy, nonatomic) CDUnknownBlockType resetEventNameRecordData; // @synthesize resetEventNameRecordData=_resetEventNameRecordData;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1;
- (void)recentRecordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)arg1;
- (unsigned char)recentRecordLoadingSetup;
- (void)recordLoadingCompletion;
- (unsigned char)recordLoadingHandler:(id)arg1;
- (unsigned char)recordLoadingSetup;
- (void)resetRecordData;

@end

