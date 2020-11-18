//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNErrorViewController.h>

#import <ContactsUI/CNContactPickerContentViewController-Protocol.h>

@class NSString, UIBarButtonItem, UINavigationController;
@protocol CNContactPickerContentDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPickerServiceErrorViewController : CNErrorViewController <CNContactPickerContentViewController>
{
    id<CNContactPickerContentDelegate> delegate;
    UINavigationController *navigationController;
    UIBarButtonItem *addContactBarButtonItem;
}

@property (readonly, nonatomic) UIBarButtonItem *addContactBarButtonItem; // @synthesize addContactBarButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNContactPickerContentDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)invalidate;
- (void)invalidateSelectionAnimated:(BOOL)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;

@end
