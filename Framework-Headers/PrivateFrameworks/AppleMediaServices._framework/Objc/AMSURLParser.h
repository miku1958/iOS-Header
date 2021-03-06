//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSBagConsumer_Project-Protocol.h>

@class NSString;
@protocol AMSBagProtocol;

@interface AMSURLParser : NSObject <AMSBagConsumer_Project, AMSBagConsumer>
{
    id<AMSBagProtocol> _bag;
}

@property (strong, nonatomic) id<AMSBagProtocol> bag; // @synthesize bag=_bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
- (void).cxx_destruct;
- (id)_commerceUIArrayForKey:(id)arg1;
- (id)_defaultWebAllowedForURL:(id)arg1;
- (id)_dynamicUIAllowedForURL:(id)arg1;
- (id)_legacyWebAllowedForURL:(id)arg1;
- (BOOL)_matchURL:(id)arg1 toPatterns:(id)arg2;
- (void)_waitForPromises:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)bagContract;
- (id)initWithBag:(id)arg1;
- (id)initWithBagContract:(id)arg1;
- (id)isCommerceUIURL:(id)arg1;
- (id)typeForCommerceUIURL:(id)arg1;
- (id)typeForURL:(id)arg1;

@end

