//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PHAPhotoLibraryList : NSObject
{
    NSMutableDictionary *_photoLibrariesByPath;
}

@property (readonly) unsigned long long count;
@property (strong) NSMutableDictionary *photoLibrariesByPath; // @synthesize photoLibrariesByPath=_photoLibrariesByPath;

- (void).cxx_destruct;
- (void)addPhotoLibraryAtURL:(id)arg1;
- (void)enumeratePhotoLibrariesWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)removeAllPhotoLibraries;
- (void)removePhotoLibraryAtURL:(id)arg1;
- (void)saveToPersistentStorage;

@end

