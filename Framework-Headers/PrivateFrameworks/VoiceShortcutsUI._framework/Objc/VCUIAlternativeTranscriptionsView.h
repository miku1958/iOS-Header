//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VoiceShortcutsUI/UITableViewDataSource-Protocol.h>
#import <VoiceShortcutsUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableView;
@protocol VCUIAlternativeTranscriptionsViewDelegate;

@interface VCUIAlternativeTranscriptionsView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    id<VCUIAlternativeTranscriptionsViewDelegate> _delegate;
    NSArray *_alternativeTranscriptions;
    UITableView *_tableView;
    NSIndexPath *_selectedIndexPath;
}

@property (readonly, copy, nonatomic) NSArray *alternativeTranscriptions; // @synthesize alternativeTranscriptions=_alternativeTranscriptions;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VCUIAlternativeTranscriptionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (id)initWithAlternativeTranscriptions:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end

