//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDisplayInfoProviding-Protocol.h>

@class FBSDisplayConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface _UIDisplayInfoProvider : NSObject <_UIDisplayInfoProviding>
{
    FBSDisplayConfiguration *displayConfiguration;
    unsigned long long artworkSubtype;
    double homeAffordanceOverlayAllowance;
    double systemMinimumMargin;
    struct UIEdgeInsets peripheryInsets;
    struct UIEdgeInsets safeAreaInsetsPortrait;
    struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
    struct UIEdgeInsets safeAreaInsetsLandscapeRight;
    struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
}

@property (nonatomic) unsigned long long artworkSubtype; // @synthesize artworkSubtype;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double homeAffordanceOverlayAllowance; // @synthesize homeAffordanceOverlayAllowance;
@property (readonly, nonatomic) struct UIEdgeInsets peripheryInsets; // @synthesize peripheryInsets;
@property (readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeLeft; // @synthesize safeAreaInsetsLandscapeLeft;
@property (readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeRight; // @synthesize safeAreaInsetsLandscapeRight;
@property (readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortrait; // @synthesize safeAreaInsetsPortrait;
@property (readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown; // @synthesize safeAreaInsetsPortraitUpsideDown;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double systemMinimumMargin; // @synthesize systemMinimumMargin;

- (void).cxx_destruct;

@end

