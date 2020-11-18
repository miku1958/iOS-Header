//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PSQuotaInfo : NSObject
{
    NSMutableDictionary *_mediaKindDict;
    unsigned long long _totalStorage;
    unsigned long long _usedStorage;
}

@property (nonatomic) unsigned long long totalStorage; // @synthesize totalStorage=_totalStorage;
@property (nonatomic) unsigned long long usedStorage; // @synthesize usedStorage=_usedStorage;

- (void).cxx_destruct;
- (id)init;
- (void)setStorageInUse:(unsigned long long)arg1 forMediaKind:(long long)arg2;
- (unsigned long long)storageInUseForMediaKind:(long long)arg1;

@end

