//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTTodayResultsSource-Protocol.h>

@class FCAsyncSerialQueue, NSString;
@protocol FCContentContext, NTReadablePrivateDataStorage, NTTodayResultsFetchDescriptor;

@interface NTTodayResultsSource : NSObject <NTTodayResultsSource>
{
    BOOL _flushingHasBeenEnabled;
    id<NTTodayResultsFetchDescriptor> _fetchDescriptor;
    id<NTReadablePrivateDataStorage> _privateDataStorage;
    id<FCContentContext> _contentContext;
    FCAsyncSerialQueue *_serialQueue;
    NSObject *_latestResultRecordsHoldToken;
}

@property (readonly, nonatomic) id<FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id<NTTodayResultsFetchDescriptor> fetchDescriptor; // @synthesize fetchDescriptor=_fetchDescriptor;
@property (nonatomic, getter=hasFlushingBeenEnabled) BOOL flushingHasBeenEnabled; // @synthesize flushingHasBeenEnabled=_flushingHasBeenEnabled;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject *latestResultRecordsHoldToken; // @synthesize latestResultRecordsHoldToken=_latestResultRecordsHoldToken;
@property (readonly, nonatomic) id<NTReadablePrivateDataStorage> privateDataStorage; // @synthesize privateDataStorage=_privateDataStorage;
@property (readonly, nonatomic) FCAsyncSerialQueue *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchLatestResultsWithOperationInfo:(id)arg1 prefetchedContent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchTodayModuleDescriptorsWithContentRequests:(id)arg1 requireRefreshedAppConfig:(BOOL)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchModuleDescriptorsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithFetchDescriptor:(id)arg1 privateDataStorage:(id)arg2 contentContext:(id)arg3 fetchQueue:(id)arg4;
- (id)placeholderResultsWithOperationInfo:(id)arg1;

@end
