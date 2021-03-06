//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsPredictor-Protocol.h>

@class MapsSuggestionsSignalPackCache, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsPredictor : NSObject <MapsSuggestionsPredictor>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
    MapsSuggestionsSignalPackCache *_signalPackCache;
    int _tempPredictedTransportMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

+ (id)sharedPredictor;
- (void).cxx_destruct;
- (void)cancelCapturingAnalytics;
- (void)captureActualTransportationMode:(int)arg1 originMapItem:(id)arg2 destinationMapItem:(id)arg3;
- (void)capturePredictedTransportationMode:(int)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)predictedTransportModeForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)predictedTransportModeForDestinationMapItem:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (void)storeSignalPack:(id)arg1 forMapItem:(id)arg2 andEntry:(id)arg3;

@end

