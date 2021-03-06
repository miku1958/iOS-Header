//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Timeline/NSCopying-Protocol.h>
#import <Timeline/NSSecureCoding-Protocol.h>

@interface TLTimelineNode : NSObject <NSCopying, NSSecureCoding>
{
    TLTimelineNode *_leftNode;
    TLTimelineNode *_rightNode;
}

@property (strong, nonatomic) TLTimelineNode *leftNode; // @synthesize leftNode=_leftNode;
@property (strong, nonatomic) TLTimelineNode *rightNode; // @synthesize rightNode=_rightNode;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 copyLeftNodes:(BOOL)arg2 copyRightNodes:(BOOL)arg3;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hashIncludingLeftNodes:(BOOL)arg1 includeRightNodes:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToObject:(id)arg1 includingLeftNodes:(BOOL)arg2 includingRightNodes:(BOOL)arg3;

@end

