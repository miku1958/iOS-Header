//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFAutocompleteResultsTableViewController, MFComposeRecipient;

@protocol MFAutocompleteResultsTableViewControllerDelegate <NSObject>

@optional
- (void)autocompleteResultsController:(MFAutocompleteResultsTableViewController *)arg1 didRequestInfoAboutRecipient:(MFComposeRecipient *)arg2;
- (void)autocompleteResultsController:(MFAutocompleteResultsTableViewController *)arg1 didSelectRecipient:(MFComposeRecipient *)arg2;
- (void)autocompleteResultsController:(MFAutocompleteResultsTableViewController *)arg1 didSelectRecipient:(MFComposeRecipient *)arg2 atIndex:(unsigned long long)arg3;
@end

