//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/NSCopying-Protocol.h>

@class NSString;

@interface MAPropertyAccessTuple : NSObject <NSCopying>
{
    BOOL _isNode;
    unsigned short _domain;
    unsigned short _label;
    NSString *_propertyKey;
    Class _valueClass;
}

@property (nonatomic) unsigned short domain; // @synthesize domain=_domain;
@property (nonatomic) BOOL isNode; // @synthesize isNode=_isNode;
@property (nonatomic) unsigned short label; // @synthesize label=_label;
@property (strong, nonatomic) NSString *propertyKey; // @synthesize propertyKey=_propertyKey;
@property (nonatomic) Class valueClass; // @synthesize valueClass=_valueClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithDomain:(unsigned short)arg1 label:(unsigned short)arg2 isNode:(BOOL)arg3 propertyKey:(id)arg4 valueClass:(Class)arg5;
- (BOOL)isEqual:(id)arg1;

@end

