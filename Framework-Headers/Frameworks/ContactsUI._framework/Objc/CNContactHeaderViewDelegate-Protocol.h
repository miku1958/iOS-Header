//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactHeaderView, CNContactViewCache, NSString, UIViewController;

@protocol CNContactHeaderViewDelegate <NSObject>
- (CNContactViewCache *)contactViewCache;
- (void)headerPhotoDidSaveEditsForImageDrop;
- (void)headerPhotoDidUpdate;
- (void)headerViewDidPickPreferredChannel:(NSString *)arg1;
- (void)headerViewDidUpdateLabelSizes;
- (UIViewController *)viewControllerForHeaderView:(CNContactHeaderView *)arg1;
@end

