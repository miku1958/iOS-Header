//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INTermsAndConditionsExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface INTermsAndConditions : NSObject <INTermsAndConditionsExport, NSSecureCoding, NSCopying>
{
    NSString *_localizedTermsAndConditionsText;
    NSURL *_privacyPolicyURL;
    NSURL *_termsAndConditionsURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *localizedTermsAndConditionsText; // @synthesize localizedTermsAndConditionsText=_localizedTermsAndConditionsText;
@property (readonly, nonatomic) NSURL *privacyPolicyURL; // @synthesize privacyPolicyURL=_privacyPolicyURL;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *termsAndConditionsURL; // @synthesize termsAndConditionsURL=_termsAndConditionsURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedTermsAndConditionsText:(id)arg1 privacyPolicyURL:(id)arg2 termsAndConditionsURL:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

