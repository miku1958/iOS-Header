//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class NSDictionary;

@protocol GKContentRefresh <NSObject>
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (void)_gkResetContents;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(void (^)(NSError *))arg1;

@optional
- (void)_gkForceNextContentUpdate;
- (void)_gkSetContentsNeedUpdateWithHandler:(void (^)(void))arg1;
@end
