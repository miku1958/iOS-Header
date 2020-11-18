//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@class NSMutableArray;

@interface MDLVertexDescriptor : NSObject <NSCopying>
{
    NSMutableArray *_attributes;
    NSMutableArray *_layouts;
}

@property (strong, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property (strong, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;

- (void).cxx_destruct;
- (void)addOrReplaceAttribute:(id)arg1;
- (id)attributeNamed:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)debugPrintToFile:(struct __sFILE *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithVertexDescriptor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)removeAttributeNamed:(id)arg1;
- (void)reset;
- (void)setPackedOffsets;
- (void)setPackedStrides;

@end

