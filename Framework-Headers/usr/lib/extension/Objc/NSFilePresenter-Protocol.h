//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <extension/NSObject-Protocol.h>

@class NSFileVersion, NSOperationQueue, NSURL;

@protocol NSFilePresenter <NSObject>

@property (readonly, strong) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;


@optional
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(NSFileVersion *)arg1;
- (void)presentedItemDidLoseVersion:(NSFileVersion *)arg1;
- (void)presentedItemDidMoveToURL:(NSURL *)arg1;
- (void)presentedItemDidResolveConflictVersion:(NSFileVersion *)arg1;
- (void)presentedSubitemAtURL:(NSURL *)arg1 didGainVersion:(NSFileVersion *)arg2;
- (void)presentedSubitemAtURL:(NSURL *)arg1 didLoseVersion:(NSFileVersion *)arg2;
- (void)presentedSubitemAtURL:(NSURL *)arg1 didMoveToURL:(NSURL *)arg2;
- (void)presentedSubitemAtURL:(NSURL *)arg1 didResolveConflictVersion:(NSFileVersion *)arg2;
- (void)presentedSubitemDidAppearAtURL:(NSURL *)arg1;
- (void)presentedSubitemDidChangeAtURL:(NSURL *)arg1;
- (void)relinquishPresentedItemToReader:(void (^)(void (^)(void)))arg1;
- (void)relinquishPresentedItemToWriter:(void (^)(void (^)(void)))arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(void (^)(NSError *))arg1;
@end

