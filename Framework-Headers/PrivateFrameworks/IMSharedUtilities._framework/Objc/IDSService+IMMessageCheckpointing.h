//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/IDSService.h>

@interface IDSService (IMMessageCheckpointing)
+ (id)im_checkpointIDSService;
- (BOOL)im_sendCertifiedDeliveryReceiptIfPossibleWithMessageContext:(id)arg1 guid:(id)arg2 needsDeliveryReceipt:(BOOL)arg3 failureReason:(id)arg4 failureMessage:(id)arg5;
- (void)im_sendMessageCheckpointIfNecessary:(long long)arg1 guid:(id)arg2 wantsCheckpointing:(BOOL)arg3;
@end
