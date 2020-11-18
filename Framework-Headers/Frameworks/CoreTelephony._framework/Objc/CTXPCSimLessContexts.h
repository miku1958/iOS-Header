//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray, NSUUID;

@interface CTXPCSimLessContexts : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_subscriptions;
    NSUUID *_voicePreferred;
}

@property (strong, nonatomic) NSArray *subscriptions; // @synthesize subscriptions=_subscriptions;
@property (strong, nonatomic) NSUUID *voicePreferred; // @synthesize voicePreferred=_voicePreferred;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)findForAccount:(id)arg1;
- (id)findForUuid:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

