//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/NSCopying-Protocol.h>

@interface SXComponentLayoutRules : NSObject <NSCopying>
{
    BOOL _allowsIntersection;
    BOOL _shouldSpanAllColumns;
    BOOL _allowsSiblingBasedResizing;
    BOOL _shouldIgnoreDocumentMargin;
    unsigned long long _minimumColumnSpan;
}

@property (nonatomic) BOOL allowsIntersection; // @synthesize allowsIntersection=_allowsIntersection;
@property (nonatomic) BOOL allowsSiblingBasedResizing; // @synthesize allowsSiblingBasedResizing=_allowsSiblingBasedResizing;
@property (nonatomic) unsigned long long minimumColumnSpan; // @synthesize minimumColumnSpan=_minimumColumnSpan;
@property (nonatomic) BOOL shouldIgnoreDocumentMargin; // @synthesize shouldIgnoreDocumentMargin=_shouldIgnoreDocumentMargin;
@property (nonatomic) BOOL shouldSpanAllColumns; // @synthesize shouldSpanAllColumns=_shouldSpanAllColumns;

+ (id)bodyComponentLayoutRules;
+ (id)defaultLayoutRules;
+ (id)fullWidthLayoutRules;
+ (id)twoColumnLayoutRules;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

