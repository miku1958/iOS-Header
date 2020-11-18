//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTObjectViewController-Protocol.h>

@class NSString;
@protocol AVTAvatarRecord, AVTUIViewSnapshotProvider;

@protocol AVTCarouselController <AVTObjectViewController>

@property (nonatomic) BOOL allowsCreate;
@property (nonatomic) double decelerationRate;
@property (readonly, nonatomic) id<AVTAvatarRecord> focusedRecord;
@property (nonatomic) BOOL singleAvatarMode;

- (void)displayAvatarRecordWithIdentifier:(NSString *)arg1 animated:(BOOL)arg2;
- (void)presentActionsForAvatar:(id<AVTAvatarRecord>)arg1;
- (void)presentEditorForCreatingAvatar:(id)arg1;
- (void)reloadData;
- (void)setAllowsCreate:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSingleAvatarMode:(BOOL)arg1 fillContainer:(BOOL)arg2 animated:(BOOL)arg3;
- (id<AVTUIViewSnapshotProvider>)snapshotProviderFocusedOnRecordWithIdentifier:(NSString *)arg1 size:(struct CGSize)arg2;
@end
