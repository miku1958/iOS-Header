//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapItem, NSURL, NSURLRequest;

@interface MKMapItemMetadataRequest : NSObject
{
    MKMapItem *_mapItem;
}

@property (strong, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURLRequest *urlRequest;

- (void).cxx_destruct;
- (void)handleData:(id)arg1;
- (void)handleError:(id)arg1;

@end
