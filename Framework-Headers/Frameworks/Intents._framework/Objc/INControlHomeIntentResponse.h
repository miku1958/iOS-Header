//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import <Intents/INControlHomeIntentResponseExport-Protocol.h>

@class NSString, _INPBControlHomeIntentResponse;

@interface INControlHomeIntentResponse : INIntentResponse <INControlHomeIntentResponseExport>
{
    _INPBControlHomeIntentResponse *_responseMessagePBRepresentation;
}

@property (readonly, nonatomic) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_responseMessagePBRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

