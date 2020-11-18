//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NotesUI/NoteTextViewActionDelegate-Protocol.h>
#import <NotesUI/NoteTextViewLayoutDelegate-Protocol.h>
#import <NotesUI/UITextViewDelegate-Protocol.h>
#import <NotesUI/UIWebDraggingDelegate-Protocol.h>

@class DOMHTMLDocument, NSArray, NSLayoutConstraint, NSString, NoteDateLabel, NoteTextView, NotesScrollView, UIScrollView, _UICompatibilityTextView;
@protocol NoteContentLayerDelegate, NotesTextureScrolling;

@interface NoteContentLayer : UIView <NoteTextViewActionDelegate, NoteTextViewLayoutDelegate, UITextViewDelegate, UIWebDraggingDelegate>
{
    BOOL _containsCJK;
    BOOL _tracksMaximumContentLength;
    BOOL _updatedTitleRange;
    id<NoteContentLayerDelegate> _delegate;
    NoteTextView *_textView;
    NSLayoutConstraint *_bottomMarginConstraint;
    NSLayoutConstraint *_dateTopMarginConstraint;
    NSLayoutConstraint *_dateHorizontalContraint;
    NSLayoutConstraint *_textTopMarginConstraint;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
    NotesScrollView *_scrollView;
    UIView *_horizontalLayoutGuide;
    NoteDateLabel *_dateLabel;
    NSString *_noteIdentifierForCurrentlyDraggedItems;
}

@property (strong, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property (nonatomic) BOOL containsCJK; // @synthesize containsCJK=_containsCJK;
@property (readonly, nonatomic) BOOL contentContainsValuableContent;
@property (nonatomic) struct CGPoint contentOffset;
@property (readonly, nonatomic) UIScrollView *contentScrollView;
@property (readonly, nonatomic) _UICompatibilityTextView *contentTextView;
@property (strong, nonatomic) NSLayoutConstraint *dateHorizontalContraint; // @synthesize dateHorizontalContraint=_dateHorizontalContraint;
@property (strong, nonatomic) NoteDateLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property (strong, nonatomic) NSLayoutConstraint *dateTopMarginConstraint; // @synthesize dateTopMarginConstraint=_dateTopMarginConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NoteContentLayerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic) BOOL hasFullHeight;
@property (readonly, nonatomic) BOOL hasFullWidth;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *horizontalLayoutGuide; // @synthesize horizontalLayoutGuide=_horizontalLayoutGuide;
@property (readonly, nonatomic) DOMHTMLDocument *htmlDocument;
@property (strong, nonatomic) NSLayoutConstraint *leftConstraint; // @synthesize leftConstraint=_leftConstraint;
@property (strong, nonatomic) NSString *noteIdentifierForCurrentlyDraggedItems; // @synthesize noteIdentifierForCurrentlyDraggedItems=_noteIdentifierForCurrentlyDraggedItems;
@property (strong, nonatomic) NSLayoutConstraint *rightConstraint; // @synthesize rightConstraint=_rightConstraint;
@property (strong, nonatomic) NotesScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (readonly, nonatomic) NSArray *subWebResources;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSLayoutConstraint *textTopMarginConstraint; // @synthesize textTopMarginConstraint=_textTopMarginConstraint;
@property (strong, nonatomic) NoteTextView *textView; // @synthesize textView=_textView;
@property (weak, nonatomic) id<NotesTextureScrolling> textureScrollingDelegate;
@property (readonly, nonatomic) NSString *title;
@property (nonatomic) BOOL tracksMaximumContentLength; // @synthesize tracksMaximumContentLength=_tracksMaximumContentLength;
@property (nonatomic) BOOL updatedTitleRange; // @synthesize updatedTitleRange=_updatedTitleRange;

- (void).cxx_destruct;
- (id)_webView:(id)arg1 adjustedItemProviders:(id)arg2;
- (BOOL)_webView:(id)arg1 allowsSelectingContentAfterDropForSession:(id)arg2;
- (long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2;
- (long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2;
- (void)_webView:(id)arg1 dropInteraction:(id)arg2 concludeDrop:(id)arg3;
- (BOOL)_webView:(id)arg1 performDropWithItemProviders:(id)arg2;
- (void)_webView:(id)arg1 sessionDidEnter:(id)arg2;
- (void)_webView:(id)arg1 sessionDidExit:(id)arg2;
- (id)_webView:(id)arg1 willUpdateDropProposalToProposal:(id)arg2 forSession:(id)arg3;
- (void)addSubWebResourcesObject:(id)arg1;
- (BOOL)allowsAttachmentsInTextView:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canInsertImagesInTextView:(id)arg1;
- (BOOL)canResignFirstResponder;
- (id)contentAsPasteboardItems;
- (id)contentAsPlainText:(BOOL)arg1;
- (void)dealloc;
- (void)didChangeFullSizeClass;
- (void)flashScrollIndicators;
- (void)forcedSetContainsCJK:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertImageInTextView:(id)arg1;
- (void)invalidateSizeRelatedConstraints;
- (BOOL)isFirstResponder;
- (BOOL)isNoteTextViewVisible:(id)arg1;
- (id)keyCommands;
- (void)layoutSubviews;
- (BOOL)noteTextView:(id)arg1 acceptContentsFromPasteboard:(id)arg2;
- (BOOL)noteTextView:(id)arg1 canHandleLongPressOnElement:(id)arg2;
- (void)noteTextView:(id)arg1 didChangeContentSize:(struct CGSize)arg2;
- (void)noteTextView:(id)arg1 handleLongPressOnElement:(id)arg2 atPoint:(struct CGPoint)arg3;
- (id)readerDelegateInTextView:(id)arg1;
- (struct CGRect)rectForDOMNode:(id)arg1;
- (struct CGRect)rectForSelection;
- (void)reloadInterface;
- (void)replaceSelectionWithNode:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)selectedDOMRange;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContent:(id)arg1 isPlainText:(BOOL)arg2 isCJK:(BOOL)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNotesWebPreferencesOnWebView:(id)arg1;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2;
- (void)setSelectionToStart;
- (void)setTimestampDate:(id)arg1;
- (void)setupDateHorizontalConstraint;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateDateLabel;
- (void)updateHorizontalConstraints;
- (void)updateMarginConstraints;
- (id)viewPrintFormatter;
- (id)webArchive;
- (void)webViewDidChangeNotification:(id)arg1;

@end

