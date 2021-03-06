//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChat/NSObject-Protocol.h>

@protocol BCMapItemProtocol;

@protocol BCImageManagerProtocol <NSObject>
- (void)_fetchBrandIconDataForMapItem:(id<BCMapItemProtocol>)arg1 desiredSize:(struct CGSize)arg2 allowSmaller:(BOOL)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (void)_fetchNavBarBrandIconDataForMapItem:(id<BCMapItemProtocol>)arg1 desiredSize:(struct CGSize)arg2 allowSmaller:(BOOL)arg3 completion:(void (^)(NSData *, NSError *))arg4;
@end

