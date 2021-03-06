//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

@interface DDCallAction : DDTelephoneNumberAction
{
}

+ (id)callProvider;
+ (BOOL)isAvailable;
- (long long)TTYType;
- (double)_systemFontSize;
- (BOOL)_titleFitsInActionSheet:(id)arg1;
- (BOOL)canBePerformedByOpeningURL;
- (id)dialRequest;
- (id)dialRequestWithProvider:(id)arg1;
- (int)interactionType;
- (BOOL)isEmail;
- (id)localizedCallStringForName:(id)arg1 usingCallRelay:(BOOL)arg2;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationTitleTargetString;
- (id)notificationURL;
- (void)performFromView:(id)arg1;

@end

