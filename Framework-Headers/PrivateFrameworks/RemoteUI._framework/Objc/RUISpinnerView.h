//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

@class RUIFooterElement, RUIHeaderElement, RUIHeaderView, RUIObjectModel, RemoteUISectionFooter, UIActivityIndicatorView, UIColor, UILabel, UIView;

@interface RUISpinnerView : RUIElement
{
    UIView *_view;
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
    RUIHeaderView *_headerView;
    RemoteUISectionFooter *_footerView;
    RUIObjectModel *_objectModel;
    UIColor *_spinnerColor;
    RUIHeaderElement *_header;
    RUIFooterElement *_footer;
}

@property (strong, nonatomic) RUIFooterElement *footer; // @synthesize footer=_footer;
@property (strong, nonatomic) RUIHeaderElement *header; // @synthesize header=_header;
@property (weak, nonatomic) RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property (strong, nonatomic) UIColor *spinnerColor; // @synthesize spinnerColor=_spinnerColor;

- (void).cxx_destruct;
- (id)spinnerView;
- (void)viewDidLayout;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

