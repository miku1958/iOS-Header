//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INRideCompletionStatusExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCurrencyAmount, NSSet, NSString, NSUserActivity;

@interface INRideCompletionStatus : NSObject <INCacheableContainer, INRideCompletionStatusExport, NSCopying, NSSecureCoding>
{
    BOOL _completed;
    BOOL _missedPickup;
    BOOL _outstanding;
    BOOL _canceledByService;
    NSUserActivity *_completionUserActivity;
    INCurrencyAmount *_paymentAmount;
    unsigned long long _feedbackType;
    NSSet *_defaultTippingOptions;
}

@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly, nonatomic, getter=isCanceledByService) BOOL canceledByService; // @synthesize canceledByService=_canceledByService;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed; // @synthesize completed=_completed;
@property (strong, nonatomic) NSUserActivity *completionUserActivity; // @synthesize completionUserActivity=_completionUserActivity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSSet *defaultTippingOptions; // @synthesize defaultTippingOptions=_defaultTippingOptions;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long feedbackType; // @synthesize feedbackType=_feedbackType;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isMissedPickup) BOOL missedPickup; // @synthesize missedPickup=_missedPickup;
@property (readonly, nonatomic, getter=isOutstanding) BOOL outstanding; // @synthesize outstanding=_outstanding;
@property (readonly, nonatomic) INCurrencyAmount *paymentAmount; // @synthesize paymentAmount=_paymentAmount;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)canceledByService;
+ (id)canceledByUser;
+ (id)canceledMissedPickup;
+ (id)completed;
+ (id)completedWithOutstandingFeedbackType:(unsigned long long)arg1;
+ (id)completedWithOutstandingPaymentAmount:(id)arg1;
+ (id)completedWithSettledPaymentAmount:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initCompleted:(BOOL)arg1 canceledByService:(BOOL)arg2 missedPickup:(BOOL)arg3 amount:(id)arg4 feedbackType:(unsigned long long)arg5 outstanding:(BOOL)arg6;
- (id)_initWithValue:(id)arg1;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_newValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

