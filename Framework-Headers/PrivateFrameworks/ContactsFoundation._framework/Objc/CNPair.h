//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/NSSecureCoding-Protocol.h>

@interface CNPair : NSObject <NSSecureCoding>
{
    id _first;
    id _second;
}

@property (readonly) id first; // @synthesize first=_first;
@property (readonly) id second; // @synthesize second=_second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
