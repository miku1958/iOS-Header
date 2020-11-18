//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXSectionedChangeDetailsRepository : NSObject
{
    NSMutableArray *_allChangeDetails;
    NSObject<OS_dispatch_queue> *_internalQueue;
    long long _historyLimit;
}

@property (readonly, nonatomic) long long historyLimit; // @synthesize historyLimit=_historyLimit;

- (void).cxx_destruct;
- (void)addChangeDetails:(id)arg1;
- (id)changeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2;
- (id)coalescedChangeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2;
- (id)init;
- (id)initWithChangeHistoryLimit:(long long)arg1;

@end
