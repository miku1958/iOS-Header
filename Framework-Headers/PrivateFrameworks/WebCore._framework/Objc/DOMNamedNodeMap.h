//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/DOMObject.h>

@interface DOMNamedNodeMap : DOMObject
{
}

@property (readonly) unsigned int length;

- (void)dealloc;
- (void)finalize;
- (id)getNamedItem:(id)arg1;
- (id)getNamedItemNS:(id)arg1:(id)arg2;
- (id)getNamedItemNS:(id)arg1 localName:(id)arg2;
- (id)item:(unsigned int)arg1;
- (id)removeNamedItem:(id)arg1;
- (id)removeNamedItemNS:(id)arg1:(id)arg2;
- (id)removeNamedItemNS:(id)arg1 localName:(id)arg2;
- (id)setNamedItem:(id)arg1;
- (id)setNamedItemNS:(id)arg1;

@end

