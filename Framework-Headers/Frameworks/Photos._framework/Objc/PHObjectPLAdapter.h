//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHFetchDictionaryAccessing-Protocol.h>
#import <Photos/PHMutableFetchDictionaryAccessing-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSString, PLManagedObject;

@interface PHObjectPLAdapter : NSObject <PHFetchDictionaryAccessing, PHMutableFetchDictionaryAccessing>
{
    PLManagedObject *_backingManagedObject;
    NSMutableOrderedSet *_ignoredKeys;
    NSMutableDictionary *_modifiedKeyValues;
}

@property (readonly, nonatomic) PLManagedObject *backingManagedObject; // @synthesize backingManagedObject=_backingManagedObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableOrderedSet *ignoredKeys; // @synthesize ignoredKeys=_ignoredKeys;
@property (strong, nonatomic) NSMutableDictionary *modifiedKeyValues; // @synthesize modifiedKeyValues=_modifiedKeyValues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPLManagedObject:(id)arg1;
- (id)mutableAccessingCopy;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectWithPropertySets:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

