//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoUniverse/NSObject-Protocol.h>

@class CLKUIAtlasBacking, CLKUIResourceProviderKey, NSString;

@protocol CLKUIResourceProviderDelegate <NSObject>
- (CLKUIAtlasBacking *)provideAtlasBacking:(NSString *)arg1;
- (CLKUIResourceProviderKey *)resourceProviderKey;
@end

