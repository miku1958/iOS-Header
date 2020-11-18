//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTYTelephonyUtilities : NSObject
{
    BOOL _headphoneJackSupportsTTY;
}

@property (nonatomic) BOOL headphoneJackSupportsTTY; // @synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY;

+ (BOOL)isRTTSupported;
+ (BOOL)relayIsSupported;
+ (id)relayPhoneNumber;
+ (id)sharedUtilityProvider;
+ (BOOL)shouldUseRTT;
- (BOOL)contactIsTTYContact:(id)arg1;
- (unsigned long long)currentPreferredTransportMethod;
- (void)dealloc;
- (void)headphoneStateChangedNotification:(id)arg1;
- (id)init;
- (void)mediaServerDied;
- (void)registerNotifications;
- (BOOL)relayIsSupported;
- (void)updateHeadphoneState;

@end
