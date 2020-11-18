//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKDocumentRootDelegate-Protocol.h>

@class NSString, TSACollaborationErrorAction, TSADocumentInfo, TSADocumentRoot, TSKMailboxDocStatusMessage;

@protocol TSADocumentRootDelegate <TSKDocumentRootDelegate>

@property (readonly) TSACollaborationErrorAction *collaborationDisallowedErrorAction;
@property (readonly, nonatomic) NSString *defaultDraftName;
@property (readonly, nonatomic) NSString *documentCachePath;
@property (readonly, nonatomic) TSADocumentInfo *documentInfo;
@property (readonly, nonatomic) BOOL isClosedOrClosing;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL shouldSkipStartRecalculationOnLoad;


@optional
- (void)didMailboxShutdown;
- (void)documentRoot:(TSADocumentRoot *)arg1 didReceiveDocumentStatusNotification:(TSKMailboxDocStatusMessage *)arg2;
- (void)handleCollaborationErrorAction:(TSACollaborationErrorAction *)arg1 ignorePreviousErrors:(BOOL)arg2 documentRoot:(TSADocumentRoot *)arg3;
- (BOOL)hasPersistenceWarningsOfKind:(long long)arg1;
- (void)invalidateRestorableState;
- (void)willPostUndoManagerNotificationsUsingBlock:(void (^)(void))arg1;
@end

