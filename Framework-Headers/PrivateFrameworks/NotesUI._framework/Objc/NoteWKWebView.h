//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WKWebView.h>

@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView
{
    NoteHTMLEditorView *_noteHTMLEditorView;
}

@property (weak, nonatomic) NoteHTMLEditorView *noteHTMLEditorView; // @synthesize noteHTMLEditorView=_noteHTMLEditorView;

- (void).cxx_destruct;
- (void)_showTextStyleOptions:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)calloutOptionInvoked:(long long)arg1 sender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)ic_evaluateJavaScript:(id)arg1;
- (void)paste:(id)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)strikethrough:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;

@end
