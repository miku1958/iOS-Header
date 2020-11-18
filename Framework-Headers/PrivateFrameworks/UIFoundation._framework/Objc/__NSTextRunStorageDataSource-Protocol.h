//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSObject-Protocol.h>

@protocol NSTextLocation;

@protocol __NSTextRunStorageDataSource <NSObject>

@property (readonly) id<NSTextLocation> baseLocation;
@property (readonly, getter=isCountableDataSource) BOOL countableDataSource;


@optional
- (id<NSTextLocation>)locationFromLocation:(id<NSTextLocation>)arg1 offset:(long long)arg2;
- (long long)offsetFromLocation:(id<NSTextLocation>)arg1 toLocation:(id<NSTextLocation>)arg2;
@end
