//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSCountedSet;

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding>
{
    long long primaryType;
    NSCountedSet *_additionalAttachments;
}

@property (strong, nonatomic) NSCountedSet *additionalAttachments; // @synthesize additionalAttachments=_additionalAttachments;
@property (nonatomic) long long primaryType; // @synthesize primaryType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addAttachmentOfType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAttachments:(id)arg1;
- (unsigned long long)numberOfAdditionalAttachments;
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1;

@end

