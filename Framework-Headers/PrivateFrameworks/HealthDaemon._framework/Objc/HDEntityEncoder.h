//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, HDSQLiteDatabase, NSDictionary;

@interface HDEntityEncoder : NSObject
{
    HDProfile *_profile;
    HDSQLiteDatabase *_database;
    Class _entityClass;
    NSDictionary *_encodingOptions;
    CDUnknownBlockType _authorizationFilter;
    long long _purpose;
    HDEntityEncoder *_superclassEncoder;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType authorizationFilter; // @synthesize authorizationFilter=_authorizationFilter;
@property (readonly, nonatomic) HDSQLiteDatabase *database; // @synthesize database=_database;
@property (readonly, copy, nonatomic) NSDictionary *encodingOptions; // @synthesize encodingOptions=_encodingOptions;
@property (readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
@property (readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (readonly, nonatomic) long long purpose; // @synthesize purpose=_purpose;
@property (readonly, nonatomic) HDEntityEncoder *superclassEncoder; // @synthesize superclassEncoder=_superclassEncoder;

+ (long long)estimatedEncodedSize;
- (void).cxx_destruct;
- (void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (void)finish;
- (BOOL)generateCodableRepresentationsForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 maxBytesPerRepresentation:(long long)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 database:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(CDUnknownBlockType)arg6;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)orderedProperties;

@end

