//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentTypeDescribing-Protocol.h>

@class SXComponentSizer, SXLayoutAttributes;
@protocol SXComponent, SXComponentLayout;

@protocol SXComponentSizerFactory <SXComponentTypeDescribing>
- (SXComponentSizer *)sizerForComponent:(id<SXComponent>)arg1 componentLayout:(id<SXComponentLayout>)arg2 layoutAttributes:(SXLayoutAttributes *)arg3;
@end
