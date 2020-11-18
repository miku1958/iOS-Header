//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRAsset, NSNumber;

@interface BRSlotData : NSObject
{
    BOOL _isProgrammed;
    NSNumber *_slot;
    BRAsset *_asset;
    unsigned long long _refCount;
}

@property (strong, nonatomic) BRAsset *asset; // @synthesize asset=_asset;
@property (nonatomic) BOOL isProgrammed; // @synthesize isProgrammed=_isProgrammed;
@property (readonly, nonatomic) id propertyList;
@property (nonatomic) unsigned long long refCount; // @synthesize refCount=_refCount;
@property (copy, nonatomic) NSNumber *slot; // @synthesize slot=_slot;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithSlotData:(id)arg1;

@end

