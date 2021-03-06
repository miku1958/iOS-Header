//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXBaseDisplayCollection.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface PXImportAssetCollection : PXBaseDisplayCollection <NSCopying>
{
    NSObject<OS_dispatch_queue> *_assetQueue;
    NSMutableArray *_assetList;
    NSArray *_arrangedAssetList;
    NSMutableSet *_assetUUIDs;
    BOOL _needsSorting;
    BOOL _alreadyImportedGroup;
    NSString *_identifier;
}

@property (nonatomic) BOOL alreadyImportedGroup; // @synthesize alreadyImportedGroup=_alreadyImportedGroup;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

+ (id)dayFormatter;
- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (id)arrangedObjects;
- (void)arrangedObjects:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (long long)indexOfItem:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)localizedTitle;
- (long long)numberOfItems;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (id)unsortedObjects;

@end

