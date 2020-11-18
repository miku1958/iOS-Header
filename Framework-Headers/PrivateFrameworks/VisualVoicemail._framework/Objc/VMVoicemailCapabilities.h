//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VisualVoicemail/NSSecureCoding-Protocol.h>

@interface VMVoicemailCapabilities : NSObject <NSSecureCoding>
{
    BOOL _canChangeGreeting;
    BOOL _canChangePassword;
    BOOL _mailboxRequiresSetup;
    long long _mailboxGreetingState;
    double _maximumGreetingDuration;
    unsigned long long _minimumPasswordLength;
    unsigned long long _maximumPasswordLength;
}

@property (readonly, nonatomic) BOOL canChangeGreeting; // @synthesize canChangeGreeting=_canChangeGreeting;
@property (readonly, nonatomic) BOOL canChangePassword; // @synthesize canChangePassword=_canChangePassword;
@property (readonly, nonatomic) long long mailboxGreetingState; // @synthesize mailboxGreetingState=_mailboxGreetingState;
@property (readonly, nonatomic) BOOL mailboxRequiresSetup; // @synthesize mailboxRequiresSetup=_mailboxRequiresSetup;
@property (readonly, nonatomic) double maximumGreetingDuration; // @synthesize maximumGreetingDuration=_maximumGreetingDuration;
@property (readonly, nonatomic) unsigned long long maximumPasswordLength; // @synthesize maximumPasswordLength=_maximumPasswordLength;
@property (readonly, nonatomic) unsigned long long minimumPasswordLength; // @synthesize minimumPasswordLength=_minimumPasswordLength;

+ (BOOL)supportsSecureCoding;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCanChangeGreeting:(BOOL)arg1 canChangePassword:(BOOL)arg2 mailboxRequiresSetup:(BOOL)arg3 mailboxGreetingState:(long long)arg4 maximumGreetingDuration:(double)arg5 minimumPasswordLength:(unsigned long long)arg6 maximumPasswordLength:(unsigned long long)arg7;
- (id)initWithCoder:(id)arg1;

@end
