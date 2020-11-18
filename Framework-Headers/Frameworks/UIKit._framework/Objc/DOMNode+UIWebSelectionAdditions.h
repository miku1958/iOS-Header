//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMNode.h>

#import <UIKit/UIWebSelectionBlock-Protocol.h>

@class NSString;

@interface DOMNode (UIWebSelectionAdditions) <UIWebSelectionBlock>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)asDomNode;
- (id)asDomRange;
- (id)asElement;
- (struct CGRect)boundingRect;
- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;
- (BOOL)canShrinkDirectlyToTextOnly;
- (BOOL)containsBlock:(id)arg1;
- (BOOL)containsNode:(id)arg1;
- (BOOL)containsRange:(id)arg1;
- (id)enclosingDocument;
- (id)enclosingElementIncludingSelf;
- (id)firstDescendantOfAboutTheSameWidthOrHeight;
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(struct CGRect)arg1 withDescentDirection:(int)arg2;
- (BOOL)hasCustomLineHeight;
- (BOOL)isSameBlock:(id)arg1;
- (id)largerParent;
- (id)lastDescendantOfAboutTheSameWidthOrHeight;
- (id)parentBlock;
- (id)rangeOfContents;
- (BOOL)rendersAsBlock;
- (BOOL)selectable;
- (BOOL)strictlyContainsBlock:(id)arg1;
- (BOOL)strictlyContainsNode:(id)arg1;
- (id)webFrame;
@end

