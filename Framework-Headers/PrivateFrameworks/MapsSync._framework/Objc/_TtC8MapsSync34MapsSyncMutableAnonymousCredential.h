//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSync/_TtC8MapsSync23MapsSyncMutableBaseItem.h>

@class MISSING_TYPE, NSData, NSDate;

@interface _TtC8MapsSync34MapsSyncMutableAnonymousCredential : _TtC8MapsSync23MapsSyncMutableBaseItem
{
    MISSING_TYPE *_proxyObject;
}

@property (nonatomic, copy) NSData *anonymousId;
@property (nonatomic, copy) NSData *mapsToken;
@property (nonatomic, copy) NSDate *mapsTokenCreatedAt;
@property (nonatomic) unsigned long long mapsTokenTTL;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)arg1;

@end
