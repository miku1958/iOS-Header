//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdServices/NSObject-Protocol.h>

@protocol AAAttribution_XPC <NSObject>
- (void)attributionAnalytics:(unsigned long long)arg1 end:(unsigned long long)arg2 Handler:(void (^)(BOOL, NSError *))arg3;
- (void)attributionTokenCompletionHandler:(void (^)(BOOL, NSString *, NSError *))arg1;
@end

