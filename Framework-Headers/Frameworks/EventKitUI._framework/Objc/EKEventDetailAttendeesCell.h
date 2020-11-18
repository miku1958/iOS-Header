//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailCell.h>

@class UIView, UIViewController;
@protocol EKEventDetailAttendeesList;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesCell : EKEventDetailCell
{
    UIView<EKEventDetailAttendeesList> *_attendeesListView;
    BOOL _useFaces;
    UIViewController *_viewController;
}

@property BOOL useFaces; // @synthesize useFaces=_useFaces;
@property (weak) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (id)_attendeesListView;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)setAttendees:(id)arg1;
- (BOOL)update;

@end

