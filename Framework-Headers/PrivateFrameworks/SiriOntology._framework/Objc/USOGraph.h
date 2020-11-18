//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@interface USOGraph : NSObject <NSSecureCoding>
{
    unique_ptr_1f6b481a _usoGraph;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createEntityNode:(const struct OntologyNodeName *)arg1;
- (id)createIntNode:(id)arg1;
- (id)createOperatorNode:(const struct OntologyNodeName *)arg1;
- (id)createStringNode:(id)arg1;
- (id)createTaskNode:(const struct OntologyNodeName *)arg1 verb:(const struct OntologyVerbName *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (struct UsoGraph *)getCppGraph;
- (struct UsoRootNode *)getCppRootNode;
- (id)getRoot;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCppUsoGraph:(unique_ptr_1f6b481a)arg1;

@end
