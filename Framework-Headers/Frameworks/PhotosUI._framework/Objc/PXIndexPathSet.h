//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSMutableCopying-Protocol.h>

@class NSMutableDictionary;

@interface PXIndexPathSet : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *__sectionIndexesByDataSourceIdentifier;
    NSMutableDictionary *__itemIndexesBySectionByDataSourceIdentifier;
    NSMutableDictionary *__subitemIndexesByItemBySectionByDataSourceIdentifier;
}

@property (readonly, nonatomic) NSMutableDictionary *_itemIndexesBySectionByDataSourceIdentifier; // @synthesize _itemIndexesBySectionByDataSourceIdentifier=__itemIndexesBySectionByDataSourceIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_sectionIndexesByDataSourceIdentifier; // @synthesize _sectionIndexesByDataSourceIdentifier=__sectionIndexesByDataSourceIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_subitemIndexesByItemBySectionByDataSourceIdentifier; // @synthesize _subitemIndexesByItemBySectionByDataSourceIdentifier=__subitemIndexesByItemBySectionByDataSourceIdentifier;
@property (readonly, nonatomic) long long count;

+ (id)indexPathSet;
+ (id)indexPathSetWithIndexPath:(struct PXSimpleIndexPath)arg1;
- (void).cxx_destruct;
- (BOOL)containsIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)enumerateAllIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDataSourceIdentifiers:(CDUnknownBlockType)arg1;
- (void)enumerateItemIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemIndexSetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionIndexSetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubitemIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubitemIndexSetsUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
