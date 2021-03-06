//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>

@class CNContactStore, CNContactViewController;
@protocol EKEditItemViewControllerDelegate, EKIdentityProtocol;

@interface EKIdentityViewController : UIViewController <EKEditItemViewControllerProtocol>
{
    id<EKIdentityProtocol> _identity;
    CNContactViewController *_personViewController;
    CNContactStore *_store;
}

@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL useCustomBackButton;

- (void).cxx_destruct;
- (id)CNContactEmailAddressesKey;
- (id)CNContactPhoneNumbersKey;
- (id)CNLabelWork;
- (Class)_CNContactClass;
- (Class)_CNContactStoreClass;
- (Class)_CNContactViewControllerClass;
- (Class)_CNLabeledValueClass;
- (Class)_CNMutableContactClass;
- (id)contactForIdentity:(id)arg1;
- (id)initWithIdentity:(id)arg1;
- (void)loadView;
- (void)setIdentity:(id)arg1;
- (void)updateControllerWithContact:(id)arg1 isNew:(BOOL)arg2;

@end

