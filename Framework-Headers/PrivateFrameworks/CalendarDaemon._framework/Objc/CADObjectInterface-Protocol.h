//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol CADObjectInterface
- (void)CADDatabaseDeleteObjectsWithObjectIDs:(NSArray *)arg1 reply:(void (^)(int))arg2;
- (void)CADDatabaseInsertObjectsWithTempObjectIDs:(NSArray *)arg1 reply:(void (^)(int))arg2;
- (void)CADObject:(CDStruct_1ef3fb1f)arg1 getDataPropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSData *))arg3;
- (void)CADObject:(CDStruct_1ef3fb1f)arg1 getDatePropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSDate *))arg3;
- (void)CADObject:(CDStruct_1ef3fb1f)arg1 getNumberPropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSNumber *))arg3;
- (void)CADObject:(CDStruct_1ef3fb1f)arg1 getPropertiesWithNames:(NSArray *)arg2 reply:(void (^)(int, NSDictionary *))arg3;
- (void)CADObject:(CDStruct_1ef3fb1f)arg1 getPropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSObject<NSSecureCoding> *))arg3;
- (void)CADObject:(CDStruct_1ef3fb1f)arg1 getRelatedObjectWithRelationName:(NSString *)arg2 reply:(void (^)(int, struct))arg3;
- (void)CADObject:(CDStruct_1ef3fb1f)arg1 getRelatedObjectsWithRelationName:(NSString *)arg2 reply:(void (^)(int, NSSet *))arg3;
- (void)CADObject:(CDStruct_1ef3fb1f)arg1 getStringPropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSString *))arg3;
- (void)CADObject:(CDStruct_1ef3fb1f)arg1 setAttributes:(NSDictionary *)arg2 andRelations:(NSDictionary *)arg3 reply:(void (^)(int))arg4;
- (void)CADObjectExists:(CDStruct_1ef3fb1f)arg1 reply:(void (^)(int, BOOL))arg2;
- (void)CADObjectsExist:(NSArray *)arg1 reply:(void (^)(int, NSArray *))arg2;
@end

