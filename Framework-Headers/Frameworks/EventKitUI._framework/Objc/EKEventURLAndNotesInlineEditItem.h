//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

@class EKEventNotesInlineEditItem, EKEventURLInlineEditItem;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem
{
    EKEventURLInlineEditItem *_urlEditItem;
    EKEventNotesInlineEditItem *_notesEditItem;
}

- (void).cxx_destruct;
- (void)_contentSizeCategoryChanged;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)init;
- (BOOL)isInline;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSelectedResponder:(id)arg1;

@end
