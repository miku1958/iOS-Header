//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteTextInput/NSCopying-Protocol.h>
#import <RemoteTextInput/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSMutableDictionary, TIDocumentState;

@interface RTIDocumentState : NSObject <NSSecureCoding, NSCopying>
{
    TIDocumentState *_documentState;
    NSAttributedString *_textCheckingAnnotatedString;
    NSMutableDictionary *__selectionRects;
    struct CGRect _caretRectInWindow;
    struct CGRect _firstSelectionRectInWindow;
}

@property (strong, nonatomic) NSMutableDictionary *_selectionRects; // @synthesize _selectionRects=__selectionRects;
@property (nonatomic) struct CGRect caretRectInWindow; // @synthesize caretRectInWindow=_caretRectInWindow;
@property (strong, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;
@property (nonatomic) struct CGRect firstSelectionRectInWindow; // @synthesize firstSelectionRectInWindow=_firstSelectionRectInWindow;
@property (readonly, nonatomic) struct _NSRange markedTextRange;
@property (nonatomic) struct _NSRange selectedTextRange;
@property (copy, nonatomic) NSAttributedString *textCheckingAnnotatedString; // @synthesize textCheckingAnnotatedString=_textCheckingAnnotatedString;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addTextRect:(struct CGRect)arg1 forCharacterRange:(struct _NSRange)arg2;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct _NSRange)deltaForSelectionRange:(struct _NSRange)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)resetTextRects;

@end

