//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSError;

@interface PKPaymentAuthorizationErrorStateParam : PKPaymentAuthorizationStateParam
{
    NSError *_error;
}

@property (strong, nonatomic) NSError *error; // @synthesize error=_error;

+ (id)paramWithError:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end

