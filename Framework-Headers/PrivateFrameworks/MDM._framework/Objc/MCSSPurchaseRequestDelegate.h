//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MDM/MCSSRequestDelegate.h>

#import <MDM/SSPurchaseRequestDelegate-Protocol.h>

@class NSString, SSPurchaseRequest;

@interface MCSSPurchaseRequestDelegate : MCSSRequestDelegate <SSPurchaseRequestDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) SSPurchaseRequest *request; // @dynamic request;
@property (readonly) Class superclass;

+ (id)instanceWithPurchases:(id)arg1;
- (void)startCompletionBlock:(CDUnknownBlockType)arg1;

@end

