//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAppLibrary, NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCPCSChainBatchInfo : NSObject
{
    NSMutableArray *_fullyChainRecordBatch;
    NSMutableDictionary *_fullyChainRecordInfoMap;
    NSMutableDictionary *_halfChainedParentMap;
    BRCAppLibrary *_appLibrary;
}

@property (readonly, nonatomic) unsigned long long batchCount;
@property (readonly, copy, nonatomic) NSArray *records;

- (void).cxx_destruct;
- (void)addFullyChainedRecordInfo:(id)arg1;
- (void)chainPreparedRecordBatch:(id)arg1;
- (id)initWithAppLibrary:(id)arg1;

@end

