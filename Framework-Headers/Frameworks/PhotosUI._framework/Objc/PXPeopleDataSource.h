//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPredicate, NSString, PHFetchResult;
@protocol OS_dispatch_queue, PXPeopleDataSourceDelegate;

@interface PXPeopleDataSource : NSObject
{
    BOOL _disclosed;
    BOOL _useAsynchronousLoad;
    NSString *_name;
    unsigned long long _maximumNumberOfMembers;
    id<PXPeopleDataSourceDelegate> _delegate;
    NSString *_localizedDisclosedTitle;
    NSString *_localizedUndisclosedTitle;
    NSPredicate *_filterPredicate;
    CDUnknownBlockType _sortComparator;
    NSArray *_members;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    PHFetchResult *_objects;
    CDUnknownBlockType _reloadBlock;
}

@property (weak, nonatomic) id<PXPeopleDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (getter=isDisclosed) BOOL disclosed; // @synthesize disclosed=_disclosed;
@property (copy, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property (copy) NSString *localizedDisclosedTitle; // @synthesize localizedDisclosedTitle=_localizedDisclosedTitle;
@property (copy) NSString *localizedUndisclosedTitle; // @synthesize localizedUndisclosedTitle=_localizedUndisclosedTitle;
@property (nonatomic) unsigned long long maximumNumberOfMembers; // @synthesize maximumNumberOfMembers=_maximumNumberOfMembers;
@property (copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) unsigned long long numberOfMembers;
@property (strong, nonatomic) PHFetchResult *objects; // @synthesize objects=_objects;
@property (readonly, nonatomic) NSArray *persons;
@property (copy, nonatomic) CDUnknownBlockType reloadBlock; // @synthesize reloadBlock=_reloadBlock;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue; // @synthesize reloadQueue=_reloadQueue;
@property (copy, nonatomic) CDUnknownBlockType sortComparator; // @synthesize sortComparator=_sortComparator;
@property (readonly, nonatomic) BOOL useAsynchronousLoad; // @synthesize useAsynchronousLoad=_useAsynchronousLoad;

- (void).cxx_destruct;
- (void)_asyncLoadImageForItem:(id)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3 fastDisplayBlock:(CDUnknownBlockType)arg4;
- (id)_itemsArrayFromObjects:(id)arg1;
- (void)_setObjectsWithoutUpdate:(id)arg1;
- (void)_updateMembers;
- (void)dealloc;
- (CDUnknownBlockType)defaultComparator;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3 fastDisplayBlock:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 objects:(id)arg2;
- (id)initWithName:(id)arg1 objectsReloadBlock:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 objectsReloadBlock:(CDUnknownBlockType)arg2 asynchronousLoad:(BOOL)arg3 callbackDelegate:(id)arg4;
- (void)loadObjectsAndUpdateMembersWithCompletion:(CDUnknownBlockType)arg1;
- (id)localizedTitle;
- (id)memberAtIndex:(unsigned long long)arg1;
- (id)personAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoQuantityAtIndex:(unsigned long long)arg1;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;
- (id)titleAtIndex:(unsigned long long)arg1;

@end

