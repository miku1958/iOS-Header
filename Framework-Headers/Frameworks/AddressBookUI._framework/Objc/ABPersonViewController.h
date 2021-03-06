//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AddressBookUI/CNContactViewControllerPrivateDelegate-Protocol.h>
#import <AddressBookUI/UIViewControllerRestoration-Protocol.h>

@class CNContactStore, CNContactViewController, NSArray, NSString;
@protocol ABPersonViewControllerDelegate;

@interface ABPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate, UIViewControllerRestoration>
{
    BOOL _allowsEditing;
    BOOL _allowsActions;
    BOOL _shouldShowLinkedPeople;
    BOOL _highlightedImportant;
    int _style;
    int _highlightedProperty;
    int _highlightedMultiValueIdentifier;
    const void *_addressBook;
    const void *_displayedPerson;
    id<ABPersonViewControllerDelegate> _personViewDelegate;
    NSArray *_displayedProperties;
    CNContactViewController *_cnContactViewController;
}

@property (nonatomic) const void *addressBook; // @synthesize addressBook=_addressBook;
@property (nonatomic) BOOL allowsActions; // @synthesize allowsActions=_allowsActions;
@property (nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property (strong, nonatomic) CNContactViewController *cnContactViewController; // @synthesize cnContactViewController=_cnContactViewController;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) const void *displayedPerson; // @synthesize displayedPerson=_displayedPerson;
@property (copy, nonatomic) NSArray *displayedProperties; // @synthesize displayedProperties=_displayedProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL highlightedImportant; // @synthesize highlightedImportant=_highlightedImportant;
@property (nonatomic) int highlightedMultiValueIdentifier; // @synthesize highlightedMultiValueIdentifier=_highlightedMultiValueIdentifier;
@property (nonatomic) int highlightedProperty; // @synthesize highlightedProperty=_highlightedProperty;
@property (nonatomic) id<ABPersonViewControllerDelegate> personViewDelegate; // @synthesize personViewDelegate=_personViewDelegate;
@property (nonatomic) BOOL shouldShowLinkedPeople; // @synthesize shouldShowLinkedPeople=_shouldShowLinkedPeople;
@property (nonatomic) int style; // @synthesize style=_style;
@property (readonly) Class superclass;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)dealloc;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)init;
- (id)initWithAddressBook:(void *)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3 style:(int)arg4;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)reloadContactViewController;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3 important:(BOOL)arg4;
- (void)viewDidAppear:(BOOL)arg1;

@end

