//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSLayoutRelationship-Protocol.h>

@class NSArray, NSString;

@interface NSAlignmentLayoutRelationship : NSObject <NSLayoutRelationship>
{
    NSArray *_alignedAnchors;
}

@property (readonly, copy) NSArray *alignedAnchors; // @synthesize alignedAnchors=_alignedAnchors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *relationshipDescription;
@property (readonly) Class superclass;

+ (id)alignmentWithAnchors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithAlignedAnchors:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)makeChildrenRelationships;

@end
