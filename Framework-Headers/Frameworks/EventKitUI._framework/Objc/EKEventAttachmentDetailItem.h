//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

#import <EventKitUI/EKEventAttachmentCellControllerDelegate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentDetailItem : EKEventDetailItem <EKEventAttachmentCellControllerDelegate>
{
    NSArray *_cellControllers;
    BOOL _visibilityChanged;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUpCellControllers;
- (void)_setUpCellControllers;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)dealloc;
- (BOOL)detailItemVisibilityChanged;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end

