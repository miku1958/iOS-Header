//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocompleteUI/CNComposeRecipientTextView.h>

#import <MessageUI/PKScribbleInteractionDelegate-Protocol.h>
#import <MessageUI/PKScribbleInteractionElementSource-Protocol.h>
#import <MessageUI/_UICursorInteractionDelegate-Protocol.h>

@class MFComposeDisplayMetrics, NSString;
@protocol MFMailComposeRecipientTextViewDelegate;

@interface MFMailComposeRecipientTextView : CNComposeRecipientTextView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, _UICursorInteractionDelegate>
{
    MFComposeDisplayMetrics *_displayMetrics;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MFMailComposeRecipientTextViewDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) MFComposeDisplayMetrics *displayMetrics; // @synthesize displayMetrics=_displayMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_displayMetricsDidChange;
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
- (struct CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint)arg2;
- (void)_textInputDidChange:(id)arg1;
- (double)beamHeight;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (struct CGRect)cursorRectForLineContainingGlyphIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutMarginsDidChange;
- (id)nextResponder;
- (void)traitCollectionDidChange:(id)arg1;

@end
