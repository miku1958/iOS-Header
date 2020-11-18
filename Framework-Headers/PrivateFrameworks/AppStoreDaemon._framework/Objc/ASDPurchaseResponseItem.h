//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class ASDPurchase, NSArray, NSDictionary, NSError;

@interface ASDPurchaseResponseItem : NSObject <NSSecureCoding>
{
    BOOL _cancelsPurchaseBatch;
    BOOL _success;
    NSError *_error;
    ASDPurchase *_purchase;
    NSArray *_results;
    double _requestStartTime;
    double _responseEndTime;
    double _responseStartTime;
    NSDictionary *_responseMetrics;
    NSDictionary *_transationIDs;
}

@property (readonly, nonatomic) BOOL cancelsPurchaseBatch; // @synthesize cancelsPurchaseBatch=_cancelsPurchaseBatch;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, copy, nonatomic) ASDPurchase *purchase; // @synthesize purchase=_purchase;
@property (nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property (nonatomic) double responseEndTime; // @synthesize responseEndTime=_responseEndTime;
@property (readonly, nonatomic) NSDictionary *responseMetrics; // @synthesize responseMetrics=_responseMetrics;
@property (nonatomic) double responseStartTime; // @synthesize responseStartTime=_responseStartTime;
@property (readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property (readonly, nonatomic) BOOL success; // @synthesize success=_success;
@property (readonly, nonatomic) NSDictionary *transationIDs; // @synthesize transationIDs=_transationIDs;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_setError:(id)arg1;
- (void)_setPurchase:(id)arg1;
- (void)_setResponseMetrics:(id)arg1;
- (void)_setTransactionIDs:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)transactionIdentifierForItemIdentifier:(long long)arg1;

@end

