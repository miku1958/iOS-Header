//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSPredicate;
@protocol _SFServiceIdentifier;

@interface SFCredentialSearchFilter : NSObject <NSCopying, NSSecureCoding>
{
    id _credentialSearchFilterInternal;
    NSPredicate *_attributesPredicate;
}

@property (strong, nonatomic) NSPredicate *attributesPredicate; // @synthesize attributesPredicate=_attributesPredicate;
@property (strong, nonatomic) NSDate *maximumCreationDate;
@property (strong, nonatomic) NSDate *maximumModificationDate;
@property (strong, nonatomic) NSDate *minimumCreationDate;
@property (strong, nonatomic) NSDate *minimumModificationDate;
@property (strong, nonatomic) NSArray<_SFServiceIdentifier> *serviceIdentifiers;
@property (strong, nonatomic) NSArray *usernames;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

