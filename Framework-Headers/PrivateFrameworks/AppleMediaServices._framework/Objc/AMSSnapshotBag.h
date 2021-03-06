//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagProtocol-Protocol.h>
#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class AMSBagFrozenDataSource, AMSProcessInfo, NSDate, NSString;

@interface AMSSnapshotBag : NSObject <NSSecureCoding, AMSBagProtocol>
{
    NSDate *_creationDate;
    AMSBagFrozenDataSource *_dataSource;
}

@property (readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (strong, nonatomic) AMSBagFrozenDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)URLForKey:(id)arg1 account:(id)arg2;
- (id)_initWithDataSource:(id)arg1;
- (id)_initWithSnapshotBag:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (id)compile;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)integerForKey:(id)arg1;
- (BOOL)isLoaded;
- (id)stringForKey:(id)arg1;

@end

