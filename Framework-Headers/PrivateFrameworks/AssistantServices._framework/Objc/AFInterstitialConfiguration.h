//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFInterstitialConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    long long _style;
    NSString *_languageCode;
    long long _gender;
}

@property (readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property (readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

