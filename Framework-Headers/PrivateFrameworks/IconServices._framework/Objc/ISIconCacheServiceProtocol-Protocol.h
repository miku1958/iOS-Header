//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IconServices/NSObject-Protocol.h>

@class ISIconResourceLocator, NSString;

@protocol ISIconCacheServiceProtocol <NSObject>
- (void)clearCachedItemsForBundeID:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)copyIconBitmapCacheConfigurationWithReply:(void (^)(NSURL *, NSString *, NSString *))arg1;
- (void)getIconBitmapDataWithResourceLocator:(ISIconResourceLocator *)arg1 variant:(int)arg2 options:(int)arg3 reply:(void (^)(BOOL, NSData *))arg4;
@end
