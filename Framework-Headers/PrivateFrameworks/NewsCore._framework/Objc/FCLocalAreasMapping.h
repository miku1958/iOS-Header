//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary;

@interface FCLocalAreasMapping : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_data;
    NSDictionary *_regionMap;
    NSArray *_areas;
}

@property (strong, nonatomic) NSArray *areas; // @synthesize areas=_areas;
@property (readonly, nonatomic) unsigned long long count;
@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (strong, nonatomic) NSDictionary *regionMap; // @synthesize regionMap=_regionMap;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)regionsForLocation:(id)arg1;

@end
