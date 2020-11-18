//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDAction.h>

@class LSAppLink;

__attribute__((visibility("hidden")))
@interface DDOpenURLAction : DDAction
{
    LSAppLink *_appLink;
    BOOL _appLinkInitDone;
}

- (void).cxx_destruct;
- (id)appLink;
- (BOOL)canBePerformedByOpeningURL;
- (id)companionAction;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationURL;
- (void)performFromView:(id)arg1;
- (BOOL)useAppLink;

@end

