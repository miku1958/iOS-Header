//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/NSCopying-Protocol.h>

@class MAGraphReference;

@interface MAGraphSpecification : NSObject <NSCopying>
{
    long long _persistenceOptions;
    Class _defaultNodeClass;
    Class _defaultEdgeClass;
    MAGraphReference *_rootGraphReference;
}

@property (strong) Class defaultEdgeClass; // @synthesize defaultEdgeClass=_defaultEdgeClass;
@property (strong) Class defaultNodeClass; // @synthesize defaultNodeClass=_defaultNodeClass;
@property long long persistenceOptions; // @synthesize persistenceOptions=_persistenceOptions;
@property (strong, nonatomic) MAGraphReference *rootGraphReference; // @synthesize rootGraphReference=_rootGraphReference;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)edgeClassWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (void)enumerateEdgeClassesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateNodeClassesUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (Class)nodeClassWithLabel:(id)arg1 domain:(unsigned short)arg2;

@end

