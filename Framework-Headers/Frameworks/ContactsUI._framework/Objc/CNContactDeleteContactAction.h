//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

@class CNUICoreRecentsManager, CNUIExternalComponentsFactory;

__attribute__((visibility("hidden")))
@interface CNContactDeleteContactAction : CNContactAction
{
    CNUIExternalComponentsFactory *_componentsFactory;
    CNUICoreRecentsManager *_recentsManager;
}

@property (readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // @synthesize componentsFactory=_componentsFactory;
@property (readonly, nonatomic) CNUICoreRecentsManager *recentsManager; // @synthesize recentsManager=_recentsManager;

- (void).cxx_destruct;
- (BOOL)deleteContact;
- (id)initWithContact:(id)arg1 recentsManager:(id)arg2 componentsFactory:(id)arg3;
- (void)performActionWithSender:(id)arg1;
- (void)showDeleteFailureAlert;

@end

