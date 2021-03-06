//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIActivityIndicatorView, UIButton, UILabel;
@protocol WFRemoteFileStatusViewDelegate;

__attribute__((visibility("hidden")))
@interface WFRemoteFileStatusView : UIView
{
    id<WFRemoteFileStatusViewDelegate> _delegate;
    UIView *_containerView;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_statusLabel;
    UIButton *_recoveryButton;
    NSArray *_emptyConstraints;
    NSArray *_loadingContraints;
    NSArray *_errorConstraints;
}

@property (readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (weak, nonatomic) id<WFRemoteFileStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSArray *emptyConstraints; // @synthesize emptyConstraints=_emptyConstraints;
@property (readonly, nonatomic) NSArray *errorConstraints; // @synthesize errorConstraints=_errorConstraints;
@property (readonly, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property (readonly, nonatomic) NSArray *loadingContraints; // @synthesize loadingContraints=_loadingContraints;
@property (readonly, nonatomic) UIButton *recoveryButton; // @synthesize recoveryButton=_recoveryButton;
@property (readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)recoveryButtonTapped;
- (void)setEmpty;
- (void)setError:(id)arg1;
- (void)setLoading;

@end

