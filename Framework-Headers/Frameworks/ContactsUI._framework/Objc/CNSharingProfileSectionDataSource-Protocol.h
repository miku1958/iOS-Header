//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNSharingProfileRowItem, NSString;

@protocol CNSharingProfileSectionDataSource <NSObject>

@property (readonly, nonatomic) unsigned long long selectedIndex;

- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (CNSharingProfileRowItem *)itemForIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (NSString *)sectionFooterLabel;
- (NSString *)sectionHeaderLabel;
- (BOOL)supportsSelection;

@optional
@end
