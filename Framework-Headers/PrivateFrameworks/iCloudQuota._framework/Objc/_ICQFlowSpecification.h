//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, _ICQPageSpecification;

@interface _ICQFlowSpecification : NSObject
{
    _ICQPageSpecification *_startPage;
    NSDictionary *_pagesByIdentifier;
}

@property (readonly, nonatomic) NSDictionary *pagesByIdentifier; // @synthesize pagesByIdentifier=_pagesByIdentifier;
@property (readonly, nonatomic) _ICQPageSpecification *startPage; // @synthesize startPage=_startPage;

- (void).cxx_destruct;
- (id)initWithPages:(id)arg1;

@end

