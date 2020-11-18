//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UICollectionPreferredSizes-Protocol.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSSet, NSString;
@protocol _UICollectionLayoutAuxillaryOffsets;

__attribute__((visibility("hidden")))
@interface _UICollectionPreferredSizes : NSObject <_UICollectionPreferredSizes, NSCopying>
{
    NSMutableDictionary *_sizes;
    NSMutableIndexSet *_indexes;
    NSMutableDictionary *_supplementarySizesDict;
    long long _frameOffset;
    id<_UICollectionLayoutAuxillaryOffsets> _supplementaryBaseOffsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *elementKinds;
@property (nonatomic) long long frameOffset; // @synthesize frameOffset=_frameOffset;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSIndexSet *indexes;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<_UICollectionLayoutAuxillaryOffsets> supplementaryBaseOffsets; // @synthesize supplementaryBaseOffsets=_supplementaryBaseOffsets;

- (void).cxx_destruct;
- (void)addPreferredSize:(id)arg1 forSupplementaryWithElementKind:(id)arg2 atIndex:(long long)arg3;
- (BOOL)containsSupplementaryOffsets:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)hasSizes;
- (id)init;
- (id)initWithSizes:(id)arg1 indexes:(id)arg2 supplementarySizesDict:(id)arg3 frameOffset:(long long)arg4 supplementaryBaseOffsets:(id)arg5;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)preferredSizesApplyingFrameOffset:(long long)arg1 supplementaryBaseOffsets:(id)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;

@end

