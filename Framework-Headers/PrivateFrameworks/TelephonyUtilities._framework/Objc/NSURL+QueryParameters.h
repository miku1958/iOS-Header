//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (QueryParameters)

@property (readonly, nonatomic) int addressBookUID;
@property (readonly, nonatomic, getter=isBasebandLogURL) BOOL basebandLogURL;
@property (readonly) int callService;
@property (readonly) BOOL forceAssist;
@property (readonly, copy, nonatomic) NSString *formattedPhoneNumber;
@property (readonly) BOOL isEmergencyCallURL;
@property (readonly) BOOL isEmergencyURL;
@property (readonly) BOOL isVoicemailURL;
@property (readonly, copy, nonatomic) NSString *numberQualifiedForAddressBook;
@property (readonly) NSString *originatingUIIdentifier;
@property (readonly) NSString *phoneNumber;
@property (readonly) BOOL suppressAssist;
@property (readonly) BOOL wasAlreadyAssisted;

+ (id)URLWithTelephoneNumber:(id)arg1;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5;
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(BOOL)arg2;
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(BOOL)arg3;
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(BOOL)arg3;
+ (id)faceTimeAnswerURLWithSourceIdentifier:(id)arg1;
+ (id)faceTimeLaunchForIncomingCallURL;
+ (id)faceTimeLaunchForOutgoingConversationURL;
+ (id)faceTimePromptURLWithURL:(id)arg1;
+ (id)faceTimeShowInCallUIURL;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(BOOL)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(BOOL)arg3;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5 audioOnly:(BOOL)arg6;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(BOOL)arg3 forceAssist:(BOOL)arg4 suppressAssist:(BOOL)arg5 wasAssisted:(BOOL)arg6;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5;
+ (id)faceTimeURLWithURL:(id)arg1;
+ (id)telephonyURLForTelEmergencyCall;
+ (id)telephonyURLForVoicemail;
+ (id)telephonyURLWithDestinationID:(id)arg1;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5;
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(BOOL)arg2;
- (id)URLByDeletingQueryParameterWithKey:(id)arg1;
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;
- (id)_destinationIDConvertingNumbersToLatin:(BOOL)arg1;
- (BOOL)_dialAssistBooleanQueryParameterValueForKey:(id)arg1;
- (BOOL)_hasScheme:(id)arg1;
- (BOOL)_isPhoneNumberID:(id)arg1;
- (id)_mobilePhonePathParameters;
- (id)_mobilePhoneQueryParameters;
- (id)answerRequestSourceIdentifier;
- (id)faceTimeDestinationAccount;
- (BOOL)hasNoPromptOption;
- (BOOL)hasTelephonyScheme;
- (BOOL)isAnswerRequestURL;
- (BOOL)isDialCallURL;
- (BOOL)isFaceTimeAudioPromptURL;
- (BOOL)isFaceTimeAudioURL;
- (BOOL)isFaceTimeMultiwayURL;
- (BOOL)isFaceTimePromptURL;
- (BOOL)isFaceTimeURL;
- (BOOL)isLaunchForIncomingCallURL;
- (BOOL)isLaunchForOutgoingConversationURL;
- (BOOL)isShowInCallUIURL;
- (BOOL)isTelephonyPromptURL;
- (BOOL)isTelephonyURL;
- (BOOL)isWebSafeTelephoneURL;
- (id)queryParameters;
- (id)telephonyParameterDictionary;
- (id)tuQueryParameters;
- (id)webSafeTelephoneURL;
@end
