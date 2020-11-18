//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPrintPageRenderer.h>

#import <WebUI/UIPrintInteractionControllerDelegate-Protocol.h>

@class NSNumberFormatter, NSString, UIColor, UIFont, UIPrintFormatter;
@protocol WBUPrintPageRendererDelegate;

@interface WBUPrintPageRenderer : UIPrintPageRenderer <UIPrintInteractionControllerDelegate>
{
    NSNumberFormatter *_numberFormatter;
    double _URLWidth;
    NSString *_dateString;
    double _dateWidth;
    double _printWidth;
    struct CGPoint _contentOffset;
    struct CGPoint _footerOffset;
    UIFont *_footerFont;
    UIColor *_footerColor;
    BOOL _printFooter;
    NSString *_URLString;
    UIPrintFormatter *_contentFormatter;
    id<WBUPrintPageRendererDelegate> _delegate;
}

@property (strong, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property (strong, nonatomic) UIPrintFormatter *contentFormatter; // @synthesize contentFormatter=_contentFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WBUPrintPageRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL printFooter; // @synthesize printFooter=_printFooter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)drawFooterForPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (id)init;
- (void)printInteractionControllerDidFinishJob:(id)arg1;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (void)printInteractionControllerWillStartJob:(id)arg1;

@end

