//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSCyclerOperation;

@interface WBSCyclerTestSuiteBookmarkAuxiliary : NSObject
{
    WBSCyclerOperation *_initialClearOperation;
    WBSCyclerOperation *_resetToDAVModeOperation;
    WBSCyclerOperation *_generateDAVServerIDsForExistingBookmarksOperation;
    WBSCyclerOperation *_cloudKitMigrationOperation;
    WBSCyclerOperation *_clearLocalDataOperation;
    float _operationBackoffRatio;
}

@property (readonly, nonatomic) float operationBackoffRatio; // @synthesize operationBackoffRatio=_operationBackoffRatio;

- (void).cxx_destruct;
- (void)_attemptCloudKitMigrationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_attemptInitialClearWithTarget:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_attemptResetToDAVModeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_attemptToClearDataWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_attemptToGenerateDAVServerIDsForExistingBookmarksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_attributeStringForBookmark:(id)arg1 multiline:(BOOL)arg2;
- (id)_descriptionForBookmark:(id)arg1;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;
- (id)_expandedDescriptionForBookmark:(id)arg1;
- (id)_formattedStringForBookmark:(id)arg1 indentationLevel:(unsigned long long)arg2;
- (void)fetchAndValidateBookmarksWithExpectedBookmarks:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)hasPerformedOperation:(long long)arg1;
- (id)init;
- (void)performOperation:(long long)arg1 withTarget:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performOperation:(long long)arg1 withTarget:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)resetOperation:(long long)arg1;
- (id)validateBookmarks:(id)arg1 expectingBookmarks:(id)arg2 context:(id)arg3;

@end

