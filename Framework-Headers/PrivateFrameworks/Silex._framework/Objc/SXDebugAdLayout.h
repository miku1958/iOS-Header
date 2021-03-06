//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXAutoPlacementLayout-Protocol.h>

@class NSString;
@protocol SXEdgeSpacing;

@interface SXDebugAdLayout : NSObject <SXAutoPlacementLayout>
{
    id<SXEdgeSpacing> _margin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXEdgeSpacing> margin; // @synthesize margin=_margin;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMargin:(struct _SXConvertibleValue)arg1;

@end

