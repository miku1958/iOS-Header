//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@protocol CalendarPublishingActivityDelegate;

@interface CalendarPublishingActivityViewController : UIActivityViewController
{
    id<CalendarPublishingActivityDelegate> _activityDelegate;
}

@property (weak) id<CalendarPublishingActivityDelegate> activityDelegate; // @synthesize activityDelegate=_activityDelegate;

- (void).cxx_destruct;
- (void)_prepareActivity:(id)arg1;
- (BOOL)_shouldShowSystemActivity:(id)arg1;

@end

