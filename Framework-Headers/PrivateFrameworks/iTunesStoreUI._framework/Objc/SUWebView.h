//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWebView.h>

@class NSString, UIColor, UIView;
@protocol SUWebViewDelegate;

@interface SUWebView : UIWebView
{
    BOOL _isPinned;
    UIColor *_originalBackgroundColor;
    BOOL _originalShowsBackgroundShadow;
    double _pinnedHeaderInsetAdjustment;
    UIView *_pinnedHeaderView;
    unsigned int _scrollingDisabled:1;
    BOOL _showsTopBackgroundShadow;
    long long _synchronousLayoutCount;
    UIColor *_topBackgroundColor;
}

@property (nonatomic) id<SUWebViewDelegate> delegate; // @dynamic delegate;
@property (nonatomic, getter=isScrollingEnabled) BOOL scrollingEnabled;
@property (nonatomic) BOOL showsTopBackgroundShadow; // @synthesize showsTopBackgroundShadow=_showsTopBackgroundShadow;
@property (readonly, nonatomic) NSString *title;
@property (strong, nonatomic) UIColor *topBackgroundColor; // @synthesize topBackgroundColor=_topBackgroundColor;
@property (readonly, nonatomic) id windowScriptObject;

- (void).cxx_destruct;
- (void)_setPinnedHeaderView:(id)arg1 withTopInsetAdjustment:(double)arg2;
- (void)_setRichTextReaderViewportSettings;
- (void)beginSynchronousLayout;
- (void)endSynchronousLayout;
- (BOOL)getStatusBarStyle:(long long *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadArchive:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)view:(id)arg1 didSetFrame:(struct CGRect)arg2 oldFrame:(struct CGRect)arg3;

@end

