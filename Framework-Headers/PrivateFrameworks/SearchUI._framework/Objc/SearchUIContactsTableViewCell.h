//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIMultiResultTableViewCell.h>

#import <SearchUI/CNContactGridViewControllerDelegate-Protocol.h>

@class CNContactGridViewController, NSArray, NSString;

@interface SearchUIContactsTableViewCell : SearchUIMultiResultTableViewCell <CNContactGridViewControllerDelegate>
{
    CNContactGridViewController *_contactsViewController;
    NSArray *_contactIdentifiers;
}

@property (strong, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property (strong) CNContactGridViewController *contactsViewController; // @synthesize contactsViewController=_contactsViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (double)bottomInset;
- (id)collectionViewDataSource;
- (id)collectionViewWrapper;
- (void)gridViewController:(id)arg1 didPerformAction:(id)arg2 forContactAtIndex:(long long)arg3 withContactProperty:(id)arg4;
- (BOOL)includeTopPaddingInSingleRowHeight;
- (id)makeCollectionView;
- (void)reset;
- (double)topInset;
- (void)updateNumberOfColumns:(long long)arg1;
- (void)updateWithResults:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

