//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUUID.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface NSUUID (HMFoundation) <HMFObject>

@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)hmf_UUIDWithNamespace:(id)arg1 data:(id)arg2;
+ (id)hmf_zeroUUID;
+ (id)shortDescription;
+ (id)zeroUUID;
- (BOOL)hmf_isEqualToUUID:(id)arg1;
- (BOOL)hmf_isEqualToUUIDString:(id)arg1;
- (id)initWithNamespace:(id)arg1 data:(id)arg2;
@end
