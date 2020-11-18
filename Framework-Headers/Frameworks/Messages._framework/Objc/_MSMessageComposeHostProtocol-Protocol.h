//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Messages/NSObject-Protocol.h>

@class BKSAnimationFenceHandle, MSMessage, MSRichLink, NSURL, UIImage, _MSMessageMediaPayload;

@protocol _MSMessageComposeHostProtocol <NSObject>
- (void)_dismiss;
- (void)_openURL:(NSURL *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_requestPresentationStyleExpanded:(BOOL)arg1;
- (void)_requestResize;
- (void)_stageAppItem:(MSMessage *)arg1 skipShelf:(BOOL)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)_stageMediaItem:(_MSMessageMediaPayload *)arg1 skipShelf:(BOOL)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)_stageRichLink:(MSRichLink *)arg1 skipShelf:(BOOL)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)_startDragMediaItem:(_MSMessageMediaPayload *)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(BKSAnimationFenceHandle *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)_updateSnapshotForNextLaunch:(UIImage *)arg1;
@end
