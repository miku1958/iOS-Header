//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFDumpState-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface HMAccessoryCategory : NSObject <NSSecureCoding, HMObjectMerge, HMFDumpState>
{
    NSString *_categoryType;
    NSString *_name;
}

@property (copy, nonatomic) NSString *categoryType; // @synthesize categoryType=_categoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isTelevisionAccessoryCategory;
@property (readonly) BOOL isWiFiRouterAccessoryCategory;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
