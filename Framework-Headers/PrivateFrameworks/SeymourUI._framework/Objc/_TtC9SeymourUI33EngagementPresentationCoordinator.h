//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SeymourUI/IAMApplicationContextProvider-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI33EngagementPresentationCoordinator : NSObject <IAMApplicationContextProvider>
{
    MISSING_TYPE *engagementClient;
    MISSING_TYPE *eventHub;
    MISSING_TYPE *messageCoordinator;
    MISSING_TYPE *subscriptionToken;
    MISSING_TYPE *engagementBannerRuleInfo;
    MISSING_TYPE *modalContextProvider;
    MISSING_TYPE *isActive;
}

@property (nonatomic, readonly) BOOL allowsModalMessageDisplay;

- (void).cxx_destruct;
- (id)contextPropertyWithName:(id)arg1;
- (id)init;
- (id)viewControllerForModalPresentation;

@end

