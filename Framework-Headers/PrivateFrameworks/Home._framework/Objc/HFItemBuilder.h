//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMHome;

@interface HFItemBuilder : NSObject
{
    id _homeKitRepresentation;
    HMHome *_home;
}

@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) id homeKitRepresentation; // @synthesize homeKitRepresentation=_homeKitRepresentation;

+ (Class)homeKitRepresentationClass;
- (void).cxx_destruct;
- (id)_failureFutureWithReason:(id)arg1;
- (id)commitItem;
- (id)commitItemBuilderSetDiff:(id)arg1 addBlock:(CDUnknownBlockType)arg2 deleteBlock:(CDUnknownBlockType)arg3;
- (id)commitSetDiff:(id)arg1 addBlock:(CDUnknownBlockType)arg2 updateBlock:(CDUnknownBlockType)arg3 deleteBlock:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)initWithHome:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeKitRepresentation:(id)arg1;
- (id)verifyNameIsNotEmpty:(id)arg1;
- (id)verifyPropertiesAreSet:(id)arg1;
- (id)verifyProperty:(id)arg1 matchesCondition:(CDUnknownBlockType)arg2 description:(id)arg3;
- (id)verifyPropertyIsSet:(id)arg1;

@end

