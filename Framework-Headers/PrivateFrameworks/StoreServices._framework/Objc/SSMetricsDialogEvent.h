//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSMetricsBaseEvent.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SSMetricsDialogEvent : SSMetricsBaseEvent <SSXPCCoding>
{
}

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *actionURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSString *dialogId;
@property (copy, nonatomic) NSString *dialogType;
@property (copy, nonatomic) NSString *dualAction;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *result;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetId;
@property (copy, nonatomic) NSArray *userActions;

- (id)copyXPCEncoding;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;

@end

