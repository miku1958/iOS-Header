//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class NSIndexSet;
@protocol AVTAvatarRecord, AVTAvatarStore;

@protocol AVTAvatarRecordDataSource <NSObject>
- (unsigned long long)indexOfRecordPassingTest:(BOOL (^)(id<AVTAvatarRecord>, unsigned long long, BOOL *))arg1;
- (NSIndexSet *)indexesOfRecordsPassingTest:(BOOL (^)(id<AVTAvatarRecord>, unsigned long long, BOOL *))arg1;
- (unsigned long long)numberOfRecords;
- (id<AVTAvatarRecord>)recordAtIndex:(unsigned long long)arg1;
- (id<AVTAvatarStore>)recordStore;
@end

