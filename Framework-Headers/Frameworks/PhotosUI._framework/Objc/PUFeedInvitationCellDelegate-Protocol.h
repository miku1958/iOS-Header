//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUFeedCellDelegate-Protocol.h>

@class PUFeedInvitationCell, UIViewController;

@protocol PUFeedInvitationCellDelegate <PUFeedCellDelegate>

@optional
- (void)feedInvitationCell:(PUFeedInvitationCell *)arg1 didAccept:(BOOL)arg2;
- (void)feedInvitationCell:(PUFeedInvitationCell *)arg1 presentViewController:(UIViewController *)arg2;
- (void)feedInvitationCellReportAsJunk:(PUFeedInvitationCell *)arg1;
@end

