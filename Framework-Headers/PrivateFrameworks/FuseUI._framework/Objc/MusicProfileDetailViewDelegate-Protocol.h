//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicProfileDetailView;

@protocol MusicProfileDetailViewDelegate <NSObject>

@optional
- (void)profileDetailView:(MusicProfileDetailView *)arg1 didUpdateFollowingState:(BOOL)arg2;
- (void)profileDetailViewDidSelectContextualActionsButton:(MusicProfileDetailView *)arg1;
- (void)profileDetailViewDidSelectEditButton:(MusicProfileDetailView *)arg1;
- (void)profileDetailViewDidSelectShareActionsButton:(MusicProfileDetailView *)arg1;
- (void)profileDetailViewDidSelectTitle:(MusicProfileDetailView *)arg1;
@end
