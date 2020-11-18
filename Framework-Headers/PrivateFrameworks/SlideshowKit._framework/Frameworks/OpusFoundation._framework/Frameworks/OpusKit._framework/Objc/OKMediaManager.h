//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OKMediaManagerDelegate;

@interface OKMediaManager : NSObject
{
    id<OKMediaManagerDelegate> _delegate;
    NSMutableDictionary *_mediaSourcesByScheme;
}

@property (nonatomic) id<OKMediaManagerDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)defaultManager;
- (void)addMediaItemClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (Class)mediaItemClassForURL:(id)arg1;
- (id)mediaItemForURL:(id)arg1;
- (id)mediaItemsForURLs:(id)arg1;
- (id)mediaURLForMediaObject:(id)arg1;
- (id)mediaURLsForMediaObjects:(id)arg1;
- (void)removeMediaItemClass:(Class)arg1;

@end
