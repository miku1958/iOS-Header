//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class INInteraction;

@interface STSurfPaymentAction : AFSiriRequest
{
    INInteraction *_interaction;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithInteraction:(id)arg1;
- (unsigned long long)action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interaction;

@end
