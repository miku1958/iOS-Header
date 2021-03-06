//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDAction.h>

#import <DataDetectorsUI/EKEventEditViewDelegate-Protocol.h>

@class DDRemoteActionViewController, NSString;

__attribute__((visibility("hidden")))
@interface DDCreateEventAction : DDAction <EKEventEditViewDelegate>
{
    DDRemoteActionViewController *viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) DDRemoteActionViewController *viewController; // @synthesize viewController;

+ (BOOL)actionAvailableForEvent:(id)arg1;
- (void).cxx_destruct;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (id)icon;
- (int)interactionType;
- (void)invalidate;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationURL;
- (void)prepareViewControllerForActionController:(id)arg1;

@end

