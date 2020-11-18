//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCHStyleSemanticTag : NSObject <NSCopying>
{
    int mType;
    unsigned long long mIndex;
}

@property (readonly, nonatomic) unsigned long long index; // @synthesize index=mIndex;
@property (readonly, nonatomic) BOOL isReferenceLine; // @dynamic isReferenceLine;
@property (readonly, nonatomic) BOOL isSeries; // @dynamic isSeries;
@property (readonly, nonatomic) int type; // @synthesize type=mType;

+ (id)styleSemanticTagWithType:(int)arg1 index:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(int)arg1 index:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (Class)styleClass;

@end
