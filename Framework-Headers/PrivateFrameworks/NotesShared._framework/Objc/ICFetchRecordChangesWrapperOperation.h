//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CKRecordZoneID, NSMutableSet, NSOperationQueue;

@interface ICFetchRecordChangesWrapperOperation : NSOperation
{
    CKRecordZoneID *_recordZoneID;
    NSMutableSet *_completionHandlers;
    NSOperationQueue *_operationQueue;
}

@property (strong, nonatomic) NSMutableSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (strong, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;

- (void).cxx_destruct;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)init;
- (id)initWithRecordZoneID:(id)arg1;
- (void)main;

@end
