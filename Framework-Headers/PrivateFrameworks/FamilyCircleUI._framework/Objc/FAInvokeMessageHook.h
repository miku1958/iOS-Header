//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/AAUIServerHook-Protocol.h>

@class AAUIServerHookResponse, NSString;
@protocol AAUIServerHookDelegate;

@interface FAInvokeMessageHook : NSObject <AAUIServerHook>
{
    CDUnknownBlockType _completion;
    id<AAUIServerHookDelegate> _delegate;
    AAUIServerHookResponse *_serverHookResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) AAUIServerHookResponse *serverHookResponse; // @synthesize serverHookResponse=_serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_presentMessagesInviteWithServerAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldMatchElement:(id)arg1;
- (BOOL)shouldMatchModel:(id)arg1;

@end

