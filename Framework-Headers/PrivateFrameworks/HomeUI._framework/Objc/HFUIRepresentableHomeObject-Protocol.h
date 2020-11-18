//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HFHomeKitObject-Protocol.h>
#import <HomeUI/HFServiceNameComponentsProviding-Protocol.h>

@class NSSet;
@protocol HFUIRepresentableHomeObject;

@protocol HFUIRepresentableHomeObject <HFServiceNameComponentsProviding, HFHomeKitObject>

@property (readonly, nonatomic) NSSet *hf_accessories;
@property (readonly, nonatomic) NSSet *hf_profiles;
@property (readonly, nonatomic) NSSet *hf_services;
@property (readonly, nonatomic) id<HFUIRepresentableHomeObject> hf_topLevelAccessoryLikeHomeObject;

@end
