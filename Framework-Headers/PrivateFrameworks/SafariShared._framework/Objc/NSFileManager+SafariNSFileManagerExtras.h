//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SafariNSFileManagerExtras)
- (id)_safari_containerDirectory;
- (id)_safari_safariLibraryDirectory;
- (id)safari_ensureDirectoryExists:(id)arg1;
- (BOOL)safari_removeFileAtURL:(id)arg1 error:(id *)arg2;
- (id)safari_settingsDirectory;
- (id)safari_subdirectoryWithName:(id)arg1 inUserDomainOfDirectory:(unsigned long long)arg2;
@end
