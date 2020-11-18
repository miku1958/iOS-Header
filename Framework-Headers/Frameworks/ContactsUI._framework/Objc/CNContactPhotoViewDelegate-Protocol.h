//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactPhotoView, CNContactViewCache, UIViewController;

@protocol CNContactPhotoViewDelegate <NSObject>
- (CNContactViewCache *)contactViewCache;
- (void)photoViewDidSaveEditsForImageDrop:(CNContactPhotoView *)arg1;
- (void)photoViewDidUpdate:(CNContactPhotoView *)arg1;
- (UIViewController *)viewControllerForPhotoView:(CNContactPhotoView *)arg1;
@end

