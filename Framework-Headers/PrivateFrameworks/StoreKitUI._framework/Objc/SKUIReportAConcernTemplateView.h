//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>
#import <StoreKitUI/UITableViewDataSource-Protocol.h>
#import <StoreKitUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UIFont, UITableView, UITextView, UIView;
@protocol SKUIReportAConcernTemplateViewDelegate;

@interface SKUIReportAConcernTemplateView : SKUIViewReuseView <UITableViewDelegate, UITableViewDataSource, SKUIViewElementView>
{
    NSArray *_concerns;
    UITableView *_concernsTable;
    UIView *_dividerTop;
    UIView *_dividerBottom;
    UIFont *_elementFont;
    UITextView *_headerView;
    long long _selectedIndex;
    UITextView *_titleView;
    id<SKUIReportAConcernTemplateViewDelegate> _delegate;
}

@property (strong, nonatomic) NSArray *concerns; // @synthesize concerns=_concerns;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIReportAConcernTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long selectedIndex;
@property (readonly) Class superclass;

+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)_reloadSubviews;
- (void)_reloadTextView:(id)arg1 withViewElement:(id)arg2 andInsets:(struct UIEdgeInsets)arg3;
- (id)_textForViewElement:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
