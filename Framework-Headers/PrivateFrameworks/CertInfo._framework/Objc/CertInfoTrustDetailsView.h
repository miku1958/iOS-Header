//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CertInfoCertificateDetailsView, NSArray;

@interface CertInfoTrustDetailsView : UIView
{
    NSArray *_certificateViews;
    CertInfoCertificateDetailsView *_currentCertView;
}

- (void).cxx_destruct;
- (void)_appendRemainingCertificates;
- (id)initWithFrame:(struct CGRect)arg1 trustProperties:(id)arg2;
- (void)layoutSubviews;

@end

