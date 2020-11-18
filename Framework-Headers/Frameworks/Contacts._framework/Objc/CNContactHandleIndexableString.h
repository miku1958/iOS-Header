//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;
@protocol _CNContactHandleStringEquivalenceStrategy;

__attribute__((visibility("hidden")))
@interface CNContactHandleIndexableString : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_indexKey;
    NSString *_stringValue;
    id<_CNContactHandleStringEquivalenceStrategy> _equivalenceStrategy;
}

@property (readonly, nonatomic) id<_CNContactHandleStringEquivalenceStrategy> equivalenceStrategy; // @synthesize equivalenceStrategy=_equivalenceStrategy;
@property (readonly, copy, nonatomic) NSString *indexKey; // @synthesize indexKey=_indexKey;
@property (readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;

+ (id)emailIndexKey:(id)arg1;
+ (id)equivalenceStrategyWithString:(id)arg1;
+ (id)phoneNumberIndexKey:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullString:(id)arg1 indexKey:(id)arg2 equivalenceStrategy:(id)arg3;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentToString:(id)arg1 strict:(BOOL *)arg2;

@end
