//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/NSObject-Protocol.h>

@class CNContact, CNContactProperty, CNContactViewController;

@protocol CNContactViewControllerDelegate <NSObject>

@optional
- (void)contactViewController:(CNContactViewController *)arg1 didCompleteWithContact:(CNContact *)arg2;
- (BOOL)contactViewController:(CNContactViewController *)arg1 shouldPerformDefaultActionForContactProperty:(CNContactProperty *)arg2;
@end

