//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreRecordMapping-Protocol.h>

@class HMDBackingStoreCacheGroup, NSString, NSUUID;

@interface HMDBackingStoreCacheFetchRecordMappingResult : HMFObject <HMDBackingStoreRecordMapping>
{
    NSString *_recordName;
    NSUUID *_uuid;
    NSUUID *_parentUuid;
    NSString *_type;
    HMDBackingStoreCacheGroup *_group;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSUUID *parentUuid; // @synthesize parentUuid=_parentUuid;
@property (readonly, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

- (void).cxx_destruct;
- (id)initWithGroup:(id)arg1 recordName:(id)arg2 uuid:(id)arg3 parentUuid:(id)arg4 type:(id)arg5;

@end
