//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class CKRecord, HMDBackingStoreCacheGroup, HMDBackingStoreModelObject, NSData, NSString;

@interface HMDBackingStoreCacheUpdateRecordOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheGroup *_group;
    NSString *_recordName;
    CKRecord *_record;
    NSData *_data;
    HMDBackingStoreModelObject *_model;
    unsigned long long _encoding;
}

@property (readonly) NSData *data; // @synthesize data=_data;
@property (readonly) unsigned long long encoding; // @synthesize encoding=_encoding;
@property (readonly) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
@property (readonly) HMDBackingStoreModelObject *model; // @synthesize model=_model;
@property (readonly) CKRecord *record; // @synthesize record=_record;
@property (readonly) NSString *recordName; // @synthesize recordName=_recordName;

- (void).cxx_destruct;
- (id)initWithGroup:(id)arg1 name:(id)arg2 model:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (id)initWithGroup:(id)arg1 name:(id)arg2 record:(id)arg3 data:(id)arg4 encoding:(unsigned long long)arg5 model:(id)arg6 resultBlock:(CDUnknownBlockType)arg7;
- (id)initWithGroup:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(unsigned long long)arg4 resultBlock:(CDUnknownBlockType)arg5;
- (id)initWithGroup:(id)arg1 record:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (id)mainReturningError;

@end

