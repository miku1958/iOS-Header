//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/DOMObject.h>

@class DOMNode, NSString;

@interface DOMXPathResult : DOMObject
{
}

@property (readonly) BOOL booleanValue;
@property (readonly) BOOL invalidIteratorState;
@property (readonly) double numberValue;
@property (readonly) unsigned short resultType;
@property (readonly) DOMNode *singleNodeValue;
@property (readonly) unsigned int snapshotLength;
@property (readonly, copy) NSString *stringValue;

- (void)dealloc;
- (id)iterateNext;
- (id)snapshotItem:(unsigned int)arg1;

@end

