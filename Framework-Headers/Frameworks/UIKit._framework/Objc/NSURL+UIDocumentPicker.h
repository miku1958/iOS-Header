//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (UIDocumentPicker)
+ (id)ui_URLFromExportBookmark:(id)arg1;
+ (id)ui_cloudDocsContainerURL;
+ (id)ui_incomingDirectory:(BOOL)arg1;
- (id)ui_bookmarkForExportWithError:(id *)arg1;
- (BOOL)ui_canOpenInPlace;
- (BOOL)ui_hasReadSandboxExtended;
- (BOOL)ui_hasSandboxExtendedForClass:(const char *)arg1;
- (BOOL)ui_isFileProviderURL;
- (BOOL)ui_isUnfulfilledPromiseURL;
- (id)ui_issueReadSandboxExtensionWithError:(id *)arg1;
- (id)ui_issueReadWriteSandboxExtensionWithError:(id *)arg1;
- (id)ui_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;
- (id)ui_resolveOnDiskBookmarkAndPromise;
- (void)ui_scheduleForCleanup;
- (void)ui_setIsFileProviderURL:(BOOL)arg1;
@end

