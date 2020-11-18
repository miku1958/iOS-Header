//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, PKPaymentInstructions;

@interface PKAuthenticatorEvaluationRequest : NSObject
{
    NSString *_reason;
    NSString *_processName;
    NSNumber *_processIdentifier;
    NSString *_PINTitle;
    NSNumber *_PINLength;
    PKPaymentInstructions *_instructions;
}

@property (copy, nonatomic) NSNumber *PINLength; // @synthesize PINLength=_PINLength;
@property (copy, nonatomic) NSString *PINTitle; // @synthesize PINTitle=_PINTitle;
@property (strong, nonatomic) PKPaymentInstructions *instructions; // @synthesize instructions=_instructions;
@property (copy, nonatomic) NSNumber *processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property (copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property (copy, nonatomic) NSString *reason; // @synthesize reason=_reason;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithPolicy:(long long)arg1;

@end

