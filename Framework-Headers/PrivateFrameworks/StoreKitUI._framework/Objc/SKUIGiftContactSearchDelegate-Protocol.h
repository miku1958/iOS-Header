//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class MFComposeRecipient, SKUIGiftContactSearchController;

@protocol SKUIGiftContactSearchDelegate <NSObject>

@optional
- (void)searchController:(SKUIGiftContactSearchController *)arg1 didSelectRecipient:(MFComposeRecipient *)arg2;
- (void)searchControllerDidFinishSearch:(SKUIGiftContactSearchController *)arg1;
@end

