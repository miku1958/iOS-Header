//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <PassKitUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSCalendar, NSString, NSTimeZone;
@protocol PKMonthDayCollectionViewControllerDelegate;

@interface PKMonthDayCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout>
{
    NSCalendar *_calendar;
    long long _dayNumber;
    long long _minimumDayNumber;
    long long _maximumDayNumber;
    id<PKMonthDayCollectionViewControllerDelegate> _dayDelegate;
    NSTimeZone *_timeZone;
}

@property (weak, nonatomic) id<PKMonthDayCollectionViewControllerDelegate> dayDelegate; // @synthesize dayDelegate=_dayDelegate;
@property (nonatomic) long long dayNumber; // @synthesize dayNumber=_dayNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maximumDayNumber; // @synthesize maximumDayNumber=_maximumDayNumber;
@property (nonatomic) long long minimumDayNumber; // @synthesize minimumDayNumber=_minimumDayNumber;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;

- (void).cxx_destruct;
- (id)_indexPathForDayNumber:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)initWithDayDelegate:(id)arg1 timeZone:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (id)selectedDate;
- (void)viewDidLoad;

@end

