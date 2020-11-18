//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <Preferences/KeychainSyncViewController-Protocol.h>

@class PSKeychainSyncHeaderView, PSSpecifier;
@protocol KeychainSyncViewControllerDelegate;

@interface PSKeychainSyncViewController : PSListController <KeychainSyncViewController>
{
    PSKeychainSyncHeaderView *_headerView;
    PSSpecifier *_groupSpecifier;
    id<KeychainSyncViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<KeychainSyncViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)groupSpecifier;
- (id)headerView;
- (double)heightForHeaderInTableView:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)specifiers;
- (id)viewForHeaderInTableView:(id)arg1;

@end

