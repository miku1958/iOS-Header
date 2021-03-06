//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKFeatureApplicationDeclineDetails : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_declinedTermsIdentifier;
    NSString *_pathTermsIdentifier;
    NSString *_pathIdentifier;
}

@property (copy, nonatomic) NSString *declinedTermsIdentifier; // @synthesize declinedTermsIdentifier=_declinedTermsIdentifier;
@property (copy, nonatomic) NSString *pathIdentifier; // @synthesize pathIdentifier=_pathIdentifier;
@property (copy, nonatomic) NSString *pathTermsIdentifier; // @synthesize pathTermsIdentifier=_pathTermsIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

