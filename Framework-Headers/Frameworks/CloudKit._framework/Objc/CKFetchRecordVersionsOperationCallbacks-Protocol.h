//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperationCallbacks-Protocol.h>

@class CKRecordID, NSArray, NSError;

@protocol CKFetchRecordVersionsOperationCallbacks <CKOperationCallbacks>
- (void)handleFetchForRecordID:(CKRecordID *)arg1 isDeleted:(BOOL)arg2 versions:(NSArray *)arg3 error:(NSError *)arg4;
@end
