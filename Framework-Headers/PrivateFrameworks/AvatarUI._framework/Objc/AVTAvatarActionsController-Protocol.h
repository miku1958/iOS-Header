//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class AVTAvatarActionsProvider, AVTAvatarRecordDataSource;
@protocol AVTAvatarActionsControllerDelegate;

@protocol AVTAvatarActionsController <NSObject>

@property (readonly, nonatomic) AVTAvatarActionsProvider *actionsModel;
@property (readonly, nonatomic) AVTAvatarRecordDataSource *dataSource;
@property (weak, nonatomic) id<AVTAvatarActionsControllerDelegate> delegate;

- (void)updateForChangedContentCategorySize;
- (void)updateWithActionsModel:(AVTAvatarActionsProvider *)arg1;
@end
