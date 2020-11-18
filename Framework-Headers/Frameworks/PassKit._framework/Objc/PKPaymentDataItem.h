//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKit/PKPaymentValidating-Protocol.h>

@class NSString, PKPaymentAuthorizationDataModel;

@interface PKPaymentDataItem : NSObject <PKPaymentValidating>
{
    long long _type;
    long long _status;
    PKPaymentAuthorizationDataModel *_model;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PKPaymentAuthorizationDataModel *model; // @synthesize model=_model;
@property (readonly, nonatomic, getter=isRejected) BOOL rejected;
@property (nonatomic) long long status; // @synthesize status=_status;
@property (readonly) Class superclass;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (long long)dataType;
- (id)initWithModel:(id)arg1;
- (BOOL)isValidWithError:(id *)arg1;

@end
