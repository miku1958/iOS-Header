//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKSecureElementApplet : NSObject <NSSecureCoding>
{
    BOOL _locked;
    NSString *_identifier;
    unsigned long long _lifecycleState;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long lifecycleState; // @synthesize lifecycleState=_lifecycleState;
@property (readonly, nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_locked;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned long long)arg2 locked:(BOOL)arg3;

@end

