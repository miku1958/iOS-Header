//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/AMSBagProtocol-Protocol.h>

@class AMSProcessInfo, NSDate, NSDictionary, NSString, SSURLBag;

@interface IKURLBagCache : NSObject <AMSBagProtocol>
{
    SSURLBag *_urlBag;
    NSDictionary *_existingDictionary;
    NSString *_cachePath;
}

@property (readonly, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *existingDictionary; // @synthesize existingDictionary=_existingDictionary;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SSURLBag *urlBag; // @synthesize urlBag=_urlBag;

+ (id)URLBagContext;
+ (id)sharedCache;
- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2;
- (void)_loadWithNotification:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_urlForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (void)checkTrustStatusForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)init;
- (id)integerForKey:(id)arg1;
- (BOOL)isLoaded;
- (BOOL)isTrustedURL:(id)arg1;
- (void)loadValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)stringForKey:(id)arg1;
- (void)updateWithInvalidation:(BOOL)arg1;
- (id)valueForKey:(id)arg1;

@end
