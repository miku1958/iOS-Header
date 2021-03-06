//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKAvatarView, CKLabel, CKSpotlightQueryResult, NSString;
@protocol CKConversationSearchCellDelegate;

@protocol CKConversationSearchCellProtocol <NSObject>

@property (weak, nonatomic) id<CKConversationSearchCellDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets marginInsets;

- (CKAvatarView *)avatarView;
- (void)configureWithQueryResult:(CKSpotlightQueryResult *)arg1 searchText:(NSString *)arg2;
- (CKLabel *)fromLabel;
@end

