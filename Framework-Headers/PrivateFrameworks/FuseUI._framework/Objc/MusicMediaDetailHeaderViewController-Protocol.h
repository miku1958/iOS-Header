//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicMediaDetailTintInformation;
@protocol MusicMediaDetailHeaderViewControllerDelegate;

@protocol MusicMediaDetailHeaderViewController <NSObject>

@property (weak, nonatomic) id<MusicMediaDetailHeaderViewControllerDelegate> mediaHeaderViewControllerDelegate;

- (double)maximumMediaDetailHeaderHeightForBoundsHeight:(double)arg1 returningShouldDeferToContentViewController:(BOOL *)arg2;
- (void)setMediaDetailHeaderHeight:(double)arg1 withMaximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;

@optional
- (void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1;
@end
