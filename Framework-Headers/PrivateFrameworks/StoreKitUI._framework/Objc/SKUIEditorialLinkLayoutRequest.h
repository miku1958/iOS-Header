//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUILayoutRequest-Protocol.h>

@class NSArray, NSString;

@interface SKUIEditorialLinkLayoutRequest : NSObject <SKUILayoutRequest>
{
    NSArray *_links;
    double _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) Class layoutClass;
@property (copy, nonatomic) NSArray *links; // @synthesize links=_links;
@property (readonly) Class superclass;
@property (nonatomic) double width; // @synthesize width=_width;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
