//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/INCLocalExtending-Protocol.h>
#import <WorkflowKit/INIntentHandlerProviding-Protocol.h>

@class NSString;

@interface WFBundledIntentHandlerProvider : NSObject <INCLocalExtending, INIntentHandlerProviding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *localExtensionIdentifier;
@property (readonly) Class superclass;

+ (id)localIntentHandlerLaunchID;
+ (id)sharedInstance;
- (id)handlerForIntent:(id)arg1;
- (id)init;

@end

