//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKTokenAccessUserPrompt-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TKTokenAccessUserPromptNoop : NSObject <TKTokenAccessUserPrompt>
{
    long long _preflightStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long preflightStatus; // @synthesize preflightStatus=_preflightStatus;
@property (readonly) Class superclass;

- (id)initWithPreflightStatus:(long long)arg1;
- (long long)promptUserToEvaluateRequest:(id)arg1 error:(id *)arg2;

@end

