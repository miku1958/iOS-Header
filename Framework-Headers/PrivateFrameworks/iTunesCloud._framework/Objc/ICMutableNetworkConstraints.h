//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICNetworkConstraints.h>

@interface ICMutableNetworkConstraints : ICNetworkConstraints
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setShouldAllowData:(BOOL)arg1 forNetworkType:(long long)arg2;
- (void)setShouldAllowDataForAllNetworkTypes:(BOOL)arg1;
- (void)setShouldAllowDataForCellularNetworkTypes:(BOOL)arg1;
- (void)setShouldAllowDataForWiFiNetworkTypes:(BOOL)arg1;
- (void)setSizeLimit:(id)arg1 forNetworkType:(long long)arg2;

@end

