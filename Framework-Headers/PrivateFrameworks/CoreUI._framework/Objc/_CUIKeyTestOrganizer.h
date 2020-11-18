//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _CUIKeyTestOrganizer : NSObject
{
    struct _renditionkeytoken originalKey[22];
    NSArray *orderedNonZeroFlexibleAttributes;
    unsigned long long flexAttributesCount;
    struct _renditionkeytoken testKey[22];
    unsigned long long chooseCount;
    unsigned long long subchooseCount;
}

- (unsigned long long)_attributeToBumpIndex;
- (void)_bumpTestKey;
- (BOOL)_bumpTestKeyAttributeIndex:(unsigned long long)arg1;
- (id)_nonZeroFlexibleAttributesInKey:(const struct _renditionkeytoken *)arg1;
- (void)dealloc;
- (id)initWithRenditionKey:(const struct _renditionkeytoken *)arg1;
- (struct _renditionkeytoken *)nextKey;

@end
