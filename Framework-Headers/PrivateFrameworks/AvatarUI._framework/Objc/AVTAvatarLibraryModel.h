//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarEditorViewControllerDelegate-Protocol.h>

@class AVTAvatarLibraryCreateNewItem, AVTUIEnvironment, NSArray, NSMutableArray, NSString;
@protocol AVTAvatarLibraryModelDelegate, AVTAvatarStoreInternal;

@interface AVTAvatarLibraryModel : NSObject <AVTAvatarEditorViewControllerDelegate>
{
    BOOL _isCreatingAvatar;
    id<AVTAvatarLibraryModelDelegate> _delegate;
    id<AVTAvatarStoreInternal> _avatarStore;
    AVTUIEnvironment *_environment;
    AVTAvatarLibraryCreateNewItem *_createNewItem;
    NSMutableArray *_mutableLibraryItems;
}

@property (readonly, nonatomic) id<AVTAvatarStoreInternal> avatarStore; // @synthesize avatarStore=_avatarStore;
@property (readonly, nonatomic) AVTAvatarLibraryCreateNewItem *createNewItem; // @synthesize createNewItem=_createNewItem;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTAvatarLibraryModelDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isCreatingAvatar; // @synthesize isCreatingAvatar=_isCreatingAvatar;
@property (readonly, nonatomic) NSArray *libraryItems;
@property (readonly, nonatomic) NSMutableArray *mutableLibraryItems; // @synthesize mutableLibraryItems=_mutableLibraryItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (long long)indexForRecord:(id)arg1;
- (id)initWithAvatarStore:(id)arg1 environment:(id)arg2;
- (void)insertItemForRecord:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)libraryItemsFromAvatarRecords:(id)arg1;
- (void)load;
- (void)performActionOnItemAtIndex:(unsigned long long)arg1;
- (void)presentActionSheetForRecordItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)presentEditor:(id)arg1 forCreating:(BOOL)arg2;
- (void)presetShareSheetWithRecords:(id)arg1;
- (void)reloadDataForRecords:(id)arg1;
- (void)removeItemForRecordAtIndex:(unsigned long long)arg1;
- (void)updateForCreatedRecord:(id)arg1;
- (void)updateForEditedRecord:(id)arg1;

@end

