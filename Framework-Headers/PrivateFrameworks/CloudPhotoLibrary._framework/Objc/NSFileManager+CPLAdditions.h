//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (CPLAdditions)
- (BOOL)cplCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)cplFileExistsAtURL:(id)arg1;
- (BOOL)cplIsFileDoesNotExistError:(id)arg1;
- (BOOL)cplIsFileExistsError:(id)arg1;
- (BOOL)cplMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
@end

