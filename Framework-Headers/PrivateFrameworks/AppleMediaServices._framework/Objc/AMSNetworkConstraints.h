//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSBagConsumer_Project-Protocol.h>

@class NSMutableDictionary, NSString;

@interface AMSNetworkConstraints : NSObject <AMSBagConsumer_Project, AMSBagConsumer>
{
    NSMutableDictionary *_sizeLimits;
}

@property (readonly, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *sizeLimits; // @synthesize sizeLimits=_sizeLimits;
@property (readonly) Class superclass;

+ (id)_networkConstraintsForMediaType:(id)arg1 withArray:(id)arg2;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)networkConstraintsForMediaType:(id)arg1 withBag:(id)arg2;
- (void).cxx_destruct;
- (void)_disableAllNetworkTypes;
- (id)_initWithStoreConstraintDictionary:(id)arg1;
- (void)_setSizeLimit:(long long)arg1 forNetworkType:(id)arg2;
- (long long)_sizeLimitForNetworkType:(id)arg1;
- (BOOL)hasSizeLimitForNetworkType:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToConstraints:(id)arg1;
- (long long)sizeLimitForNetworkType:(id)arg1;

@end

