//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pasteboard/NSObject-Protocol.h>

@class NSString;

@protocol PBDataProviderProtocol <NSObject>
- (void)helloCompletionBlock:(void (^)(void))arg1;
- (void)loadRepresentationForItemAtIndex:(unsigned long long)arg1 type:(NSString *)arg2 completionBlock:(void (^)(NSData *, NSFileHandle *, NSError *))arg3;
@end

