//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSTables/NSObject-Protocol.h>

@class NSString, TSKDocumentRoot;
@protocol TSCEReferenceResolving, TSCEResolverContainer;

@protocol TSCEResolverLocatingProtocol <NSObject>
- (id<TSCEResolverContainer>)resolverContainerMatchingName:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2;
- (id<TSCEReferenceResolving>)resolverMatchingName:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2 contextResolver:(id<TSCEReferenceResolving>)arg3;
- (id<TSCEReferenceResolving>)resolverMatchingNameWithContextContainer:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2 contextContainerName:(NSString *)arg3;
@end
