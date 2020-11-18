//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface RLMSchema : NSObject <NSCopying>
{
    NSArray *_objectSchema;
    struct Schema _objectStoreSchema;
    NSMutableDictionary *_objectSchemaByName;
}

@property (copy, nonatomic) NSArray *objectSchema;
@property (strong, nonatomic) NSMutableDictionary *objectSchemaByName; // @synthesize objectSchemaByName=_objectSchemaByName;

+ (Class)classForString:(id)arg1;
+ (id)dynamicSchemaFromObjectStoreSchema:(const struct Schema *)arg1;
+ (id)partialPrivateSharedSchema;
+ (id)partialSharedSchema;
+ (id)schemaWithObjectClasses:(id)arg1;
+ (id)sharedSchema;
+ (id)sharedSchemaForClass:(Class)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (BOOL)isEqualToSchema:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (struct Schema)objectStoreCopy;
- (id)schemaForClassName:(id)arg1;

@end
