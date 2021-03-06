//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPRecordLoadingDelegate.h>

@interface PPNamedEntityRecordLoadingDelegate : PPRecordLoadingDelegate
{
    CDUnknownBlockType _namedEntityRecordsSetup;
    CDUnknownBlockType _namedEntityRecordsHandler;
    CDUnknownBlockType _namedEntityRecordsCompletion;
    CDUnknownBlockType _recentNamedEntityRecordsSetup;
    CDUnknownBlockType _recentNamedEntityRecordsHandler;
    CDUnknownBlockType _recentNamedEntityRecordsCompletion;
    CDUnknownBlockType _resetNamedEntityRecordData;
}

@property (copy, nonatomic) CDUnknownBlockType namedEntityRecordsCompletion; // @synthesize namedEntityRecordsCompletion=_namedEntityRecordsCompletion;
@property (copy, nonatomic) CDUnknownBlockType namedEntityRecordsHandler; // @synthesize namedEntityRecordsHandler=_namedEntityRecordsHandler;
@property (copy, nonatomic) CDUnknownBlockType namedEntityRecordsSetup; // @synthesize namedEntityRecordsSetup=_namedEntityRecordsSetup;
@property (copy, nonatomic) CDUnknownBlockType recentNamedEntityRecordsCompletion; // @synthesize recentNamedEntityRecordsCompletion=_recentNamedEntityRecordsCompletion;
@property (copy, nonatomic) CDUnknownBlockType recentNamedEntityRecordsHandler; // @synthesize recentNamedEntityRecordsHandler=_recentNamedEntityRecordsHandler;
@property (copy, nonatomic) CDUnknownBlockType recentNamedEntityRecordsSetup; // @synthesize recentNamedEntityRecordsSetup=_recentNamedEntityRecordsSetup;
@property (copy, nonatomic) CDUnknownBlockType resetNamedEntityRecordData; // @synthesize resetNamedEntityRecordData=_resetNamedEntityRecordData;

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

