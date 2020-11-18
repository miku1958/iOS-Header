//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <GameCenterUI/RemoteUITableFooter-Protocol.h>

@class GKLabel, NSString;

@interface GKRemoteUIFooterView : UIView <RemoteUITableFooter>
{
    BOOL _shouldApplyGameCenterTheme;
    int _layoutStyle;
    GKLabel *_textLabel;
    double _leftMargin;
    double _rightMargin;
    double _bottomMargin;
    double _paragraphMargin;
}

@property (nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property (nonatomic) double paragraphMargin; // @synthesize paragraphMargin=_paragraphMargin;
@property (nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property (nonatomic) BOOL shouldApplyGameCenterTheme; // @synthesize shouldApplyGameCenterTheme=_shouldApplyGameCenterTheme;
@property (readonly) Class superclass;
@property (strong, nonatomic) GKLabel *textLabel; // @synthesize textLabel=_textLabel;

- (void).cxx_destruct;
- (id)attributedStringForString:(id)arg1 withStyle:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;

@end
