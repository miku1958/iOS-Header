//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class IMChat, IMHandle, NSArray, NSString;

@protocol IMAssistantChatDataSource <NSObject>

@property (readonly, nonatomic) NSArray *allExistingChats;
@property (readonly, nonatomic) BOOL blackholedChatsExist;

- (NSArray *)allGUIDsForChat:(IMChat *)arg1;
- (IMChat *)chatForIMHandle:(IMHandle *)arg1;
- (IMChat *)chatForIMHandles:(NSArray *)arg1;
- (IMChat *)existingChatForAddresses:(NSArray *)arg1 allowRetargeting:(BOOL)arg2 bestHandles:(id *)arg3;
- (IMChat *)existingChatWithChatIdentifier:(NSString *)arg1;
@end
