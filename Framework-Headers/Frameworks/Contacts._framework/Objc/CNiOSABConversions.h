//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNiOSABConversions : NSObject
{
}

+ (id)accountFromABAccount:(void *)arg1;
+ (id)accountsFromABAccounts:(struct __CFArray *)arg1;
+ (id)arrayByMappingTransform:(CDUnknownBlockType)arg1 onCFArray:(struct __CFArray *)arg2;
+ (id)contactFromABPerson:(void *)arg1 keysToConvert:(id)arg2;
+ (id)contactFromABPerson:(void *)arg1 uniqueKeysToConvert:(id)arg2;
+ (id)contactIdentifierFromABPerson:(void *)arg1;
+ (id)contactMatchInfoFromABMatchMetadataDictionary:(id)arg1;
+ (id)contactPropertiesByABPropertyID;
+ (id)containerFromABSource:(void *)arg1 remote:(BOOL)arg2 includeDisabledSources:(BOOL)arg3;
+ (id)containersFromABSources:(struct __CFArray *)arg1 remote:(BOOL)arg2 includeDisabledSources:(BOOL)arg3;
+ (id)groupFromABGroup:(void *)arg1;
+ (id)groupsFromABGroups:(struct __CFArray *)arg1;
+ (CDUnknownBlockType)personToContactTransformWithKeysToFetch:(id)arg1;
+ (void)updateContact:(id)arg1 fromABPerson:(void *)arg2 keysToConvert:(id)arg3 availableKeys:(id *)arg4;

@end

