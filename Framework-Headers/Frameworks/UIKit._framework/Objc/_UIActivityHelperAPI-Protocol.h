//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, UIActivity;

@protocol _UIActivityHelperAPI <NSObject>
- (NSArray *)availableActivitiesForItemValues:(NSArray *)arg1 applicationExtensionActivities:(NSArray *)arg2 withActivity:(UIActivity *)arg3 sourceIsManaged:(BOOL)arg4 shouldMatchOnlyUserElectedExtensions:(BOOL)arg5 activityItems:(NSArray *)arg6 applicationActivities:(NSArray *)arg7 activityTypeOrder:(NSArray *)arg8 includedActivityTypes:(NSArray *)arg9 excludedActivityCategories:(long long)arg10;
- (void)cancelUpdatesIfNeeded;
@end

