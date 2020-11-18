//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIFactor : TRIPBMessage
{
}

@property (nonatomic) BOOL hasId_p; // @dynamic hasId_p;
@property (nonatomic) BOOL hasName; // @dynamic hasName;
@property (nonatomic) BOOL hasNamespaceId; // @dynamic hasNamespaceId;
@property (nonatomic) BOOL hasNamespaceName; // @dynamic hasNamespaceName;
@property (nonatomic) BOOL hasType; // @dynamic hasType;
@property (copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (nonatomic) int namespaceId; // @dynamic namespaceId;
@property (copy, nonatomic) NSString *namespaceName; // @dynamic namespaceName;
@property (nonatomic) int type; // @dynamic type;

+ (id)descriptor;
- (BOOL)hasNamespace;
- (BOOL)isInNamespaceName:(id)arg1;
- (id)namespaceString;
- (id)typeString;

@end
