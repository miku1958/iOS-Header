//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDFetchRecordChangesOperation, CKDFetchRecordChangesURLRequest, NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDFetchChangesRequestInfo : NSObject
{
    CKDFetchRecordChangesURLRequest *_request;
    CKDFetchRecordChangesOperation *_operation;
    NSObject<OS_dispatch_group> *_perRequestCallbackGroup;
    NSObject<OS_dispatch_group> *_perRequestGroup;
    NSObject<OS_dispatch_queue> *_perRequestCallbackQueue;
    NSMutableArray *_perRequestCallbackBlocks;
}

@property (weak, nonatomic) CKDFetchRecordChangesOperation *operation; // @synthesize operation=_operation;
@property (strong, nonatomic) NSMutableArray *perRequestCallbackBlocks; // @synthesize perRequestCallbackBlocks=_perRequestCallbackBlocks;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *perRequestCallbackGroup; // @synthesize perRequestCallbackGroup=_perRequestCallbackGroup;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *perRequestCallbackQueue; // @synthesize perRequestCallbackQueue=_perRequestCallbackQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *perRequestGroup; // @synthesize perRequestGroup=_perRequestGroup;
@property (strong, nonatomic) CKDFetchRecordChangesURLRequest *request; // @synthesize request=_request;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 operation:(id)arg2;

@end

