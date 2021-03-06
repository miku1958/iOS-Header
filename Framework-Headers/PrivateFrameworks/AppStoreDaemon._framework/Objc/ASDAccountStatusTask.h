//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@protocol ASDClipServiceBroker;

@interface ASDAccountStatusTask : NSObject <NSSecureCoding>
{
    id<ASDClipServiceBroker> _broker;
    BOOL _lookupFamilyInfoIfNecessary;
}

@property BOOL lookupFamilyInfoIfNecessary; // @synthesize lookupFamilyInfoIfNecessary=_lookupFamilyInfoIfNecessary;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)statusWithCompletion:(CDUnknownBlockType)arg1;

@end

