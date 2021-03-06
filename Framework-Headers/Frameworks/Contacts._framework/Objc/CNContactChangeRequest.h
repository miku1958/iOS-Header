//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNContactChangeRequest : NSObject <NSSecureCoding>
{
    NSArray *_contacts;
    long long _kind;
    NSString *_linkIdentifier;
}

@property (readonly, copy, nonatomic) NSArray *contactIdentifiers;
@property (readonly, copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property (readonly, nonatomic) long long kind; // @synthesize kind=_kind;
@property (readonly, copy, nonatomic) NSString *linkIdentifier; // @synthesize linkIdentifier=_linkIdentifier;

+ (id)contactChangeRequestWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3;

@end

