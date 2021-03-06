//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/AMSBagProtocol-Protocol.h>

@class AMSProcessInfo, ISURLBag, NSDate, NSString, SSBag;

@interface ISAMSBagShim : NSObject <AMSBagProtocol>
{
    SSBag *_bag;
    ISURLBag *_URLBag;
    long long _type;
}

@property (strong, nonatomic) ISURLBag *URLBag; // @synthesize URLBag=_URLBag;
@property (strong, nonatomic) SSBag *bag; // @synthesize bag=_bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly) Class superclass;
@property (nonatomic) long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)initWithBag:(id)arg1;
- (id)initWithURLBag:(id)arg1;
- (id)integerForKey:(id)arg1;
- (BOOL)isLoaded;
- (id)stringForKey:(id)arg1;

@end

