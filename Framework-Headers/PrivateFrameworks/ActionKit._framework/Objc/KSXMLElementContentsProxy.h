//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class KSXMLWriter;

@interface KSXMLElementContentsProxy : NSProxy
{
    id _target;
    KSXMLWriter *_XMLWriter;
    unsigned long long _elementsCount;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (void)ks_prepareWithTarget:(id)arg1 XMLWriter:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;

@end

