//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _SFFluidProgressView, _SFNavigationBar;

@interface _SFNavigationBarItem : NSObject
{
    BOOL _showsLockIcon;
    BOOL _showsSearchIndicator;
    BOOL _showsStopReloadButtons;
    BOOL _stopReloadButtonShowsStop;
    BOOL _textHasEVCertificateTint;
    BOOL _lockIconHasEVCertificateTint;
    BOOL _readerButtonSelected;
    BOOL _showsReaderButton;
    BOOL _showsReaderAvailabilityText;
    BOOL _overrideBarStyleForSecurityWarning;
    BOOL _showsNotSecureAnnotation;
    BOOL _hasFocusedSensitiveFieldOnCurrentPage;
    NSString *_text;
    NSString *_textWhenExpanded;
    unsigned long long _startIndexOfTextInExpandedText;
    NSString *_customPlaceholderText;
    _SFFluidProgressView *_progressView;
    unsigned long long _mediaCaptureDeviceIcon;
    _SFNavigationBar *_navigationBar;
}

@property (copy, nonatomic) NSString *customPlaceholderText; // @synthesize customPlaceholderText=_customPlaceholderText;
@property (nonatomic) BOOL hasFocusedSensitiveFieldOnCurrentPage; // @synthesize hasFocusedSensitiveFieldOnCurrentPage=_hasFocusedSensitiveFieldOnCurrentPage;
@property (nonatomic) BOOL lockIconHasEVCertificateTint; // @synthesize lockIconHasEVCertificateTint=_lockIconHasEVCertificateTint;
@property (nonatomic) unsigned long long mediaCaptureDeviceIcon; // @synthesize mediaCaptureDeviceIcon=_mediaCaptureDeviceIcon;
@property (weak, nonatomic, setter=_setNavigationBar:) _SFNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property (nonatomic) BOOL overrideBarStyleForSecurityWarning; // @synthesize overrideBarStyleForSecurityWarning=_overrideBarStyleForSecurityWarning;
@property (strong, nonatomic) _SFFluidProgressView *progressView; // @synthesize progressView=_progressView;
@property (nonatomic) BOOL readerButtonSelected; // @synthesize readerButtonSelected=_readerButtonSelected;
@property (nonatomic) BOOL showsLockIcon; // @synthesize showsLockIcon=_showsLockIcon;
@property (nonatomic) BOOL showsNotSecureAnnotation; // @synthesize showsNotSecureAnnotation=_showsNotSecureAnnotation;
@property (readonly, nonatomic) BOOL showsReaderAvailabilityText; // @synthesize showsReaderAvailabilityText=_showsReaderAvailabilityText;
@property (nonatomic) BOOL showsReaderButton; // @synthesize showsReaderButton=_showsReaderButton;
@property (nonatomic) BOOL showsSearchIndicator; // @synthesize showsSearchIndicator=_showsSearchIndicator;
@property (nonatomic) BOOL showsStopReloadButtons; // @synthesize showsStopReloadButtons=_showsStopReloadButtons;
@property (readonly, nonatomic) unsigned long long startIndexOfTextInExpandedText; // @synthesize startIndexOfTextInExpandedText=_startIndexOfTextInExpandedText;
@property (nonatomic) BOOL stopReloadButtonShowsStop; // @synthesize stopReloadButtonShowsStop=_stopReloadButtonShowsStop;
@property (readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property (nonatomic) BOOL textHasEVCertificateTint; // @synthesize textHasEVCertificateTint=_textHasEVCertificateTint;
@property (readonly, nonatomic) NSString *textWhenExpanded; // @synthesize textWhenExpanded=_textWhenExpanded;

- (void).cxx_destruct;
- (id)init;
- (void)setShowsNotSecureAnnotation:(BOOL)arg1 hasFocusedSensitiveField:(BOOL)arg2;
- (void)setShowsReaderButton:(BOOL)arg1 showsAvailabilityText:(BOOL)arg2;
- (void)setText:(id)arg1 textWhenExpanded:(id)arg2 startIndex:(unsigned long long)arg3;

@end

