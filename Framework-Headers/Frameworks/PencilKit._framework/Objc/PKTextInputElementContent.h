//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKTextInputElement, UITextInputTraits, UIView, UIWKDocumentContext;
@protocol UITextInput, UIWKInteractionViewProtocol;

@interface PKTextInputElementContent : NSObject
{
    PKTextInputElement *_element;
    UITextInputTraits *_textInputTraits;
    long long _dataLoadedState;
    id<UITextInput> __textInput;
    UIView<UIWKInteractionViewProtocol> *__webDocumentSourceView;
    id<UITextInput> __webTextInput;
    UIWKDocumentContext *__webDocumentContext;
    NSString *__webComposedContextString;
}

@property (weak, nonatomic) id<UITextInput> _textInput; // @synthesize _textInput=__textInput;
@property (strong, nonatomic) NSString *_webComposedContextString; // @synthesize _webComposedContextString=__webComposedContextString;
@property (strong, nonatomic) UIWKDocumentContext *_webDocumentContext; // @synthesize _webDocumentContext=__webDocumentContext;
@property (weak, nonatomic) UIView<UIWKInteractionViewProtocol> *_webDocumentSourceView; // @synthesize _webDocumentSourceView=__webDocumentSourceView;
@property (weak, nonatomic) id<UITextInput> _webTextInput; // @synthesize _webTextInput=__webTextInput;
@property (readonly, nonatomic) long long contentLength;
@property (nonatomic, setter=_setDataLoadedState:) long long dataLoadedState; // @synthesize dataLoadedState=_dataLoadedState;
@property (readonly, nonatomic) PKTextInputElement *element; // @synthesize element=_element;
@property (readonly, nonatomic) BOOL isReadyForTextEdits;
@property (readonly, nonatomic) BOOL isSingleLineDocument;
@property (readonly, nonatomic) long long keyboardType;
@property (readonly, nonatomic) struct _NSRange selectedRange;
@property (readonly, nonatomic) BOOL supportsAutoLineBreaks;
@property (readonly, nonatomic) NSString *textContentType;
@property (strong, nonatomic) UITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;

- (void).cxx_destruct;
- (BOOL)_needsToLoadData;
- (void)_textInput_enumerateBoundsForCharactersInRange:(struct _NSRange)arg1 inCoordinateSpace:(id)arg2 reverse:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
- (void)_webDocumentContext_enumerateBoundsForCharactersInRange:(struct _NSRange)arg1 inCoordinateSpace:(id)arg2 reverse:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
- (void)_webInsertCommittedTextPhase3:(id)arg1 withAlternatives:(id)arg2 activePreviewText:(id)arg3 replacingRange:(struct _NSRange)arg4 webTextInput:(id)arg5;
- (BOOL)_webInsertTextsToCommitPhase2:(id)arg1 withAlternatives:(id)arg2 activePreviewText:(id)arg3 replacingRange:(struct _NSRange)arg4 committedLength:(long long *)arg5;
- (struct CGRect)caretRectForCharacterIndex:(long long)arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect)caretRectInCoordinateSpace:(id)arg1;
- (long long)characterIndexClosestToPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2 forInsertingText:(BOOL)arg3;
- (BOOL)configureSelectionStyleForDeletionPreview;
- (BOOL)configureSelectionStyleForHighlight;
- (BOOL)configureSelectionStyleForNormalSelection;
- (void)deleteTextInRange:(struct _NSRange)arg1 completion:(CDUnknownBlockType)arg2;
- (id)description;
- (void)enumerateBoundsForCharactersInRange:(struct _NSRange)arg1 inCoordinateSpace:(id)arg2 reverse:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
- (struct CGRect)firstRectForRange:(struct _NSRange)arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect)frameForTextPlaceholder:(id)arg1 inCoordinateSpace:(id)arg2;
- (id)initWithElement:(id)arg1;
- (void)insertTextPlaceholderWithSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertTextsToCommit:(id)arg1 withAlternatives:(id)arg2 activePreviewText:(id)arg3 replacingRange:(struct _NSRange)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)isValidRange:(struct _NSRange)arg1;
- (void)loadDataIfNeededWithTextInput:(id)arg1;
- (void)loadDataIfNeededWithWebDocumentSourceView:(id)arg1 textInput:(id)arg2 rectOfInterest:(struct CGRect)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadTextInputTraitsIfNeededWithTextInput:(id)arg1;
- (void)markAnalyticsForDeletionCount:(unsigned long long)arg1 rangeToReplace:(struct _NSRange)arg2;
- (void)markAnalyticsForInsertionWithTexts:(id)arg1 rangeToReplace:(struct _NSRange)arg2;
- (void)markAnalyticsForSelectionChange:(struct _NSRange)arg1 relativeRangeBefore:(struct _NSRange)arg2;
- (id)protectedCharacterIndexesInRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeOfCharacterAtIndex:(unsigned long long)arg1;
- (id)rectValuesForSelectionRects:(id)arg1 inCoordinateSpace:(id)arg2 visibleOnly:(BOOL)arg3;
- (void)removeTextPlaceholder:(id)arg1 willInsertText:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestUpdatedApproximateCaretRectInCoordinateSpace:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestUpdatedLastSelectionRectForCommittedTextLength:(long long)arg1 targetCoordinateSpace:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)selectTextInRange:(struct _NSRange)arg1 completion:(CDUnknownBlockType)arg2;
- (id)selectionRectsForRange:(struct _NSRange)arg1 inCoordinateSpace:(id)arg2 visibleOnly:(BOOL)arg3;
- (void)setSelectionWithReferencePoint:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)stringInRange:(struct _NSRange)arg1;

@end

