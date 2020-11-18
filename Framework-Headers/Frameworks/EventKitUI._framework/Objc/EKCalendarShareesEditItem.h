//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKCalendarEditItem.h>

#import <EventKitUI/EKShareePickerViewControllerDelegate-Protocol.h>
#import <EventKitUI/EKShareeViewControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, UILabel, UIView;

@interface EKCalendarShareesEditItem : EKCalendarEditItem <EKShareeViewControllerDelegate, EKShareePickerViewControllerDelegate>
{
    NSMutableArray *_shareeCells;
    UIView *_footerView;
    UILabel *_descriptionLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *shareeCells; // @synthesize shareeCells=_shareeCells;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addPersonCell;
- (void)_applyStyleToUILabel:(id)arg1;
- (void)_popBackToCalendarEditor:(BOOL)arg1;
- (id)_shareeCellForName:(id)arg1 detailText:(id)arg2 additionalDetailText:(id)arg3;
- (id)_stringForShareeAccessLevel:(unsigned long long)arg1;
- (id)_stringForShareeStatus:(unsigned long long)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (BOOL)configureWithCalendar:(id)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)eventStoreForShareePickerViewController:(id)arg1;
- (double)footerHeightForSection;
- (id)footerView;
- (id)footerViewForSection;
- (id)headerTitle;
- (void)layoutForWidth:(double)arg1;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (BOOL)saveStateToCalendar:(id)arg1;
- (void)shareePickerViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)shareeViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)shareeViewControllerDidChangeAccessLevel:(id)arg1;

@end

