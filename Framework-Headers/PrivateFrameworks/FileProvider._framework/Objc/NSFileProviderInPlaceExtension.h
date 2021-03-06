//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/NSFileProviderExtension.h>

@interface NSFileProviderInPlaceExtension : NSFileProviderExtension
{
}

- (id)URLForItemWithPersistentIdentifier:(id)arg1;
- (void)createDirectoryWithName:(id)arg1 inParentItemIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importDocumentAtURL:(id)arg1 toParentItemIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)itemChangedAtURL:(id)arg1;
- (id)persistentIdentifierForItemAtURL:(id)arg1;
- (void)providePlaceholderAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)renameItemWithIdentifier:(id)arg1 toName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reparentItemWithIdentifier:(id)arg1 toParentItemWithIdentifier:(id)arg2 newName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setFavoriteRank:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLastUsedDate:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setTagData:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startProvidingItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopProvidingItemAtURL:(id)arg1;
- (void)trashItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)untrashItemWithIdentifier:(id)arg1 toParentItemIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

