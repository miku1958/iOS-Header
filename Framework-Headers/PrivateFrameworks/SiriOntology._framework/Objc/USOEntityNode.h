//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriOntology/USOGraphNode.h>

@interface USOEntityNode : USOGraphNode
{
    struct UsoEntityNode *_usoEntityNode;
}

- (void)addIdentifierWithValue:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3;
- (void)addUtteranceAlignmentWithAsrIndex:(unsigned int)arg1 StartIndex:(unsigned int)arg2 endIndex:(unsigned int)arg3 startUnicodeScalarIndex:(unsigned int)arg4 endUnicodeScalarIndex:(unsigned int)arg5;
- (id)initWithCppEntityNode:(struct UsoEntityNode *)arg1;

@end

