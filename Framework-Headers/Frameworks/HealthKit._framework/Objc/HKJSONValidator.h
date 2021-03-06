//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol NSCopying;

@interface HKJSONValidator : NSObject
{
    NSMutableDictionary *_subschemaCache;
    id<NSCopying> _schema;
}

@property (readonly, copy, nonatomic) id<NSCopying> schema; // @synthesize schema=_schema;

+ (void)registerSearchPath:(id)arg1;
+ (id)searchPaths;
+ (BOOL)validateJSONObject:(id)arg1 withSchemaNamed:(id)arg2 bundle:(id)arg3 error:(out id *)arg4;
- (void).cxx_destruct;
- (id)_loadSubschemaNamed:(id)arg1;
- (id)_mismatchErrorFromKeyStack:(id)arg1;
- (BOOL)_validateArray:(id)arg1 schema:(id)arg2 keyStack:(id)arg3;
- (BOOL)_validateBoolean:(id)arg1;
- (BOOL)_validateDictionary:(id)arg1 schema:(id)arg2 keyStack:(id)arg3;
- (BOOL)_validateFingerprintSHA256:(id)arg1;
- (BOOL)_validateJSONObject:(id)arg1 keyStack:(id)arg2;
- (BOOL)_validatePrimitive:(id)arg1 schema:(id)arg2 keyStack:(id)arg3;
- (BOOL)_validateTimezone:(id)arg1;
- (BOOL)_validateURL:(id)arg1;
- (BOOL)_validateValue:(id)arg1 schema:(id)arg2 keyStack:(id)arg3 root:(BOOL)arg4;
- (BOOL)_validateValue:(id)arg1 subschemaNamed:(id)arg2 keyStack:(id)arg3;
- (id)init;
- (id)initWithSchema:(id)arg1;
- (id)initWithSchema:(id)arg1 subschemaCache:(id)arg2;
- (id)initWithSchemaNamed:(id)arg1 bundle:(id)arg2;
- (BOOL)validateJSONObject:(id)arg1 error:(out id *)arg2;

@end

