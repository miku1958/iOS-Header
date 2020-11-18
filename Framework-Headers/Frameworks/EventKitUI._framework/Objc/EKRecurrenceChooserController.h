//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, UIColor;
@protocol EKRecurrenceChooserControllerDelegate;

@interface EKRecurrenceChooserController : NSObject
{
    id<EKRecurrenceChooserControllerDelegate> _delegate;
    UIColor *_backgroundColor;
    NSDate *_date;
}

@property (copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (copy) NSDate *date; // @synthesize date=_date;
@property (weak) id<EKRecurrenceChooserControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) long long frequency;

+ (int)dayFromNumber:(long long)arg1;
- (void).cxx_destruct;
- (id)cellForRow:(long long)arg1;
- (BOOL)drawBackgroundForRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (id)initWithDate:(id)arg1;
- (void)notifyDelegate;
- (long long)numberOfRows;
- (void)rowTapped:(long long)arg1;
- (id)startDateComponents:(unsigned long long)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;

@end
