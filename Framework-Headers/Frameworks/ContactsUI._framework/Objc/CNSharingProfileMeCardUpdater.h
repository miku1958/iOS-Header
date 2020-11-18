//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore, CNMutableContact, CNSharingProfileLogger;
@protocol CNSharingProfileMeCardUpdaterDelegate;

@interface CNSharingProfileMeCardUpdater : NSObject
{
    id<CNSharingProfileMeCardUpdaterDelegate> _delegate;
    CNMutableContact *_meContact;
    CNContactStore *_contactStore;
    CNContact *_imageContact;
    CNSharingProfileLogger *_logger;
}

@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (weak, nonatomic) id<CNSharingProfileMeCardUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) CNContact *imageContact; // @synthesize imageContact=_imageContact;
@property (strong, nonatomic) CNSharingProfileLogger *logger; // @synthesize logger=_logger;
@property (readonly, nonatomic) CNMutableContact *meContact; // @synthesize meContact=_meContact;

- (void).cxx_destruct;
- (id)alertControllerForMeCardUpdateWithImageContact:(id)arg1;
- (id)initWithMeContact:(id)arg1 contactStore:(id)arg2;
- (void)performSave;
- (void)updateContact:(id)arg1 withImagePropertiesFromContact:(id)arg2;

@end
