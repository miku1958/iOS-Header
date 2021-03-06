//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSMutableCopying-Protocol.h>

@class NSMutableArray;

@interface PXDateRangeSet : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableArray *__dateRanges;
}

@property (strong, nonatomic) NSMutableArray *_dateRanges; // @synthesize _dateRanges=__dateRanges;
@property (readonly, nonatomic) long long count;

+ (id)dateRangeSet;
+ (id)dateRangeSetWithDateRange:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dateRanges;
- (id)description;
- (id)init;
- (id)initWithDateRange:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

