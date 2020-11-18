//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUISingleResultTableViewCell.h>

@class CNAvatarView, CNQuickActionsView, NSString;

@interface SearchUISingleContactTableViewCell : SearchUISingleResultTableViewCell
{
    BOOL _supportsActions;
    NSString *_contactIdentifier;
    CNAvatarView *_avatarView;
    CNQuickActionsView *_quickActionsView;
}

@property (strong) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property (strong) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (strong) CNQuickActionsView *quickActionsView; // @synthesize quickActionsView=_quickActionsView;
@property (nonatomic) BOOL supportsActions; // @synthesize supportsActions=_supportsActions;

+ (void)initialize;
- (void).cxx_destruct;
- (void)clearPurgeableMemory;
- (BOOL)hasActionButton;
- (void)reset;
- (void)updateThumbnailViewForResult:(id)arg1;
- (void)updateWithContact:(id)arg1;
- (void)updateWithResult:(id)arg1;
- (id)viewForActionButton:(id)arg1 style:(unsigned long long)arg2 result:(id)arg3;
- (id)viewForThumbnail;

@end
