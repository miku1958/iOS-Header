//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXTaggedRect : NSObject
{
    unsigned long long _tag;
    struct CGRect _rect;
}

@property (readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property (readonly, nonatomic) unsigned long long tag; // @synthesize tag=_tag;

- (id)description;
- (id)init;
- (id)initWithRect:(struct CGRect)arg1 tag:(unsigned long long)arg2;

@end
