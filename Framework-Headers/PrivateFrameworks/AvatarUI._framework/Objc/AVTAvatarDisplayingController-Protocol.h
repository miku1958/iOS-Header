//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTObjectViewController-Protocol.h>

@class AVTAvatarRecordDataSource, AVTUIEnvironment, AVTViewSession;
@protocol AVTAvatarDisplayingControllerDelegate, AVTAvatarRecord, AVTViewCarouselLayout;

@protocol AVTAvatarDisplayingController <AVTObjectViewController>

@property (weak, nonatomic) id<AVTAvatarDisplayingControllerDelegate> delegate;

- (void)displayAvatarForRecord:(id<AVTAvatarRecord>)arg1 animated:(BOOL)arg2;
- (id)initWithDataSource:(AVTAvatarRecordDataSource *)arg1 environment:(AVTUIEnvironment *)arg2;
- (void)prepareToTransitionToVisible:(BOOL)arg1 completionHandler:(CDUnknownBlockType *)arg2;
- (void)prepareViewWithLayout:(id<AVTViewCarouselLayout>)arg1;
- (void)reloadData;
- (void)stopUsingAVTViewSessionSynchronously:(BOOL)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)useAVTViewFromSession:(AVTViewSession *)arg1 withLayout:(id<AVTViewCarouselLayout>)arg2;
@end

