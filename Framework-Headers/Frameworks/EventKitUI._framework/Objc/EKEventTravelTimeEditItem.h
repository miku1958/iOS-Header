//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

@interface EKEventTravelTimeEditItem : EKEventEditItem
{
    BOOL _isHidden;
}

- (void)_updateHiddenState;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (BOOL)forceRefreshStartAndEndDatesOnCommit;
- (BOOL)isInline;
- (unsigned long long)numberOfSubitems;

@end

