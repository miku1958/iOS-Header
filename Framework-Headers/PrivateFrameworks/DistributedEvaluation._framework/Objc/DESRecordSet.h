//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface DESRecordSet : NSObject
{
    CDUnknownBlockType _dataFetcher;
    NSDictionary *_nativeRecords;
    NSDictionary *_nativeRecordInfo;
    NSArray *_coreDuetEvents;
    NSDictionary *_predicate;
}

@property (readonly, copy, nonatomic) NSArray *coreDuetEvents; // @synthesize coreDuetEvents=_coreDuetEvents;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSDictionary *nativeRecordInfo; // @synthesize nativeRecordInfo=_nativeRecordInfo;
@property (readonly, copy, nonatomic) NSDictionary *nativeRecords; // @synthesize nativeRecords=_nativeRecords;
@property (readonly, nonatomic) NSDictionary *predicate; // @synthesize predicate=_predicate;

+ (void)initialize;
- (void).cxx_destruct;
- (id)_anyNativeRecordUUID;
- (id)_initWithNativeRecords:(id)arg1 nativeRecordInfo:(id)arg2 coreDuetEvents:(id)arg3 predicate:(id)arg4 dataFetcher:(CDUnknownBlockType)arg5;
- (id)filteredRecordSetWithJSONPredicate:(id)arg1;
- (id)nativeRecordDataForRecordUUID:(id)arg1 error:(id *)arg2;
- (id)nativeRecordInfoForRecordUUID:(id)arg1;

@end
