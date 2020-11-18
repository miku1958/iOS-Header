//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutAuxillaryKey : NSObject <NSCopying>
{
    BOOL _isSupplementary;
    NSString *_elementKind;
    long long _index;
    long long _auxillaryKind;
}

@property (readonly, nonatomic) long long auxillaryKind; // @synthesize auxillaryKind=_auxillaryKind;
@property (readonly, nonatomic) NSString *elementKind; // @synthesize elementKind=_elementKind;
@property (readonly, nonatomic) long long index; // @synthesize index=_index;
@property (readonly, nonatomic) BOOL isSupplementary; // @synthesize isSupplementary=_isSupplementary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithElementKind:(id)arg1 index:(long long)arg2 auxillaryKind:(long long)arg3 isSupplementary:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;

@end
