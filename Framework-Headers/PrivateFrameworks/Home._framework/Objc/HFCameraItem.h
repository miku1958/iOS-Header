//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAccessoryProfileItem.h>

#import <Home/HFCompoundItemProtocol-Protocol.h>

@class NSArray, NSString;
@protocol HFHomeKitObject;

@interface HFCameraItem : HFAccessoryProfileItem <HFCompoundItemProtocol>
{
}

@property (readonly, nonatomic) NSArray *allHomeKitObjects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly, nonatomic) BOOL isCompoundItem;
@property (readonly, nonatomic) unsigned long long numberOfCompoundItems;
@property (readonly, nonatomic) id<HFHomeKitObject> primaryHomeKitObject;
@property (readonly) Class superclass;

+ (BOOL)cameraContainsMotionServiceItem:(id)arg1;
+ (void)getErrorDescription:(out id *)arg1 detailedErrorDescription:(out id *)arg2 forCameraStreamError:(id)arg3;
- (id)_subclass_updateWithOptions:(id)arg1;

@end

