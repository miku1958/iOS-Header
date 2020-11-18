//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/DOMObject.h>

@class DOMNode, NSString;

@interface DOMRange : DOMObject
{
}

@property (readonly) BOOL collapsed;
@property (readonly) DOMNode *commonAncestorContainer;
@property (readonly) DOMNode *endContainer;
@property (readonly) int endOffset;
@property (readonly) DOMNode *startContainer;
@property (readonly) int startOffset;
@property (readonly, copy) NSString *text;

- (id)_text;
- (struct CGRect)boundingBox;
- (id)cloneContents;
- (id)cloneRange;
- (void)collapse:(BOOL)arg1;
- (short)compareBoundaryPoints:(unsigned short)arg1:(id)arg2;
- (short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2;
- (short)compareNode:(id)arg1;
- (short)comparePoint:(id)arg1 offset:(int)arg2;
- (id)createContextualFragment:(id)arg1;
- (void)dealloc;
- (void)deleteContents;
- (id)description;
- (void)detach;
- (void)expand:(id)arg1;
- (void)extend:(unsigned int)arg1 inDirection:(int)arg2;
- (id)extractContents;
- (id)firstNode;
- (void)insertNode:(id)arg1;
- (BOOL)intersectsNode:(id)arg1;
- (BOOL)isPointInRange:(id)arg1 offset:(int)arg2;
- (id)lineBoxRects;
- (void)move:(unsigned int)arg1 inDirection:(int)arg2;
- (struct CGImage *)renderedImageForcingBlackText:(BOOL)arg1;
- (void)selectNode:(id)arg1;
- (void)selectNodeContents:(id)arg1;
- (void)setEnd:(id)arg1:(int)arg2;
- (void)setEnd:(id)arg1 offset:(int)arg2;
- (void)setEndAfter:(id)arg1;
- (void)setEndBefore:(id)arg1;
- (void)setStart:(id)arg1:(int)arg2;
- (void)setStart:(id)arg1 offset:(int)arg2;
- (void)setStartAfter:(id)arg1;
- (void)setStartBefore:(id)arg1;
- (void)surroundContents:(id)arg1;
- (id)textRects;
- (id)toString;

@end

