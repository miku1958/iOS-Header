//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKConversation.h>

@class IMService;

@interface CKPendingConversation : CKConversation
{
    BOOL _noAvailableServices;
    IMService *_previousSendingService;
    IMService *_composeSendingService;
}

@property (weak, nonatomic) IMService *composeSendingService; // @synthesize composeSendingService=_composeSendingService;
@property (nonatomic) BOOL noAvailableServices; // @synthesize noAvailableServices=_noAvailableServices;
@property (weak, nonatomic) IMService *previousSendingService; // @synthesize previousSendingService=_previousSendingService;

- (void).cxx_destruct;
- (id)deviceIndependentID;
- (void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)refreshStatusForAddresses:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)sendingService;
- (id)uniqueIdentifier;

@end

