//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPassPersonalization : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _requiredPersonalizationFields;
    NSString *_termsAndConditions;
    NSString *_localizedDescription;
}

@property (readonly, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property (readonly, nonatomic) unsigned long long requiredPersonalizationFields; // @synthesize requiredPersonalizationFields=_requiredPersonalizationFields;
@property (readonly, nonatomic) NSString *termsAndConditions; // @synthesize termsAndConditions=_termsAndConditions;

+ (id)passPersonalizationWithPassBundle:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

