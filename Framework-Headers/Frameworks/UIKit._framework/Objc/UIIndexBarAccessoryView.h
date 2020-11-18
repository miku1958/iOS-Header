//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIIndexBarView.h>

#import <UIKitCore/UIScrollAccessory-Protocol.h>

@class UIScrollView;
@protocol UIIndexBarAccessoryViewDelegate;

@interface UIIndexBarAccessoryView : UIIndexBarView <UIScrollAccessory>
{
    UIScrollView *_scrollView;
    long long _edge;
}

@property (weak, nonatomic) id<UIIndexBarAccessoryViewDelegate> delegate; // @dynamic delegate;
@property (nonatomic) long long edge; // @synthesize edge=_edge;
@property (readonly, nonatomic) BOOL overlay;
@property (weak, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;

- (void).cxx_destruct;
- (BOOL)_selectEntry:(id)arg1 atIndex:(long long)arg2;
- (id)displayEntryNearestToContentOffset:(struct CGPoint)arg1;
- (void)setEntries:(id)arg1;
- (void)update;

@end
