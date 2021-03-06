//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSubcredentialProvisioningFlowControllerOperation-Protocol.h>

@class PKSubcredentialInvitationFlowControllerContext;
@protocol PKSubcredentialInvitationFlowControllerProtocol;

@protocol PKSubcredentialInvitationFlowControllerOperation <PKSubcredentialProvisioningFlowControllerOperation>

@property (readonly, nonatomic) id<PKSubcredentialInvitationFlowControllerProtocol> flowController;
@property (readonly, nonatomic) unsigned long long operation;
@property (strong, nonatomic) PKSubcredentialInvitationFlowControllerContext *provisioningContext;

- (id)initWithFlowController:(id<PKSubcredentialInvitationFlowControllerProtocol>)arg1 context:(PKSubcredentialInvitationFlowControllerContext *)arg2;
@end

