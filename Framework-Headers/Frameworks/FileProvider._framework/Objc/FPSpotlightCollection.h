//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPItemCollection.h>

@interface FPSpotlightCollection : FPItemCollection
{
}

- (void)enumerationResultsDidChange;
- (void)enumerationWasResumed;
- (id)initWithIdentifier:(id)arg1 fileTypes:(id)arg2;
- (void)signalError:(id)arg1;
- (void)startObservingWithEnumerationProperties:(id)arg1;
- (void)startingObservationWithEnumerationProperties:(id)arg1;
- (void)stopObserving;
- (void)stoppingObservation;

@end
