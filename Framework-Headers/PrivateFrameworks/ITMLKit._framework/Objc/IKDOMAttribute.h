//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKDOMNode.h>

#import <ITMLKit/IKJSDOMAttribute-Protocol.h>

@class NSString;

@interface IKDOMAttribute : IKDOMNode <IKJSDOMAttribute>
{
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) IKDOMNode *ownerElement;
@property (readonly, nonatomic) NSString *value;

- (void)addEventListener:(id)arg1:(id)arg2:(BOOL)arg3;
- (id)appendChild:(id)arg1;
- (id)childNodes;
- (id)cloneNode:(BOOL)arg1;
- (BOOL)dispatchEvent:(id)arg1;
- (id)firstChild;
- (id)getFeature:(id)arg1:(id)arg2;
- (BOOL)hasChildNodes;
- (id)initWithAppContext:(id)arg1 xmlNode:(struct _xmlNode *)arg2;
- (id)insertBefore:(id)arg1:(id)arg2;
- (id)lastChild;
- (id)nextSibling;
- (id)nodeName;
- (long long)nodeType;
- (id)nodeValue;
- (id)previousSibling;
- (id)removeChild:(id)arg1;
- (void)removeEventListener:(id)arg1:(id)arg2:(BOOL)arg3;
- (id)replaceChild:(id)arg1:(id)arg2;
- (id)textContent;

@end
