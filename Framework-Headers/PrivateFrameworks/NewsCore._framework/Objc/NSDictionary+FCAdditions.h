//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (FCAdditions)
+ (id)fc_dictionary:(CDUnknownBlockType)arg1;
+ (id)fc_dictionaryByAddingEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2;
+ (id)fc_dictionaryFromArray:(id)arg1 keyBlock:(CDUnknownBlockType)arg2 valueBlock:(CDUnknownBlockType)arg3;
+ (id)fc_dictionaryFromJSON:(id)arg1;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueBlock:(CDUnknownBlockType)arg2;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueWithIndexBlock:(CDUnknownBlockType)arg2;
+ (id)fc_dictionaryWithObjects:(id)arg1 keyBlock:(CDUnknownBlockType)arg2;
- (id)fc_deepCopy;
- (id)fc_dictionaryByRemovingObjectForKey:(id)arg1;
- (id)fc_dictionaryBySwappingValuesAndKeys;
- (id)fc_dictionaryByTransformingKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryByTransformingKeysWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryByTransformingValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_dictionaryByTransformingValuesWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
- (id)fc_objectsForKeysWithoutMarker:(id)arg1;
- (id)fc_subdictionaryWithCopiesForKeys:(id)arg1;
- (id)fc_subdictionaryWithKeys:(id)arg1;
- (id)fr_descriptionWithKeyComparator:(CDUnknownBlockType)arg1;
- (id)jsonString;
@end
