//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/NSObject-Protocol.h>

@class CPSessionConfiguration;

@protocol CPSessionConfigurationDelegate <NSObject>

@optional
- (void)sessionConfiguration:(CPSessionConfiguration *)arg1 contentStyleChanged:(unsigned long long)arg2;
- (void)sessionConfiguration:(CPSessionConfiguration *)arg1 limitedUserInterfacesChanged:(unsigned long long)arg2;
@end
