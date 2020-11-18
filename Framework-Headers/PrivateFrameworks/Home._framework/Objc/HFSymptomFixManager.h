//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HMSymptomFixSessionDelegate-Protocol.h>

@class NSMutableSet, NSString;

@interface HFSymptomFixManager : NSObject <HMSymptomFixSessionDelegate>
{
    NSMutableSet *_items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableSet *items; // @synthesize items=_items;
@property (readonly) Class superclass;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_itemForFixSession:(id)arg1;
- (id)_itemForSymptom:(id)arg1 accessory:(id)arg2;
- (BOOL)anySymptomIsBeingFixedForFixableObject:(id)arg1;
- (void)fixSession:(id)arg1 didChangeState:(long long)arg2;
- (long long)fixStateForSymptom:(id)arg1 accessory:(id)arg2;
- (void)fixSymptom:(id)arg1 forFixableObject:(id)arg2 presentingViewController:(id)arg3;
- (id)init;

@end

