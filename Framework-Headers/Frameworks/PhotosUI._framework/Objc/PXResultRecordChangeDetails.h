//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHFetchResultChangeDetails, PXResultRecord;

@interface PXResultRecordChangeDetails : NSObject
{
    PXResultRecord *_resultRecordBeforeChanges;
    PXResultRecord *_resultRecordAfterChanges;
    PHFetchResultChangeDetails *_exposedFetchResultChangeDetails;
}

@property (readonly, nonatomic) PHFetchResultChangeDetails *exposedFetchResultChangeDetails; // @synthesize exposedFetchResultChangeDetails=_exposedFetchResultChangeDetails;
@property (readonly, nonatomic) PXResultRecord *resultRecordAfterChanges; // @synthesize resultRecordAfterChanges=_resultRecordAfterChanges;
@property (readonly, nonatomic) PXResultRecord *resultRecordBeforeChanges; // @synthesize resultRecordBeforeChanges=_resultRecordBeforeChanges;

+ (id)resultRecordChangeDetailsFor:(id)arg1 withChange:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResultRecordBeforeChanges:(id)arg1 resultRecordAfterChanges:(id)arg2 exposedFetchResultChangeDetails:(id)arg3;

@end

