//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMProtoBufMerge-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface HMHAPMetadata : NSObject <HMProtoBufMerge>
{
    NSNumber *_version;
    NSDictionary *_hapChrMap;
    NSDictionary *_hapSvcMap;
    NSDictionary *_hapCategoryMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSDictionary *hapCategoryMap; // @synthesize hapCategoryMap=_hapCategoryMap;
@property (strong, nonatomic) NSDictionary *hapChrMap; // @synthesize hapChrMap=_hapChrMap;
@property (strong, nonatomic) NSDictionary *hapSvcMap; // @synthesize hapSvcMap=_hapSvcMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSNumber *version; // @synthesize version=_version;

+ (id)getSharedInstance;
- (void).cxx_destruct;
- (BOOL)applyProtoBufData:(id)arg1 callbackOperations:(id)arg2;
- (id)categoryForNumber:(id)arg1;
- (id)characteristicTypeDescription:(id)arg1;
- (id)serviceTypeDescription:(id)arg1;
- (BOOL)shouldNotCacheCharacteristicOfType:(id)arg1;

@end

