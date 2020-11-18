//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSLayoutRelationship-Protocol.h>

@class NSLayoutPoint, NSString;

@interface NSLayoutPointRelationship : NSObject <NSLayoutRelationship>
{
    NSLayoutPoint *_firstLayoutPoint;
    NSLayoutPoint *_secondLayoutPoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSLayoutPoint *firstLayoutPoint; // @synthesize firstLayoutPoint=_firstLayoutPoint;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *relationshipDescription;
@property (readonly, copy) NSLayoutPoint *secondLayoutPoint; // @synthesize secondLayoutPoint=_secondLayoutPoint;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFirstLayoutPoint:(id)arg1 secondLayoutPoint:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)makeChildrenRelationships;

@end
