//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIIDSIDQueryControllerWrapper-Protocol.h>

@class IDSIDQueryController;

@interface CNUIIDSIDQueryControllerWrapper : NSObject <CNUIIDSIDQueryControllerWrapper>
{
    IDSIDQueryController *_controller;
}

@property (readonly, nonatomic) IDSIDQueryController *controller; // @synthesize controller=_controller;

- (void).cxx_destruct;
- (id)initWithController:(id)arg1;
- (BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

