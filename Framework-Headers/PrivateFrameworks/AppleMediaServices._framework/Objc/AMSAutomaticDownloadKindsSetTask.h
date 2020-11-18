//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, NSArray, NSString;
@protocol AMSBagProtocol;

@interface AMSAutomaticDownloadKindsSetTask : AMSTask <AMSBagConsumer>
{
    ACAccount *_account;
    id<AMSBagProtocol> _bag;
    NSArray *_enabledMediaKinds;
}

@property (readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag; // @synthesize bag=_bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *enabledMediaKinds; // @synthesize enabledMediaKinds=_enabledMediaKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
- (void).cxx_destruct;
- (id)initWithEnabledMediaKinds:(id)arg1 account:(id)arg2 bag:(id)arg3;
- (id)perform;

@end
