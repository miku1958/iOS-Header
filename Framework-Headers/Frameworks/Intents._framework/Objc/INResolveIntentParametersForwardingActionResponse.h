//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentForwardingActionResponse.h>

@class INIntent, NSDictionary;

@interface INResolveIntentParametersForwardingActionResponse : INIntentForwardingActionResponse
{
    BOOL _success;
    INIntent *_updatedIntent;
    NSDictionary *_parameterResolutionResults;
}

@property (readonly, nonatomic) NSDictionary *parameterResolutionResults; // @synthesize parameterResolutionResults=_parameterResolutionResults;
@property (readonly, nonatomic, getter=isSuccess) BOOL success; // @synthesize success=_success;
@property (readonly, nonatomic) INIntent *updatedIntent; // @synthesize updatedIntent=_updatedIntent;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(BOOL)arg1 updatedIntent:(id)arg2 parameterResolutionResults:(id)arg3 error:(id)arg4;

@end

