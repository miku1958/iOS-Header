//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/NSCopying-Protocol.h>

@class NSString, WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying>
{
    WebHistoryItemPrivate *_private;
}

@property (readonly, copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *alternateTitle;
@property (readonly, nonatomic) double lastVisitedTimeInterval;
@property (readonly, copy, nonatomic) NSString *originalURLString;
@property (readonly, copy, nonatomic) NSString *title;

+ (id)entryWithURL:(id)arg1;
+ (void)initialize;
- (id)RSSFeedReferrer;
- (id)URL;
- (BOOL)_hasCachedPageExpired;
- (BOOL)_isInPageCache;
- (id)_redirectURLs;
- (float)_scale;
- (BOOL)_scaleIsInitial;
- (struct CGPoint)_scrollPoint;
- (void)_setScale:(float)arg1 isInitial:(BOOL)arg2;
- (void)_setScrollPoint:(struct CGPoint)arg1;
- (void)_setTransientProperty:(id)arg1 forKey:(id)arg2;
- (void)_setViewportArguments:(id)arg1;
- (id)_transientPropertyForKey:(id)arg1;
- (id)_viewportArguments;
- (void)_visitedWithTitle:(id)arg1;
- (id)children;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationIncludingChildren:(BOOL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2;
- (id)initWithURLString:(id)arg1 title:(id)arg2 displayTitle:(id)arg3 lastVisitedTimeInterval:(double)arg4;
- (id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3;
- (id)initWithWebCoreHistoryItem:(Ref_0785b76d *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTargetItem;
- (BOOL)lastVisitWasFailure;
- (struct CGPoint)scrollPoint;
- (void)setRSSFeedReferrer:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setViewState:(id)arg1;
- (id)target;

@end
