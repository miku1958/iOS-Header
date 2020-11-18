//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOCollectionPublisherAttribution, GEOMapItemIdentifier, GEOPDPublisher, NSString, NSURL;

@interface GEOPublisher : NSObject
{
    GEOPDPublisher *_publisher;
    GEOCollectionPublisherAttribution *_publisherAttribution;
}

@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) GEOCollectionPublisherAttribution *publisherAttribution; // @synthesize publisherAttribution=_publisherAttribution;
@property (readonly, nonatomic) NSString *publisherDescription;
@property (readonly, nonatomic) NSURL *publisherURL;
@property (readonly, nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic) long long totalCollectionCount;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPublisher:(id)arg1 usingAttribution:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
