//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>
#import <MobileTimer/SYChange-Protocol.h>
#import <MobileTimer/SYObject-Protocol.h>

@class NSData, NSDictionary, PBCodable;
@protocol NSCopying, SYChange;

@protocol MTSerializable <NSObject, SYChange, SYObject>
+ (id<SYChange>)createSYChangeFromProtobuffObject:(PBCodable<NSCopying> *)arg1 changeType:(long long)arg2;
- (NSData *)createProtobufWithOptions:(NSDictionary *)arg1;
- (void)setChangeType:(long long)arg1;
@end
