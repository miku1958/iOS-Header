//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTImpressionableEventHandler.h>

@protocol MTImpressionsEventHandlerDelegate;

@interface MTImpressionsEventHandler : MTImpressionableEventHandler
{
}

@property (weak, nonatomic) id<MTImpressionsEventHandlerDelegate> delegate; // @dynamic delegate;

- (id)eventType;
- (id)eventVersion:(id)arg1;
- (id)knownFields;
- (id)xpViewableThreshold:(id)arg1;

@end
