//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class NSString;

@interface AMSMescal : NSObject <AMSBagConsumer>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_DAAPActionsForURLBagActions:(id)arg1;
+ (BOOL)_matchSignSapURL:(id)arg1 bagDictionary:(id)arg2 error:(id *)arg3;
+ (id)_matchSignedActions:(id)arg1 withURL:(id)arg2 error:(id *)arg3;
+ (id)_signedActionDataFromRequest:(id)arg1 policy:(id)arg2;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (BOOL)primeTheConnectionWithBag:(id)arg1 error:(id *)arg2;
+ (BOOL)primeTheConnectionWithContract:(id)arg1 error:(id *)arg2;
+ (BOOL)primeTheConnectionWithContract:(id)arg1 logKey:(id)arg2 error:(id *)arg3;
+ (BOOL)shouldReprimeConnectionWithResult:(id)arg1;
+ (id)signatureFromData:(id)arg1 type:(long long)arg2 bag:(id)arg3 error:(id *)arg4;
+ (id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id *)arg4;
+ (id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id *)arg5;
+ (id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bag:(id)arg3 error:(id *)arg4;
+ (id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id *)arg4;
+ (id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id *)arg5;
+ (BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bag:(id)arg4 error:(id *)arg5;
+ (BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 error:(id *)arg5;
+ (BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5 error:(id *)arg6;

@end

