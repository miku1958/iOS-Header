//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSUUID, TSPObject, TSPObjectContext, TSPObjectUUIDMap;

@protocol TSPObjectDelegate

@property (readonly, nonatomic) TSPObjectContext *context;

- (void)beginIgnoringModificationsForObject:(TSPObject *)arg1;
- (BOOL)canSetObjectUUIDForObject:(TSPObject *)arg1;
- (void)endIgnoringModificationsForObject:(TSPObject *)arg1;
- (BOOL)isObjectInDocument:(TSPObject *)arg1;
- (long long)modifyObjectTokenForNewObject;
- (long long)newObjectIdentifier;
- (NSUUID *)newObjectUUIDForObject:(TSPObject *)arg1 uuidNamespace:(unsigned char)arg2 offset:(unsigned long long)arg3 ignoringBaseUUIDForObjectUUID:(BOOL)arg4 requireDeterministicUUID:(BOOL)arg5;
- (TSPObjectUUIDMap *)objectUUIDMap;
- (void)willModifyObject:(TSPObject *)arg1 options:(unsigned long long)arg2;
@end

