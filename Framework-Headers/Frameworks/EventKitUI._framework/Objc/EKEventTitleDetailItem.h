//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

#import <EventKitUI/EKEventDetailTitleCellDelegate-Protocol.h>

@class NSDate, NSObject, UIColor, UITableViewCell;
@protocol EKEventTitleDetailItemDelegate;

__attribute__((visibility("hidden")))
@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate>
{
    UITableViewCell *_cell;
    UIColor *_color;
    BOOL _showDot;
    BOOL _cellNeedsUpdate;
    BOOL _hidesSeparator;
    BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    NSDate *_proposedTime;
    NSObject<EKEventTitleDetailItemDelegate> *_editDelegate;
}

@property (weak, nonatomic) NSObject<EKEventTitleDetailItemDelegate> *editDelegate; // @synthesize editDelegate=_editDelegate;
@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification; // @synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (nonatomic) BOOL hidesSeparator; // @synthesize hidesSeparator=_hidesSeparator;
@property (strong, nonatomic) NSDate *proposedTime; // @synthesize proposedTime=_proposedTime;

- (void).cxx_destruct;
- (void)_updateCellIfNeededForWidth:(double)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)editButtonPressed;
- (void)predictionWasActedOn;
- (void)reset;
- (void)setCellPosition:(int)arg1;
- (BOOL)shouldShowEditButtonInline;

@end

