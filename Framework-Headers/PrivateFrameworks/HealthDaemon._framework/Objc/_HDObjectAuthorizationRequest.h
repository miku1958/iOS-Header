//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID;

__attribute__((visibility("hidden")))
@interface _HDObjectAuthorizationRequest : NSObject
{
    CDUnknownBlockType _completion;
    NSUUID *_identifier;
    NSArray *_samples;
    NSArray *_authorizationRecords;
}

@property (strong, nonatomic) NSArray *authorizationRecords; // @synthesize authorizationRecords=_authorizationRecords;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSArray *samples; // @synthesize samples=_samples;
@property (readonly, copy, nonatomic) NSArray *samplesRequiringAuthorization;

- (void).cxx_destruct;
- (id)initForSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invokeCompletionHandlerWithAuthorizedSamples:(id)arg1 error:(id)arg2;
- (void)invokeCompletionWithSuccess:(BOOL)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id)arg4;

@end

