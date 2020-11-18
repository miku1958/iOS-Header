//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface VSKeychainEditingContext : NSObject
{
    NSMutableSet *_items;
}

@property (readonly, nonatomic) NSSet *deletedItems;
@property (readonly, nonatomic) NSSet *insertedItems;
@property (strong, nonatomic) NSMutableSet *items; // @synthesize items=_items;
@property (readonly, nonatomic) NSSet *registeredItems;
@property (readonly, nonatomic) NSSet *updatedItems;

- (void).cxx_destruct;
- (struct __CFDictionary *)_createQueryForItemValues:(id)arg1 withItemKind:(id)arg2;
- (id)_findOrCreateItemForCommittedValues:(id)arg1 withItemKind:(id)arg2;
- (void)_populateErrors:(id)arg1 withResult:(int)arg2 affectingItem:(id)arg3;
- (void)_populateQuery:(struct __CFDictionary *)arg1 usingPredicate:(id)arg2 withItemKind:(id)arg3;
- (void)_populateResult:(id)arg1 withItemOfKind:(id)arg2 fromMatch:(struct __CFDictionary *)arg3;
- (void)_populateUserInfoDictionary:(id)arg1 withSecErrorCode:(int)arg2;
- (id)_subsetOfRegisteredItemsWithKeyPath:(id)arg1;
- (void)deleteItem:(id)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (id)init;
- (void)insertItem:(id)arg1;
- (BOOL)save:(id *)arg1;

@end
