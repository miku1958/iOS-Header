//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaFoundation/MFResettable-Protocol.h>

@class NSError;
@protocol MFPlayerItem;

@protocol MFErrorController <MFResettable>
- (void)resolve:(NSError *)arg1 forItem:(id<MFPlayerItem>)arg2 completion:(void (^)(long long))arg3;
@end
