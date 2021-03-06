//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Messages/NSObject-Protocol.h>

@class BKSAnimationFenceHandle;
@protocol MSStickerPrivate;

@protocol _MSStickerSendManagerDelegate <NSObject>
- (void)insertSticker:(id<MSStickerPrivate>)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)startDragSticker:(id<MSStickerPrivate>)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(BKSAnimationFenceHandle *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)stickerDragCanceled;
- (void)stickerDragMoved:(id<MSStickerPrivate>)arg1 frameInRemoteView:(struct CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 fence:(BKSAnimationFenceHandle *)arg5 completionHandler:(void (^)(BOOL, NSError *))arg6;
@end

