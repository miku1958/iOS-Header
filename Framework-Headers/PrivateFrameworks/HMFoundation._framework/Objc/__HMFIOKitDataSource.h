//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFSystemInfoProductInfoDataSource-Protocol.h>
#import <HMFoundation/HMFSystemInfoSerialNumberDataSource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface __HMFIOKitDataSource : HMFObject <HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long productClass;
@property (readonly, nonatomic) long long productPlatform;
@property (readonly, nonatomic) long long productVariant;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly) Class superclass;


@end

