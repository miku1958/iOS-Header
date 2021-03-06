//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDCloudChange, NSMapTable, NSString, NSUUID;

@interface HMDCloudChangeNode : HMFObject
{
    BOOL _forceDelete;
    BOOL _orphaned;
    NSString *_recordName;
    NSUUID *_uuid;
    NSUUID *_parentUuid;
    NSString *_type;
    HMDCloudChangeNode *_parent;
    HMDCloudChange *_change;
    NSMapTable *_children;
}

@property (strong, nonatomic) HMDCloudChange *change; // @synthesize change=_change;
@property (strong, nonatomic) NSMapTable *children; // @synthesize children=_children;
@property (readonly, nonatomic) BOOL forceDelete; // @synthesize forceDelete=_forceDelete;
@property (readonly, nonatomic) BOOL orphaned; // @synthesize orphaned=_orphaned;
@property (weak, nonatomic) HMDCloudChangeNode *parent; // @synthesize parent=_parent;
@property (copy, nonatomic) NSUUID *parentUuid; // @synthesize parentUuid=_parentUuid;
@property (copy, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;
@property (copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (id)shortDescription;
- (void).cxx_destruct;
- (id)_allNodesInBranch;
- (id)_initWithUUID:(id)arg1 parentUUID:(id)arg2 recordName:(id)arg3 type:(id)arg4 change:(id)arg5;
- (void)_markBranchOrphaned;
- (void)_updateWithChange:(id)arg1;
- (void)_updateWithCloudRecord:(id)arg1;
- (void)_updateWithModel:(id)arg1;
- (void)addChild:(id)arg1;
- (void)deleteChildren;
- (id)description;
- (id)init;
- (id)initWithChange:(id)arg1;
- (id)initWithCloudRecord:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithRecordMapping:(id)arg1;
- (void)logChangeTreeWithIndent:(id)arg1;
- (void)removeChild:(id)arg1;
- (id)shortDescription;
- (void)updateRecordMapping:(id)arg1;

@end

