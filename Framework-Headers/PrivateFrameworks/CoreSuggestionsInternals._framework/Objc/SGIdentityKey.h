//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSString;

@interface SGIdentityKey : NSObject <NSCopying>
{
    NSString *_content;
    unsigned long long _type;
}

@property (readonly, nonatomic) NSString *externalId;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (unsigned long long)identityTypeForKeyPart:(id)arg1;
+ (BOOL)isSupportedEntityType:(long long)arg1;
+ (id)keyForContactExternalId:(int)arg1;
+ (id)keyForContactUniqueId:(id)arg1;
+ (id)keyForEmail:(id)arg1;
+ (id)keyForInstantMessageAddress:(id)arg1;
+ (id)keyForNormalizedEmail:(id)arg1;
+ (id)keyForNormalizedPhone:(id)arg1;
+ (id)keyForPersonHandle:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)emailAddress;
- (BOOL)hasEmailAddress;
- (BOOL)hasInstantMessageAddress;
- (BOOL)hasPhone;
- (unsigned long long)hash;
- (id)identityKey;
- (id)initWithSerialized:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 content:(id)arg2;
- (id)instantMessageAddress;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToIdentityKey:(id)arg1;
- (id)phone;
- (id)serialize;
- (id)uniqueIdentifier;

@end
