//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCoding-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>

@class NSNumber;

@interface FCCKTestDatabaseFeedCursor : NSObject <NSCopying, NSCoding>
{
    NSNumber *_order;
    NSNumber *_subOrder;
}

@property (copy, nonatomic) NSNumber *order; // @synthesize order=_order;
@property (copy, nonatomic) NSNumber *subOrder; // @synthesize subOrder=_subOrder;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

