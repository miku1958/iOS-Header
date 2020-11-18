//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTYUtilities : NSObject
{
    BOOL _inUnitTestMode;
    BOOL _headphoneJackSupportsTTY;
}

@property (nonatomic) BOOL headphoneJackSupportsTTY; // @synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY;
@property (nonatomic) BOOL inUnitTestMode; // @synthesize inUnitTestMode=_inUnitTestMode;

+ (void)cancelCallPromptDisplay;
+ (BOOL)contactIsTTYContact:(id)arg1;
+ (void)contactIsTTYContact:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)displayCallPromptForContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (BOOL)hardwareTTYIsSupported;
+ (BOOL)isAppleInternalBuild;
+ (id)phoneNumberStringFromString:(id)arg1;
+ (BOOL)relayIsSupported;
+ (id)relayPhoneNumber;
+ (id)sharedUtilityProvider;
+ (BOOL)softwareTTYIsSupported;
+ (BOOL)ttyShouldBeRealtimeForCall:(id)arg1;
- (id)bubbleColorForMe:(BOOL)arg1;
- (id)bubbleFillForMe:(BOOL)arg1;
- (struct UIEdgeInsets)bubbleInsetForMe:(BOOL)arg1;
- (BOOL)contactIsTTYContact:(id)arg1;
- (id)conversationForCallUID:(id)arg1;
- (unsigned long long)currentPreferredTransportMethod;
- (BOOL)deleteConversationWithCallUID:(id)arg1;
- (id)largeTTYIconWithTint:(id)arg1;
- (id)myPhoneNumber;
- (void)setTTYDictionaryAvailability:(BOOL)arg1;
- (long long)textAlignmentForMe:(BOOL)arg1;
- (struct UIEdgeInsets)textInsetForMe:(BOOL)arg1;
- (id)tintedTTYIcon;
- (id)ttyIconWithTint:(id)arg1;
- (id)ttyMeContact;

@end

