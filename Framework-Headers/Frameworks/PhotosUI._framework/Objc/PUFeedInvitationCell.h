//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUFeedCell.h>

#import <PhotosUI/PXSharedAlbumInvitationViewDelegate-Protocol.h>

@class NSString, PXFeedInvitationSectionInfo, PXSharedAlbumHeaderView, PXSharedAlbumInvitationView, UILabel;

__attribute__((visibility("hidden")))
@interface PUFeedInvitationCell : PUFeedCell <PXSharedAlbumInvitationViewDelegate>
{
    BOOL _useInPopover;
    BOOL _showHeader;
    BOOL _showFooter;
    PXFeedInvitationSectionInfo *_invitationSectionInfo;
    PXSharedAlbumHeaderView *_headerView;
    PXSharedAlbumInvitationView *_invitationView;
    UILabel *_dateLabel;
}

@property (strong, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PXSharedAlbumHeaderView *headerView; // @synthesize headerView=_headerView;
@property (strong, nonatomic) PXFeedInvitationSectionInfo *invitationSectionInfo; // @synthesize invitationSectionInfo=_invitationSectionInfo;
@property (strong, nonatomic) PXSharedAlbumInvitationView *invitationView; // @synthesize invitationView=_invitationView;
@property (nonatomic) BOOL showFooter; // @synthesize showFooter=_showFooter;
@property (nonatomic) BOOL showHeader; // @synthesize showHeader=_showHeader;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useInPopover; // @synthesize useInPopover=_useInPopover;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_delegate;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(BOOL)arg2;
- (void)_updateColors;
- (void)_updateDate;
- (void)_updateFooter;
- (void)_updateHeaderView;
- (void)_updateInvitationView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)sharedAlbumInvitationView:(id)arg1 didAccept:(BOOL)arg2;
- (void)sharedAlbumInvitationView:(id)arg1 presentViewController:(id)arg2;
- (void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;

@end

