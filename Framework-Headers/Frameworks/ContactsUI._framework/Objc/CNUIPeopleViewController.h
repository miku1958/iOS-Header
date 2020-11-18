//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ContactsUI/CNContactListBannerViewDelegate-Protocol.h>

@class CNContactFormatter, CNContactListBannerView, CNContactStore, CNUIContactsEnvironment, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUIPeopleViewController : UITableViewController <CNContactListBannerViewDelegate>
{
    NSArray *_people;
    CNContactFormatter *_formatter;
    CNUIContactsEnvironment *_environment;
    CNContactListBannerView *_meBanner;
    CNContactStore *_contactStore;
}

@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property (strong, nonatomic) CNContactFormatter *formatter; // @synthesize formatter=_formatter;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CNContactListBannerView *meBanner; // @synthesize meBanner=_meBanner;
@property (strong, nonatomic) NSArray *people; // @synthesize people=_people;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2;
- (id)descriptorForRequiredKeys;
- (id)initWithEnvironment:(id)arg1 contactStore:(id)arg2;
- (void)showContact:(id)arg1 animated:(BOOL)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

