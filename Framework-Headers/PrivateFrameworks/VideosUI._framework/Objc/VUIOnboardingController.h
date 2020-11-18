//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, VUIAccessViewController;

__attribute__((visibility("hidden")))
@interface VUIOnboardingController : NSObject
{
    VUIAccessViewController *_accessVC;
    NSArray *_bundleIDs;
    NSDictionary *_options;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;

+ (id)eligibleBundleIDs;
- (void).cxx_destruct;
- (void)_runConsentFlow;
- (void)dealloc;
- (void)dismiss;
- (void)present;
- (void)presentForBundleIDs:(id)arg1 withOptions:(id)arg2;

@end

