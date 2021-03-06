//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSync/_TtC8MapsSync21MapsSyncObjectWrapper.h>

@class MISSING_TYPE, NSDate, NSManagedObjectContext, NSString, NSUUID;

@interface _TtC8MapsSync16MapsSyncBaseItem : _TtC8MapsSync21MapsSyncObjectWrapper
{
    MISSING_TYPE *_identifier;
    MISSING_TYPE *_createTime;
    MISSING_TYPE *_modificationTime;
    MISSING_TYPE *_positionIndex;
    MISSING_TYPE *_editBlocks;
    MISSING_TYPE *_readContext;
    MISSING_TYPE *_saveObjectSignpost;
}

@property (nonatomic, copy) NSDate *_createTime;
@property (nonatomic, copy) NSUUID *_identifier;
@property (nonatomic, copy) NSDate *_modificationTime;
@property (nonatomic) long long _positionIndex; // @synthesize _positionIndex;
@property (nonatomic, strong) NSManagedObjectContext *_readContext; // @synthesize _readContext;
@property (nonatomic, readonly) NSDate *createTime;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSDate *modificationTime;
@property (nonatomic, readonly) long long positionIndex;

+ (id)_callbackQueue;
+ (id)_queue;
- (void).cxx_destruct;
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;
- (id)callCleanInObjc:(id)arg1;
- (void)commitEditsWithCompletion:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(void *)arg1;
- (void)deleteWithCompletion:(CDUnknownBlockType)arg1;
- (void)executeOnFirstSave:(id)arg1;
- (id)init;
- (id)initWithObject:(id)arg1;
- (BOOL)isDuplicateOfOther:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (id)mutableObject:(id)arg1;
- (Class)mutableObjectClass;
- (id)performEditsWithoutSavingWithCompletion:(CDUnknownBlockType)arg1;
- (void)persistObject:(id)arg1 saveContext:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPropertiesWithObject:(id)arg1;
- (void)setReadContextWithContext:(id)arg1;
- (id)validate;

@end

