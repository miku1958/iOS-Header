//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <extension/NSLayoutRelationship-Protocol.h>

@class NSDictionary, NSLayoutRect, NSString;

@interface NSVisualFormatLayoutRelationship : NSObject <NSLayoutRelationship>
{
    NSString *_visualFormatString;
    unsigned long long _formatOptions;
    NSDictionary *_metricMapping;
    NSDictionary *_rectMapping;
    NSLayoutRect *_containerRect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *relationshipDescription;
@property (readonly) Class superclass;

+ (id)relationshipWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 rects:(id)arg4 containerRect:(id)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 rects:(id)arg4 containerRect:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)makeChildrenRelationships;

@end

