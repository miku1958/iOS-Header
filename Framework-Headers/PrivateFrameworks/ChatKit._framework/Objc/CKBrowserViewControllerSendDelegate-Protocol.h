//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserDragControllerTarget, CKBrowserItemPayload, IMSticker, NSString, NSURL;
@protocol CKBrowserDragControllerTranscriptDelegate;

@protocol CKBrowserViewControllerSendDelegate <NSObject>
- (void)commitPayload:(CKBrowserItemPayload *)arg1;
- (void)commitSticker:(IMSticker *)arg1;
- (void)commitSticker:(IMSticker *)arg1 withDragTarget:(CKBrowserDragControllerTarget *)arg2;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(BOOL)arg1;
- (void)dismissToKeyboard:(BOOL)arg1;
- (id<CKBrowserDragControllerTranscriptDelegate>)dragControllerTranscriptDelegate;
- (void)openURL:(NSURL *)arg1 applicationIdentifier:(NSString *)arg2 pluginID:(NSString *)arg3 completionHandler:(void (^)(BOOL))arg4;
- (void)openURL:(NSURL *)arg1 pluginID:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)presentAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 buttonTitle:(NSString *)arg3 completion:(void (^)(void))arg4;
- (void)requestPresentationStyleExpanded:(BOOL)arg1;
- (void)setLocalUserIsTyping:(BOOL)arg1;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1 dismiss:(BOOL)arg2;

@optional
- (BOOL)commitPayload:(CKBrowserItemPayload *)arg1 forPlugin:(NSString *)arg2 allowAllCommits:(BOOL)arg3 error:(id *)arg4;
- (void)commitSticker:(IMSticker *)arg1 atScreenCoordinate:(struct CGPoint)arg2 scale:(double)arg3 rotation:(double)arg4;
- (void)commitSticker:(IMSticker *)arg1 forPlugin:(NSString *)arg2;
- (void)dismissAndPresentPhotosApp;
- (void)dismissAndReloadInputViews:(BOOL)arg1 forPlugin:(NSString *)arg2;
- (void)eagerUploadCancelIdentifier:(NSString *)arg1;
- (void)eagerUploadPayload:(CKBrowserItemPayload *)arg1 identifier:(NSString *)arg2 replace:(BOOL)arg3;
- (BOOL)handwritingIsDisplayed;
- (void)requestPresentationStyleExpanded:(BOOL)arg1 forPlugin:(NSString *)arg2;
- (void)requestPresentationStyleFullScreenModalForPlugin:(NSString *)arg1;
- (void)setEntryViewHidden:(BOOL)arg1;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1 dismiss:(BOOL)arg2 forPlugin:(NSString *)arg3;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1 dismiss:(BOOL)arg2 forPlugin:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)startEditingPayloadBypassingValidation:(CKBrowserItemPayload *)arg1 forPlugin:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end

