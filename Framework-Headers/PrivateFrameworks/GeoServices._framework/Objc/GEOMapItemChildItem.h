//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapItemChildAction, GEOMapItemChildPlace, GEOPublisherResult;

@interface GEOMapItemChildItem : NSObject
{
    long long _childItemType;
    GEOMapItemChildPlace *_childItemPlace;
    GEOMapItemChildAction *_childItemAction;
    GEOPublisherResult *_publisherResult;
}

@property (strong, nonatomic) GEOMapItemChildAction *childItemAction; // @synthesize childItemAction=_childItemAction;
@property (strong, nonatomic) GEOMapItemChildPlace *childItemPlace; // @synthesize childItemPlace=_childItemPlace;
@property (nonatomic) long long childItemType; // @synthesize childItemType=_childItemType;
@property (readonly, nonatomic) GEOPublisherResult *publisherResult; // @synthesize publisherResult=_publisherResult;

- (void).cxx_destruct;
- (id)initWithChildItem:(id)arg1;
- (id)initWithChildPlace:(id)arg1;
- (id)initWithPublisherResult:(id)arg1;

@end

