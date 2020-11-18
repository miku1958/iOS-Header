//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UIContentSizeCategoryPreference : NSObject
{
    BOOL _observingNotification;
    NSString *_preferredContentSizeCategory;
}

@property (readonly, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;

+ (void)_forceSystemPreferenceToContentSizeCategory:(id)arg1;
+ (void)_resetSystemPreference;
+ (id)system;
- (void).cxx_destruct;
- (void)_beginObservingPreferredContentSizeChangedNotification;
- (void)_endObservingPreferredContentSizeChangedNotification;
- (void)_postContentSizeCategoryDidChangeNotification;
- (void)_updateContentSizeCategory:(id)arg1 postingNotification:(BOOL)arg2;
- (void)_updateContentSizeCategoryFromUserDefaultsPostingNotification:(BOOL)arg1;
- (void)checkForChanges;
- (void)dealloc;
- (id)init;
- (id)initWithContentSizeCategory:(id)arg1;

@end
