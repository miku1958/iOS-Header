//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCHStyleOwnerReference : NSObject <NSCopying>
{
    int mType;
    unsigned long long mIndex;
}

@property (readonly, nonatomic) Class genericPropertyMapClass;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) Class nonstyleClass;
@property (readonly, nonatomic) Class styleClass;
@property (readonly, nonatomic) int type;

+ (id)styleOwnerReferenceWithType:(int)arg1 index:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStyleOwnerType:(int)arg1 index:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

