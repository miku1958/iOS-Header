//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKDOMNode.h>

#import <ITMLKit/IKJSDOMParentNode-Protocol.h>

@class IKDOMElement, IKDOMHTMLCollection;

@interface IKDOMDocumentFragment : IKDOMNode <IKJSDOMParentNode>
{
}

@property (readonly, nonatomic) unsigned long long childElementCount;
@property (readonly, nonatomic) IKDOMHTMLCollection *children;
@property (readonly, nonatomic) IKDOMElement *firstElementChild;
@property (readonly, nonatomic) IKDOMElement *lastElementChild;

- (id)nodeName;
- (long long)nodeType;

@end

