//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet;

@interface KGElementIdentifierSet : NSObject
{
    struct Bitmap _bitmap;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long firstElement;
@property (readonly, copy, nonatomic) NSArray *indexArray;
@property (readonly, copy, nonatomic) NSIndexSet *indexSet;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct Bitmap *)bitmap;
- (BOOL)containsIdentifier:(unsigned long long)arg1;
- (id)copy;
- (unsigned long long)elementAtOffset:(unsigned long long)arg1;
- (void)enumerateIdentifiersWithBlock:(CDUnknownBlockType)arg1;
- (id)extractRangeByIndex:(struct _NSRange)arg1;
- (unsigned long long)hash;
- (id)identifierSetByAddingIdentifier:(unsigned long long)arg1;
- (id)identifierSetByFormingUnion:(id)arg1;
- (id)identifierSetByIntersectingIdentifierSet:(id)arg1;
- (id)identifierSetByRemovingIdentifier:(unsigned long long)arg1;
- (id)identifierSetBySubtractingIdentifierSet:(id)arg1;
- (id)init;
- (id)initWithBitmap:(const struct Bitmap *)arg1;
- (id)initWithElementIdentifier:(unsigned long long)arg1;
- (id)initWithIndexArray:(id)arg1;
- (id)initWithIndexSet:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToElementIdentifierSet:(id)arg1;
- (struct Bitmap *)mutableBitmap;
- (id)mutableCopy;
- (unsigned long long)randomElement;

@end

