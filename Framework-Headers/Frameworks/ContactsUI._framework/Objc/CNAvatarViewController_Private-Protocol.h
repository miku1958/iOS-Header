//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactStore, PRPersonaStore;
@protocol CNAvatarViewControllerDelegate;

@protocol CNAvatarViewController_Private <NSObject>

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (weak, nonatomic) id<CNAvatarViewControllerDelegate> delegate;
@property (readonly, nonatomic) PRPersonaStore *personaStore;
@property (nonatomic, getter=isThreeDTouchEnabled) BOOL threeDTouchEnabled;

@end
