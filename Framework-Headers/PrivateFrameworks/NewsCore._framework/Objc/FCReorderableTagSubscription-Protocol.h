//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NFCopying-Protocol.h>

@class NSNumber, NSString;
@protocol FCReorderableTagSubscription;

@protocol FCReorderableTagSubscription <NFCopying>

@property (readonly, copy, nonatomic) NSNumber *order;
@property (readonly, copy, nonatomic) NSString *tagID;

- (id<FCReorderableTagSubscription>)copyWithOrder:(NSNumber *)arg1;
@end

