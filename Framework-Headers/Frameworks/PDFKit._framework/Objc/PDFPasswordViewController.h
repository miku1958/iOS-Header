//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PDFKit/UIDocumentPasswordViewDelegate-Protocol.h>

@class PDFView, UIView;

__attribute__((visibility("hidden")))
@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate>
{
    UIView *_passwordView;
    PDFView *_pdfView;
}

- (void).cxx_destruct;
- (void)_commonInit;
- (void)loadView;
- (void)setPDFView:(id)arg1;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;

@end

