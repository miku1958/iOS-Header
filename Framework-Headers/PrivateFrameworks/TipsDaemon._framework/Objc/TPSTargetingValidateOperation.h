//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSAsyncOperation.h>

@class NSString, TPSTargetingValidation;

@interface TPSTargetingValidateOperation : TPSAsyncOperation
{
    TPSTargetingValidation *_validator;
    NSString *_context;
    long long _result;
}

@property (copy, nonatomic) NSString *context; // @synthesize context=_context;
@property (nonatomic) long long result; // @synthesize result=_result;
@property (readonly, nonatomic) TPSTargetingValidation *validator; // @synthesize validator=_validator;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id)initWithTargetingCondition:(id)arg1;
- (void)main;

@end
