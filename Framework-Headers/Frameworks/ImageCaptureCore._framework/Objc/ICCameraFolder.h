//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ImageCaptureCore/ICCameraItem.h>

@class NSArray, NSMutableArray;

@interface ICCameraFolder : ICCameraItem
{
    NSMutableArray *_files;
    NSMutableArray *_folders;
    struct os_unfair_lock_s _filesLock;
    struct os_unfair_lock_s _foldersLock;
}

@property (readonly, nonatomic) NSArray *contents;
@property (strong, nonatomic) NSMutableArray *files; // @synthesize files=_files;
@property (strong, nonatomic) NSMutableArray *folders; // @synthesize folders=_folders;

- (void)addFile:(id)arg1;
- (void)addFolder:(id)arg1;
- (BOOL)containsItem:(id)arg1;
- (void)dealloc;
- (void)deleteFile:(id)arg1;
- (void)deleteFolder:(id)arg1;
- (void)deleteItem:(id)arg1;
- (id)description;
- (BOOL)hasThumbnail;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (void)lockFiles;
- (void)lockFolders;
- (id)metadata;
- (void)requestMetadata;
- (void)requestThumbnail;
- (struct CGImage *)thumbnail;
- (void)unlockFiles;
- (void)unlockFolders;
- (id)valueForUndefinedKey:(id)arg1;

@end

