//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _ICContact;

@interface _ICContactRecord : NSObject
{
    unsigned char _changeType;
    NSString *_identifier;
    _ICContact *_contact;
}

@property (readonly, nonatomic) unsigned char changeType; // @synthesize changeType=_changeType;
@property (readonly, nonatomic) _ICContact *contact; // @synthesize contact=_contact;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 contact:(id)arg2 changeType:(unsigned char)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContactRecord:(id)arg1;

@end

