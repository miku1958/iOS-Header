//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNObjectValidation-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNContactRelation : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>
{
    NSString *_name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;

+ (id)contactRelationWithName:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid:(id *)arg1;

@end

