//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

#import <HomeKitBackingStore/HMBQueryableModelFieldCoder-Protocol.h>

@class NSString;

@interface NSDate (HMB) <HMBQueryableModelFieldCoder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;
+ (id)hmbEncodeQueryableParameter:(id)arg1;
@end

