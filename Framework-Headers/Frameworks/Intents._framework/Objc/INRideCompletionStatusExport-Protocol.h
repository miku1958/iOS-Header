//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INCurrencyAmount, NSUserActivity;

@protocol INRideCompletionStatusExport <NSObject, JSExport>

@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly, nonatomic, getter=isCanceledByService) BOOL canceledByService;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (strong, nonatomic) NSUserActivity *completionUserActivity;
@property (readonly, nonatomic, getter=isMissedPickup) BOOL missedPickup;
@property (readonly, nonatomic, getter=isOutstanding) BOOL outstanding;
@property (readonly, nonatomic) INCurrencyAmount *paymentAmount;

+ (id)canceledByService;
+ (id)canceledByUser;
+ (id)canceledMissedPickup;
+ (id)completed;
+ (id)completedWithOutstandingPaymentAmount:(INCurrencyAmount *)arg1;
+ (id)completedWithSettledPaymentAmount:(INCurrencyAmount *)arg1;
- (id)init;
@end
