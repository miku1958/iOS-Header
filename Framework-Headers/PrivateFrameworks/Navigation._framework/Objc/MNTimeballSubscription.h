//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNJSONOutput-Protocol.h>
#import <Navigation/NSCopying-Protocol.h>
#import <Navigation/NSSecureCoding-Protocol.h>

@class MNPlannedDestination, NSString;

__attribute__((visibility("hidden")))
@interface MNTimeballSubscription : NSObject <MNJSONOutput, NSCopying, NSSecureCoding>
{
    MNPlannedDestination *_destination;
    long long _options;
    unsigned long long _refreshPolicy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) MNPlannedDestination *destination; // @synthesize destination=_destination;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long options; // @synthesize options=_options;
@property (readonly, nonatomic) unsigned long long refreshPolicy; // @synthesize refreshPolicy=_refreshPolicy;
@property (readonly) Class superclass;

+ (id)subscriptionForDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonDictionary;

@end
