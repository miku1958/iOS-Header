//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNPhotoPickerProviderGroupDelegate-Protocol.h>

@class CNContactViewCache, CNMutableContact, CNPhotoPickerVariantsManager, NSArray, NSIndexPath, NSString;
@protocol AVTAvatarStore, CNPhotoPickerProviderGroupDelegate;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerDataSource : NSObject <CNPhotoPickerProviderGroupDelegate>
{
    BOOL _allowsPhotoLibraryAccess;
    CNMutableContact *_contact;
    NSIndexPath *_activePhotoIndexPath;
    CNContactViewCache *_contactViewCache;
    id<CNPhotoPickerProviderGroupDelegate> _delegate;
    CNPhotoPickerVariantsManager *_variantsManager;
    id<AVTAvatarStore> _avatarStore;
    NSArray *_providerGroups;
}

@property (strong, nonatomic) NSIndexPath *activePhotoIndexPath; // @synthesize activePhotoIndexPath=_activePhotoIndexPath;
@property (nonatomic) BOOL allowsPhotoLibraryAccess; // @synthesize allowsPhotoLibraryAccess=_allowsPhotoLibraryAccess;
@property (readonly, nonatomic) id<AVTAvatarStore> avatarStore; // @synthesize avatarStore=_avatarStore;
@property (strong, nonatomic) CNMutableContact *contact; // @synthesize contact=_contact;
@property (readonly, nonatomic) CNContactViewCache *contactViewCache; // @synthesize contactViewCache=_contactViewCache;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNPhotoPickerProviderGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long itemsPerRow;
@property (readonly, nonatomic) NSArray *providerGroups; // @synthesize providerGroups=_providerGroups;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;

+ (id)avatarStore;
- (void).cxx_destruct;
- (id)actionTitleForSection:(long long)arg1;
- (id)findActiveIndexPathInGroup:(id)arg1 withImageData:(id)arg2;
- (id)indexOfAddedItem:(id)arg1 inGroupOfType:(long long)arg2;
- (id)initWithContact:(id)arg1 contactViewCache:(id)arg2 photoPickerConfiguration:(id)arg3;
- (id)initWithContact:(id)arg1 contactViewCache:(id)arg2 providerGroups:(id)arg3 avatarStore:(id)arg4;
- (BOOL)isItemAtIndexPathAddItem:(id)arg1;
- (void)loadProviderGroupsItemsForSize:(struct CGSize)arg1 itemsPerRow:(double)arg2 scale:(double)arg3 RTL:(BOOL)arg4;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)photoPickerProviderGroup:(id)arg1 didUpdateItem:(id)arg2;
- (void)photoPickerProviderGroupDidUpdate:(id)arg1;
- (id)providerGroupAtIndexPath:(id)arg1;
- (id)providerItemAtIndexPath:(id)arg1;
- (id)removeItem:(id)arg1;
- (id)titleForSection:(long long)arg1;

@end
