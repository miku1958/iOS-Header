//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileMailUI/NSObject-Protocol.h>

@class MFAddressBookManager;

@protocol MFAddressBookClient <NSObject>
- (void)addressBookManager:(MFAddressBookManager *)arg1 addressBookDidChange:(void *)arg2;
- (void)addressBookPreferencesChangedForAddressBookManager:(MFAddressBookManager *)arg1;
@end
