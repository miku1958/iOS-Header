//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/NSCopying-Protocol.h>
#import <CoreSpotlight/NSSecureCoding-Protocol.h>

@class NSString;

@interface CSCustomAttributeKey : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _searchable;
    BOOL _searchableByDefault;
    BOOL _unique;
    BOOL _multiValued;
    NSString *_keyName;
}

@property (strong) NSString *keyName; // @synthesize keyName=_keyName;
@property (getter=isMultiValued) BOOL multiValued; // @synthesize multiValued=_multiValued;
@property (getter=isSearchable) BOOL searchable; // @synthesize searchable=_searchable;
@property (getter=isSearchableByDefault) BOOL searchableByDefault; // @synthesize searchableByDefault=_searchableByDefault;
@property (getter=isUnique) BOOL unique; // @synthesize unique=_unique;

+ (BOOL)_keyNameIsValid:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyName:(id)arg1;
- (id)initWithKeyName:(id)arg1 searchable:(BOOL)arg2 searchableByDefault:(BOOL)arg3 unique:(BOOL)arg4 multiValued:(BOOL)arg5;
- (BOOL)isEqual:(id)arg1;

@end
