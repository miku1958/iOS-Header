//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class DOMDocument, DOMNode, DOMRange, WebFrame;
@protocol UIWebSelectionBlock;

@protocol UIWebSelectionBlock <NSObject>
- (DOMNode *)asDomNode;
- (DOMRange *)asDomRange;
- (struct CGRect)boundingRect;
- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;
- (BOOL)canShrinkDirectlyToTextOnly;
- (BOOL)containsBlock:(id<UIWebSelectionBlock>)arg1;
- (BOOL)containsRange:(DOMRange *)arg1;
- (DOMDocument *)enclosingDocument;
- (BOOL)isSameBlock:(id<UIWebSelectionBlock>)arg1;
- (id<UIWebSelectionBlock>)largerParent;
- (id<UIWebSelectionBlock>)parentBlock;
- (DOMRange *)rangeOfContents;
- (BOOL)rendersAsBlock;
- (BOOL)selectable;
- (BOOL)strictlyContainsBlock:(id<UIWebSelectionBlock>)arg1;
- (WebFrame *)webFrame;
@end

