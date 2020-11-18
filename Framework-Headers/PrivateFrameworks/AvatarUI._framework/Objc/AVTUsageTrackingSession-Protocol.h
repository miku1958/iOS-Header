//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol AVTAvatarRecord, AVTAvatarStore;

@protocol AVTUsageTrackingSession
- (void)beginWithStore:(id<AVTAvatarStore>)arg1;
- (void)didChangeCurrentAvatarInCarousel:(id<AVTAvatarRecord>)arg1;
- (void)didCreateAvatar:(id<AVTAvatarRecord>)arg1;
- (void)didDeleteAvatar:(id<AVTAvatarRecord>)arg1;
- (void)didDiscardVideoWithDuration:(double)arg1;
- (void)didDuplicateAvatar:(id<AVTAvatarRecord>)arg1;
- (void)didEditAvatar:(id<AVTAvatarRecord>)arg1;
- (void)didEnterEditor;
- (void)didLeaveEditor;
- (void)didPauseFaceTracking;
- (void)didRecordVideo;
- (void)didReplayVideo;
- (void)didResumeFaceTracking;
- (void)didSendImageWithAvatar:(id<AVTAvatarRecord>)arg1;
- (void)didSendStickerWithAvatar:(id<AVTAvatarRecord>)arg1;
- (void)didSendVideoWithAvatar:(id<AVTAvatarRecord>)arg1 duration:(double)arg2;
- (void)didShowExpandedMode;
- (void)didStartFaceTrackingInCarouselWithAvatar:(id<AVTAvatarRecord>)arg1;
- (void)didStopFaceTrackingInCarousel;
- (void)didTriggerHoldPose;
- (void)end;
@end

