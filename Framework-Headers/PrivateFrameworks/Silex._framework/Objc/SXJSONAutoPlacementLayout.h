//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXAutoPlacementLayout-Protocol.h>

@class NSString;
@protocol SXEdgeSpacing;

@interface SXJSONAutoPlacementLayout : SXJSONObject <SXAutoPlacementLayout>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXEdgeSpacing> margin; // @dynamic margin;
@property (readonly) Class superclass;

- (id)marginWithValue:(id)arg1 withType:(int)arg2;

@end

