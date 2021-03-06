//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/AMSBagProtocol-Protocol.h>

@class AMSProcessInfo, NSDate, NSDictionary, NSString;

@interface MTFrozenBag : NSObject <AMSBagProtocol>
{
    NSString *_profile;
    NSString *_profileVersion;
    NSDictionary *_config;
}

@property (copy, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (copy, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property (copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 config:(id)arg3;
- (id)integerForKey:(id)arg1;
- (id)stringForKey:(id)arg1;

@end

