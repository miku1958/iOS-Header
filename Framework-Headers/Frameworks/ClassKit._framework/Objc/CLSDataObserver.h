//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassKit/CLSChangeNotifiable-Protocol.h>
#import <ClassKit/CLSPredicateValueNormalizer-Protocol.h>

@class CLSDataStore, NSArray, NSPredicate, NSString;

@interface CLSDataObserver : NSObject <CLSPredicateValueNormalizer, CLSChangeNotifiable>
{
    BOOL _invalidated;
    Class _objectType;
    NSString *_observerID;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    CDUnknownBlockType _dataChanged;
    CLSDataStore *_dataStore;
    unsigned long long _changeTag;
}

@property unsigned long long changeTag; // @synthesize changeTag=_changeTag;
@property (readonly, nonatomic) NSString *className;
@property (copy, nonatomic) CDUnknownBlockType dataChanged; // @synthesize dataChanged=_dataChanged;
@property (weak, nonatomic) CLSDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property (readonly, nonatomic) Class objectType; // @synthesize objectType=_objectType;
@property (readonly, nonatomic) NSString *observerID; // @synthesize observerID=_observerID;
@property (readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property (copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property (readonly) Class superclass;

+ (id)predicateForObjectWithObjectID:(id)arg1;
+ (id)predicateForObjectsWithIdentifier:(id)arg1;
+ (id)predicateForObjectsWithObjectIDs:(id)arg1;
+ (id)predicateForObjectsWithParentObjectID:(id)arg1;
+ (id)predicateForObjectsWithParentObjectID:(id)arg1 andRole:(unsigned long long)arg2;
+ (id)predicateForObjectsWithPersonID:(id)arg1 andRole:(unsigned long long)arg2;
- (void).cxx_destruct;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_itemChanged:(unsigned long long)arg1;
- (id)init;
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id *)arg4;
- (id)normalizeKeyPath:(id)arg1 forValue:(id)arg2;
- (id)normalizedValue:(id)arg1 forKeyPath:(id)arg2;
- (void)reset;

@end
