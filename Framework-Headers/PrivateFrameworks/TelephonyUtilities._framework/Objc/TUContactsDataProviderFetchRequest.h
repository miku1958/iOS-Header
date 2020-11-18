//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TUContactsDataProviderFetchRequest : NSObject
{
    BOOL _useNetworkCountryCode;
    BOOL _voicemail;
    BOOL _emergency;
    BOOL _blocked;
    NSString *_contactIdentifier;
    NSArray *_auxiliaryKeysToFetch;
    NSString *_phoneNumberPrefixHint;
    NSString *_callerNameFromNetwork;
    NSString *_isoCountryCode;
    NSArray *_handles;
}

@property (copy, nonatomic) NSArray *auxiliaryKeysToFetch; // @synthesize auxiliaryKeysToFetch=_auxiliaryKeysToFetch;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked; // @synthesize blocked=_blocked;
@property (readonly, copy, nonatomic) NSString *callerNameFromNetwork; // @synthesize callerNameFromNetwork=_callerNameFromNetwork;
@property (copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (readonly, nonatomic, getter=isEmergency) BOOL emergency; // @synthesize emergency=_emergency;
@property (readonly, copy, nonatomic) NSArray *handles; // @synthesize handles=_handles;
@property (readonly, copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property (copy, nonatomic) NSString *phoneNumberPrefixHint; // @synthesize phoneNumberPrefixHint=_phoneNumberPrefixHint;
@property (nonatomic) BOOL useNetworkCountryCode; // @synthesize useNetworkCountryCode=_useNetworkCountryCode;
@property (readonly, nonatomic, getter=isVoicemail) BOOL voicemail; // @synthesize voicemail=_voicemail;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithCall:(id)arg1;
- (id)initWithHandle:(id)arg1;
- (id)initWithHandles:(id)arg1;

@end

