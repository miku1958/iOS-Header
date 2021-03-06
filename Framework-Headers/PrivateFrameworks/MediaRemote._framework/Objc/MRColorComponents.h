//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRColorProtobuf;

@interface MRColorComponents : NSObject <NSCopying>
{
    float _red;
    float _green;
    float _blue;
    float _alpha;
}

@property (nonatomic) float alpha; // @synthesize alpha=_alpha;
@property (nonatomic) float blue; // @synthesize blue=_blue;
@property (nonatomic) float green; // @synthesize green=_green;
@property (readonly, nonatomic) _MRColorProtobuf *protobuf;
@property (nonatomic) float red; // @synthesize red=_red;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithProtobuf:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

