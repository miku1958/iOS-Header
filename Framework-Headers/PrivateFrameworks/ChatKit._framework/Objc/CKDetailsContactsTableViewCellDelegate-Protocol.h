//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKDetailsContactsTableViewCell, UIMenu;

@protocol CKDetailsContactsTableViewCellDelegate <NSObject>
- (void)contactsCell:(CKDetailsContactsTableViewCell *)arg1 didHoverWithState:(long long)arg2;
- (void)contactsCellDidTapFaceTimeVideoButton:(CKDetailsContactsTableViewCell *)arg1;
- (void)contactsCellDidTapMessagesButton:(CKDetailsContactsTableViewCell *)arg1;
- (void)contactsCellDidTapPhoneButton:(CKDetailsContactsTableViewCell *)arg1;
- (UIMenu *)screenSharingButtonContextMenuForCell:(CKDetailsContactsTableViewCell *)arg1;
@end
