//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXEdgeSpacing-Protocol.h>

@class NSString;

@interface SXDynamicMargin : NSObject <SXEdgeSpacing>
{
    struct _SXConvertibleValue _top;
    struct _SXConvertibleValue _bottom;
}

@property (readonly, nonatomic) struct _SXConvertibleValue bottom; // @synthesize bottom=_bottom;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct _SXConvertibleValue left; // @dynamic left;
@property (readonly, nonatomic) struct _SXConvertibleValue right; // @dynamic right;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct _SXConvertibleValue top; // @synthesize top=_top;

- (id)initWithTop:(struct _SXConvertibleValue)arg1 andBottom:(struct _SXConvertibleValue)arg2;

@end

