//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

@class CNDonationStore, CNUIExternalComponentsFactory;

__attribute__((visibility("hidden")))
@interface CNContactIgnoreDonatedInformationAction : CNContactAction
{
    CNUIExternalComponentsFactory *_componentsFactory;
    CNDonationStore *_donationStore;
}

@property (readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // @synthesize componentsFactory=_componentsFactory;
@property (readonly, nonatomic) CNDonationStore *donationStore; // @synthesize donationStore=_donationStore;

- (void).cxx_destruct;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 donationStore:(id)arg2 componentsFactory:(id)arg3;
- (void)performActionWithSender:(id)arg1;
- (BOOL)rejectAllDonations;
- (void)showRejectionFailureAlert;

@end

