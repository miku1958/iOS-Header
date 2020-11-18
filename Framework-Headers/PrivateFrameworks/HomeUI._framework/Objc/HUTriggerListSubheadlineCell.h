//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HFItem, HUGridLayoutOptions, NSArray, NSString, UITextView;
@protocol HUResizableCellDelegate, HUTriggerListSubheadlineCellDelegate;

@interface HUTriggerListSubheadlineCell : UITableViewCell <UITextViewDelegate, HUCellProtocol>
{
    BOOL _respectLayoutMargins;
    HFItem *_item;
    UITextView *_descriptionView;
    id<HUTriggerListSubheadlineCellDelegate> _delegate;
    HUGridLayoutOptions *_layoutOptions;
    NSArray *_constraints;
}

@property (strong, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUTriggerListSubheadlineCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UITextView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HFItem *item; // @synthesize item=_item;
@property (strong, nonatomic) HUGridLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (nonatomic) BOOL respectLayoutMargins; // @synthesize respectLayoutMargins=_respectLayoutMargins;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionTextAttributes;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)arg1;
- (void)updateUIWithDescription:(id)arg1;
- (void)updateUIWithResults:(id)arg1 animation:(BOOL)arg2;

@end
