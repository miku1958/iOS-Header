//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNQuickAction.h>

#import <ContactsUI/CNContactActionDelegate-Protocol.h>

@class CNContactAction, NSString;
@protocol CNQuickContactActionDelegate;

__attribute__((visibility("hidden")))
@interface CNQuickContactAction : CNQuickAction <CNContactActionDelegate>
{
    CNContactAction *_contactAction;
    id<CNQuickContactActionDelegate> _delegate;
    CDUnknownBlockType _completionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (strong, nonatomic) CNContactAction *contactAction; // @synthesize contactAction=_contactAction;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNQuickContactActionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;
- (void)actionDidFinish:(id)arg1;
- (void)actionDidUpdate:(id)arg1;
- (void)actionWasCanceled:(id)arg1;
- (id)contactViewCache;
- (id)initWithContactAction:(id)arg1;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

