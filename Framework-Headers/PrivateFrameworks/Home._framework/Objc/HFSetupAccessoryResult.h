//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMSetupAccessoryPayload, NSError;

@interface HFSetupAccessoryResult : NSObject
{
    BOOL _hasAddRequest;
    BOOL _isValidForPairing;
    NSError *_error;
    HMSetupAccessoryPayload *_setupPayload;
}

@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) BOOL hasAddRequest; // @synthesize hasAddRequest=_hasAddRequest;
@property (readonly, nonatomic) BOOL isValidForPairing; // @synthesize isValidForPairing=_isValidForPairing;
@property (readonly, nonatomic) HMSetupAccessoryPayload *setupPayload; // @synthesize setupPayload=_setupPayload;

+ (BOOL)isHomeKitURL:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPayload:(id)arg1 error:(id)arg2 hasAddRequest:(BOOL)arg3;
- (id)initWithPayload:(id)arg1 hasAddRequest:(BOOL)arg2;
- (id)initWithSetupCode:(id)arg1;
- (id)initWithSetupURL:(id)arg1;
- (BOOL)isAllZerosCode;

@end

