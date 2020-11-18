//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class AVTAvatarActionsModel, AVTAvatarActionsRecordUpdate, AVTAvatarEditorViewController;
@protocol AVTAvatarRecord;

@protocol AVTAvatarActionsModelDelegate <NSObject>
- (void)actionsModel:(AVTAvatarActionsModel *)arg1 didAddRecord:(id<AVTAvatarRecord>)arg2;
- (void)actionsModel:(AVTAvatarActionsModel *)arg1 didCancelEditingRecord:(id<AVTAvatarRecord>)arg2;
- (void)actionsModel:(AVTAvatarActionsModel *)arg1 didDeleteRecord:(id<AVTAvatarRecord>)arg2 withRecordUpdate:(AVTAvatarActionsRecordUpdate *)arg3 completionBlock:(void (^)(void))arg4;
- (void)actionsModel:(AVTAvatarActionsModel *)arg1 didDuplicateToRecord:(id<AVTAvatarRecord>)arg2 completionBlock:(void (^)(void))arg3;
- (void)actionsModel:(AVTAvatarActionsModel *)arg1 didEditRecord:(id<AVTAvatarRecord>)arg2;
- (AVTAvatarActionsRecordUpdate *)actionsModel:(AVTAvatarActionsModel *)arg1 recordUpdateForDeletingRecord:(id<AVTAvatarRecord>)arg2;
- (void)actionsModel:(AVTAvatarActionsModel *)arg1 shouldDeleteRecord:(id<AVTAvatarRecord>)arg2 resultBlock:(void (^)(BOOL))arg3;
- (void)actionsModelDidFinish:(AVTAvatarActionsModel *)arg1;
- (void)actionsModelDidUpdateInlineActionButtons:(AVTAvatarActionsModel *)arg1;
- (void)dismissEditorViewController:(AVTAvatarEditorViewController *)arg1 forActionsModel:(AVTAvatarActionsModel *)arg2 wasCreate:(BOOL)arg3 didEdit:(BOOL)arg4 animated:(BOOL)arg5 completion:(void (^)(void))arg6;
- (void)presentEditorViewController:(AVTAvatarEditorViewController *)arg1 forActionsModel:(AVTAvatarActionsModel *)arg2 isCreate:(BOOL)arg3;
@end
