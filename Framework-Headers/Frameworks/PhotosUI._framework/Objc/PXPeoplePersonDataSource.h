//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPeopleDataSource.h>

#import <PhotosUICore/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSString;

@interface PXPeoplePersonDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver>
{
    long long _personType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long personType; // @synthesize personType=_personType;
@property (readonly) Class superclass;

+ (id)hiddenPeopleDataSourceWithFetchLimit:(unsigned long long)arg1;
+ (id)importantPeopleDataSourceWithFetchLimit:(unsigned long long)arg1;
+ (CDUnknownBlockType)manualOrderComparator;
+ (id)otherPeopleDataSourceWithFetchLimit:(unsigned long long)arg1;
- (id)_applyChanges:(id)arg1;
- (void)_asyncLoadImageForItem:(id)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)_itemsArrayFromObjects:(id)arg1;
- (id)_membersForModelObjects:(id)arg1;
- (void)_updateMember:(id)arg1 WithModelObject:(id)arg2;
- (void)cancelImageLoadingForItem:(id)arg1;
- (CDUnknownBlockType)defaultComparator;
- (id)initWithName:(id)arg1 fetchResultBlock:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 objects:(id)arg2;
- (id)initWithName:(id)arg1 personType:(long long)arg2 fetchLimit:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 personType:(long long)arg2 objects:(id)arg3;
- (void)photoLibraryDidChange:(id)arg1;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;
- (id)titleAtIndex:(unsigned long long)arg1;

@end

