//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>
#import <TSUtility/NSMutableCopying-Protocol.h>

@interface TSUUUIDSet : NSObject <NSCopying, NSMutableCopying>
{
    unsigned int _index;
    UUIDSet_bcc2db41 _uuidSet;
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned int index; // @synthesize index=_index;

- (id).cxx_construct;
- (void).cxx_destruct;
- (UUIDData_60906e89)anyUuid;
- (BOOL)containsUuid:(const UUIDData_60906e89 *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)expandedSetWithUuid:(const UUIDData_60906e89 *)arg1;
- (id)expandedSetWithUuids:(const UUIDSet_bcc2db41 *)arg1;
- (id)expandedSetWithUuidsFromVector:(const vector_4dc5f307 *)arg1;
- (void)foreachUuid:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)initWithUUID:(const UUIDData_60906e89 *)arg1;
- (id)initWithUUIDSet:(id)arg1;
- (id)initWithUUIDVector:(const vector_4dc5f307 *)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)isAllInvalid;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSubsetOf:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)p_addUUID:(const UUIDData_60906e89 *)arg1;
- (void)p_addUUIDs:(const UUIDSet_bcc2db41 *)arg1;
- (void)p_addUUIDsFromVector:(const vector_4dc5f307 *)arg1;
- (BOOL)p_removeUUID:(const UUIDData_60906e89 *)arg1;
- (void)p_removeUUIDs:(const UUIDSet_bcc2db41 *)arg1;
- (void)p_removeUUIDsFromVector:(const vector_4dc5f307 *)arg1;
- (void)p_reserve:(unsigned long long)arg1;
- (id)reducedSetMinusUuid:(const UUIDData_60906e89 *)arg1;
- (id)reducedSetMinusUuids:(const UUIDSet_bcc2db41 *)arg1;
- (id)reducedSetMinusUuidsFromVector:(const vector_4dc5f307 *)arg1;
- (id)setByUnionWithSet:(id)arg1;
- (void)setIndex:(unsigned int)arg1;
- (vector_4dc5f307)uuidsAsVector;

@end

