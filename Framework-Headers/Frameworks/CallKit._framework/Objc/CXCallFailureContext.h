//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CXCallFailureContext : NSObject <CXCopying, NSSecureCoding>
{
    BOOL _hasWiFiSettingsRemediation;
    BOOL _hasCellularSettingsRemediation;
    BOOL _hasDateAndTimeSettingsRemediation;
    BOOL _hasLocationSettingsRemediation;
    NSString *_title;
    NSString *_message;
    long long _failureReason;
    long long _providerErrorCode;
    long long _providerEndedReason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long failureReason; // @synthesize failureReason=_failureReason;
@property (nonatomic) BOOL hasCellularSettingsRemediation; // @synthesize hasCellularSettingsRemediation=_hasCellularSettingsRemediation;
@property (nonatomic) BOOL hasDateAndTimeSettingsRemediation; // @synthesize hasDateAndTimeSettingsRemediation=_hasDateAndTimeSettingsRemediation;
@property (nonatomic) BOOL hasLocationSettingsRemediation; // @synthesize hasLocationSettingsRemediation=_hasLocationSettingsRemediation;
@property (nonatomic) BOOL hasWiFiSettingsRemediation; // @synthesize hasWiFiSettingsRemediation=_hasWiFiSettingsRemediation;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (nonatomic) long long providerEndedReason; // @synthesize providerEndedReason=_providerEndedReason;
@property (nonatomic) long long providerErrorCode; // @synthesize providerErrorCode=_providerErrorCode;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;

@end
