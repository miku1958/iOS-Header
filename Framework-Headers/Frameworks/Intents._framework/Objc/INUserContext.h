//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class INUserContextStore;

@interface INUserContext : NSObject <NSSecureCoding>
{
    INUserContextStore *_store;
}

+ (long long)_type;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_becomeCurrentNoHelper;
- (id)_init;
- (void)_setStore:(id)arg1;
- (void)becomeCurrent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
