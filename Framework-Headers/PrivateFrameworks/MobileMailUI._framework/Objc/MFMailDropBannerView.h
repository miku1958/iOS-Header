//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileMailUI/MFMessageHeaderViewBlock.h>

@class EMMailDropMetadata, MFProgressView, NSLayoutConstraint, UIButton, UILabel;
@protocol MFMailDropBannerDelegate;

@interface MFMailDropBannerView : MFMessageHeaderViewBlock
{
    BOOL _hasLoaded;
    UILabel *_expirationLabel;
    UILabel *_downloadLabel;
    UIButton *_downloadIcon;
    MFProgressView *_progressView;
    NSLayoutConstraint *_iconWrapperWidth;
    NSLayoutConstraint *_labelFirstBaseline;
    NSLayoutConstraint *_expirationFirstBaseline;
    NSLayoutConstraint *_expirationBottom;
    EMMailDropMetadata *_metaData;
    unsigned long long _bannerState;
    double _downloadProgress;
    id<MFMailDropBannerDelegate> _delegate;
}

@property (nonatomic) unsigned long long bannerState; // @synthesize bannerState=_bannerState;
@property (weak, nonatomic) id<MFMailDropBannerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property (strong, nonatomic) EMMailDropMetadata *metaData; // @synthesize metaData=_metaData;

- (void).cxx_destruct;
- (BOOL)_hasDataLocally;
- (void)_setupDownloadIcon;
- (void)_setupDownloadLabel;
- (void)_setupExpirationLabel;
- (BOOL)_shouldDisplayProgress;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSeparatorIsHidden:(BOOL)arg1;
- (BOOL)shouldPresent;
- (void)startDownload:(id)arg1;
- (void)updateConstraints;

@end
