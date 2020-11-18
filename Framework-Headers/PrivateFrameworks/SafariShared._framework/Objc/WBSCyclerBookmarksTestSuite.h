//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCyclerTestSuite-Protocol.h>

@class NSArray, NSString, WBSCyclerBookmarkListRepresentation, WBSCyclerBookmarkOperationContext, WBSCyclerTestSuiteBookmarkAuxiliary;

@interface WBSCyclerBookmarksTestSuite : NSObject <WBSCyclerTestSuite>
{
    NSArray *_operations;
    NSArray *_relativeProbabilitiesForOperations;
    WBSCyclerBookmarkOperationContext *_operationContext;
    WBSCyclerTestSuiteBookmarkAuxiliary *_bookmarkAuxiliary;
    unsigned long long _iterationCount;
    WBSCyclerBookmarkListRepresentation *_expectedTopLevelBookmarksFromPreviousIteration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)setValue:(id)arg1 forConfigurationKey:(id)arg2;
- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;
- (void)_validateServerBookmarksAfterInitialSyncWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_validateServerBookmarksWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_validateServerBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)canHandleRequest:(id)arg1;
- (void)handleRequest:(id)arg1 withTarget:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (void)runWithTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

