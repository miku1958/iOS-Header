//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class GEOAppStoreApp, NSMutableArray, UIButton, UIImage, UIImageView, UIView, _MKUILabel;
@protocol MKOfficialAppViewDelegate;

__attribute__((visibility("hidden")))
@interface MKOfficialAppView : MKPlaceSectionRowView
{
    UIImageView *_storeAppImageView;
    UIView *_labelContainerView;
    _MKUILabel *_appNameLabel;
    _MKUILabel *_descriptionLabel;
    UIButton *_punchOutButton;
    NSMutableArray *_constraintArray;
    BOOL _layoutShouldStack;
    BOOL _isAppInstalled;
    GEOAppStoreApp *_appStoreApp;
    UIImage *_image;
    id<MKOfficialAppViewDelegate> _delegate;
}

@property (strong, nonatomic) GEOAppStoreApp *appStoreApp; // @synthesize appStoreApp=_appStoreApp;
@property (weak, nonatomic) id<MKOfficialAppViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (nonatomic) BOOL isAppInstalled; // @synthesize isAppInstalled=_isAppInstalled;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_contentSizeDidChangeNotificationHandler;
- (void)_createConstraints;
- (void)_punchOutButtonSelected:(id)arg1;
- (void)_updateFonts;
- (void)_updateLabelText;
- (void)_updateShouldLayoutStack;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateButtonText;

@end

