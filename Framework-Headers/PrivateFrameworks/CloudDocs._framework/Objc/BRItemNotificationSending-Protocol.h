//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BRCancellable-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol BRItemNotificationSending <BRCancellable>
- (void)boostPriority:(void (^)(void))arg1;
- (void)watchItemAtURL:(NSURL *)arg1 options:(unsigned short)arg2 reply:(void (^)(int))arg3;
- (void)watchItemsNamesPrefixedBy:(NSString *)arg1 inScopes:(unsigned short)arg2 containerIDs:(NSArray *)arg3 gatheringDone:(void (^)(int))arg4;
- (void)watchScopes:(unsigned short)arg1 containerIDs:(NSArray *)arg2 gatheringDone:(void (^)(int))arg3;
- (void)watchScopes:(unsigned short)arg1 gatheringDone:(void (^)(int))arg2;
@end

