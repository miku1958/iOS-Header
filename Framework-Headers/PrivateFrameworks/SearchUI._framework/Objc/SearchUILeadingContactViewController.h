//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUILeadingViewController.h>

#import <SearchUI/CNAvatarViewDelegate-Protocol.h>

@class NSString, NUIContainerBoxView, SearchUIContactsThumbnailView, SearchUIImageView;

@interface SearchUILeadingContactViewController : SearchUILeadingViewController <CNAvatarViewDelegate>
{
    SearchUIContactsThumbnailView *_avatarView;
    SearchUIImageView *_appIconBadgeView;
}

@property (strong, nonatomic) SearchUIImageView *appIconBadgeView; // @synthesize appIconBadgeView=_appIconBadgeView;
@property (strong, nonatomic) SearchUIContactsThumbnailView *avatarView; // @synthesize avatarView=_avatarView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) NUIContainerBoxView *view; // @dynamic view;

+ (BOOL)supportsRowModel:(id)arg1;
- (void).cxx_destruct;
- (id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2;
- (void)hide;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)setUsesCompactWidth:(BOOL)arg1;
- (id)setupView;
- (BOOL)shouldVerticallyCenter;
- (unsigned long long)type;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;

@end

