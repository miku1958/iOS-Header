//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableIndexSet, NSMutableSet, PKAssertion;
@protocol OS_dispatch_queue;

@interface PKAutomaticPassPresentationSuppressor : NSObject
{
    PKAssertion *_suppressionAssertion;
    NSMutableSet *_permissionRequestCompletionBlocks;
    NSMutableIndexSet *_suppressionRequestTokens;
    NSMutableIndexSet *_backgrounedSuppressionIdentifiers;
    NSDate *_backgroundedDate;
    long long _permissionState;
    unsigned long long _nextRequestToken;
    NSObject<OS_dispatch_queue> *_suppressorQueue;
}

@property (readonly, nonatomic) BOOL isSuppressing;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_acquireSuppressionAssertionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_requestPermissionAndAquireSupressionAssertionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)endSuppressionWithRequestToken:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)requestSuppressionWithResponseHandler:(CDUnknownBlockType)arg1;

@end
