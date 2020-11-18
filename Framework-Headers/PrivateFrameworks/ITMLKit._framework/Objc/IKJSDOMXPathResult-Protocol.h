//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMNode, NSString;

@protocol IKJSDOMXPathResult <JSExport>

@property (readonly, nonatomic) BOOL booleanValue;
@property (readonly, nonatomic) BOOL invalidIteratorState;
@property (readonly, nonatomic) long long numberValue;
@property (readonly, nonatomic) long long resultType;
@property (readonly, weak, nonatomic) IKDOMNode *singleNodeValue;
@property (readonly, nonatomic) long long snapshotLength;
@property (readonly, weak, nonatomic) NSString *stringValue;

- (IKDOMNode *)iterateNext;
- (IKDOMNode *)snapshotItem:(long long)arg1;
@end
