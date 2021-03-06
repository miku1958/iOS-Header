//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSArray, NSDictionary, NSString;

@interface NSURL (ChatKitAdditions)

@property (readonly, nonatomic) BOOL ckAllowRetargeting;
@property (readonly, nonatomic) BOOL ckIsLaunchAppURL;
@property (readonly, nonatomic) BOOL ckIsUnitTestingURL;
@property (readonly, nonatomic) NSString *ckLaunchURLBalloonPluginBundleID;
@property (readonly, nonatomic) NSDictionary *ckLaunchURLBalloonPluginPayload;
@property (readonly, nonatomic) NSString *ckLaunchURLPostComposeDismissal;
@property (readonly, nonatomic) NSString *ckLaunchURLPresentContentForMessageGUID;
@property (readonly, nonatomic) BOOL ckShouldShowComposeUI;
@property (readonly, nonatomic) BOOL ckShouldShowDigitalTouchCanvas;
@property (readonly, nonatomic) NSArray *ckSuggestedReplies;

+ (id)__ck_appleMapsURLForCoordinate:(struct CLLocationCoordinate2D)arg1 coordinateName:(id)arg2;
+ (id)ckURLForChatIdentifier:(id)arg1 entryBody:(id)arg2;
+ (id)ckURLForResource:(id)arg1 withExtension:(id)arg2;
- (BOOL)ckIsSMSPrivateURLScheme;
- (id)ckWillNotLaunchComposeUIURL;
@end

