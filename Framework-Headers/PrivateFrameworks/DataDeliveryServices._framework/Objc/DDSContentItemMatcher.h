//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DDSContentItemMatcher : NSObject
{
}

+ (BOOL)_anyDictionaryIn:(id)arg1 matches:(id)arg2 shouldLenientlyMatch:(CDUnknownBlockType)arg3;
+ (BOOL)_anyStringIn:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3;
+ (BOOL)_dictionary:(id)arg1 matches:(id)arg2 acceptUnspecifiedAttribute:(BOOL)arg3 lenientMatch:(BOOL)arg4;
+ (BOOL)_string:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3;
+ (id)assetContentItemsMatching:(id)arg1 contentItems:(id)arg2 parentAsset:(id)arg3;
+ (BOOL)shouldLenientlyMatchWithContentItemsForRegion:(id)arg1;

@end

