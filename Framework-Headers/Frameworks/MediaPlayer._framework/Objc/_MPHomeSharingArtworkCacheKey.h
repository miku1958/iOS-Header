//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _MPHomeSharingArtworkCacheKey : NSObject
{
    unsigned long long _persistentID;
    struct CGSize _size;
}

@property (readonly, nonatomic) unsigned long long persistentID; // @synthesize persistentID=_persistentID;
@property (readonly, nonatomic) struct CGSize size; // @synthesize size=_size;

- (unsigned long long)hash;
- (id)initWithPersistentID:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (BOOL)isEqual:(id)arg1;

@end

